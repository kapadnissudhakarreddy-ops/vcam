//
//  Preferences/PSListController.h
//
//  仅用于编译。Preferences.framework 是私有框架，公开 SDK 里没有它的头文件，
//  所以这里放一份"最小声明"：编译期只关心类型和方法签名，
//  运行时由设备上的 /System/Library/PrivateFrameworks/Preferences.framework 提供真实实现
//  （prefs 的 Makefile 里已加 -undefined dynamic_lookup）。
//
//  注意：`_specifiers` 必须声明在第一个 ivar —— 真类里它也是第一个字段，
//  这样方法里访问 `_specifiers` 的偏移才和运行时一致。
//
#import <UIKit/UIKit.h>

@interface PSSpecifier : NSObject
@end

@interface PSListController : UIViewController {
    NSArray *_specifiers;
}
- (NSArray *)specifiers;
- (NSArray *)loadSpecifiersFromPlistName:(NSString *)name target:(id)target;
- (void)reloadSpecifiers;
- (void)setSpecifiers:(NSArray *)specifiers;
- (id)readPreferenceValue:(PSSpecifier *)specifier;
- (void)setPreferenceValue:(id)value specifier:(PSSpecifier *)specifier;
@end
