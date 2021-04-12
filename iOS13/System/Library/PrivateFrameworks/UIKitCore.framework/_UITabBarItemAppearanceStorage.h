/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor;

@interface _UITabBarItemAppearanceStorage : _UIBarItemAppearanceStorage {

	NSMutableDictionary* _badgeTextAttributesForState;
	UIColor* _badgeColor;
	UIOffset _titleOffset;

}

@property (assign,nonatomic) UIOffset titleOffset;              //@synthesize titleOffset=_titleOffset - In the implementation block
@property (nonatomic,copy) UIColor * badgeColor;                //@synthesize badgeColor=_badgeColor - In the implementation block
-(void)setBadgeColor:(UIColor *)arg1 ;
-(UIColor *)badgeColor;
-(UIOffset)titleOffset;
-(void)setTitleOffset:(UIOffset)arg1 ;
-(id)badgeTextAttributesForState:(unsigned long long)arg1 ;
-(void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)enumerateBadgeTextAttributesWithBlock:(/*^block*/id)arg1 ;
@end

