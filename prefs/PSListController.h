// 私有框架 Preferences 的最小声明，只用于编译；运行时由设备上的真框架提供实现
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
