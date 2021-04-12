/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarAppearanceData.h>

@class NSDictionary, UIColor, UIImageSymbolConfiguration;

@interface _UITabBarItemData : _UIBarAppearanceData {

	long long _style;
	NSDictionary* _titleTextAttributes[5];
	NSDictionary* _badgeTextAttributes[5];
	UIColor* _iconColor[5];
	UIColor* _badgeBackgroundColor[5];
	UIOffset _titlePositionAdjustment[5];
	UIOffset _badgePositionAdjustment[5];
	UIOffset _badgeTitlePositionAdjustment[5];
	struct {
		unsigned hasUserTitleFont : 1;
		unsigned hasUserTitleColor : 1;
		unsigned hasUserTitlePosition : 1;
		unsigned hasUserIconColor : 1;
		unsigned hasUserBadgePosition : 1;
		unsigned hasUserBadgeBackgroundColor : 1;
		unsigned hasUserBadgeTitleFont : 1;
		unsigned hasUserBadgeTitleColor : 1;
		unsigned hasUserBadgeTitlePosition : 1;
	}  _stateFlags[5];

}

@property (nonatomic,readonly) UIImageSymbolConfiguration * preferredSymbolConfiguration; 
+(id)decodeFromCoder:(id)arg1 prefix:(id)arg2 ;
+(id)standardItemDataForStyle:(long long)arg1 ;
-(void)encodeToCoder:(id)arg1 prefix:(id)arg2 ;
-(void)describeInto:(id)arg1 ;
-(id)replicate;
-(long long)hashInto:(long long)arg1 ;
-(BOOL)checkEqualTo:(id)arg1 ;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(UIOffset)titlePositionAdjustmentForState:(long long)arg1 ;
-(id)titleTextAttributesForState:(long long)arg1 ;
-(void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2 ;
-(id)badgeTextAttributesForState:(long long)arg1 ;
-(void)setBadgeTextAttributes:(id)arg1 forState:(long long)arg2 ;
-(id)iconColorForState:(long long)arg1 ;
-(UIOffset)badgePositionAdjustmentForState:(long long)arg1 ;
-(id)badgeBackgroundColorForState:(long long)arg1 ;
-(UIOffset)badgeTitlePositionAdjustmentForState:(long long)arg1 ;
-(BOOL)titleTextAttributesSpecifyColorForState:(long long)arg1 ;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 forState:(long long)arg2 ;
-(void)setIconColor:(id)arg1 forState:(long long)arg2 ;
-(void)setBadgeTitlePositionAdjustment:(UIOffset)arg1 forState:(long long)arg2 ;
-(void)setBadgeBackgroundColor:(id)arg1 forState:(long long)arg2 ;
-(void)setBadgePositionAdjustment:(UIOffset)arg1 forState:(long long)arg2 ;
-(void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2 ;
-(void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2 ;
-(void)_decodeBadgeTextAttributesFromCoder:(id)arg1 prefix:(id)arg2 ;
-(void)_decodeIconColorFromCoder:(id)arg1 prefix:(id)arg2 ;
-(void)_decodeBadgeBackgroundColorFromCoder:(id)arg1 prefix:(id)arg2 ;
-(void)_decodeBadgePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2 ;
-(void)_decodeBadgeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2 ;
-(id)_fallbackTitleFontForState:(long long)arg1 ;
-(id)_fallbackTitleColorForState:(long long)arg1 ;
-(id)_fallbackBadgeTitleFontForState:(long long)arg1 ;
-(id)_fallbackBadgeTitleColorForState:(long long)arg1 ;
@end

