/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)enumerateBadgeTextAttributesWithBlock:(/*^block*/id)arg1 ;
-(UIColor *)badgeColor;
-(UIOffset)titleOffset;
-(void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)badgeTextAttributesForState:(unsigned long long)arg1 ;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(void)setTitleOffset:(UIOffset)arg1 ;
@end

