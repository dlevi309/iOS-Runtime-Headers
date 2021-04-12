/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UITabBarItemAppearance, _UITabBarItemData, NSArray, NSDictionary, UIColor;

@interface UITabBarItemStateAppearance : NSObject {

	UITabBarItemAppearance* _owner;
	long long _state;
	_UITabBarItemData* _data;
	NSArray* _itemEffects;

}

@property (setter=_setData:,nonatomic,retain) _UITabBarItemData * _data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSArray * itemEffects;                                     //@synthesize itemEffects=_itemEffects - In the implementation block
@property (nonatomic,copy) NSDictionary * titleTextAttributes; 
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (nonatomic,copy) UIColor * iconColor; 
@property (assign,nonatomic) UIOffset badgePositionAdjustment; 
@property (nonatomic,copy) UIColor * badgeBackgroundColor; 
@property (nonatomic,copy) NSDictionary * badgeTextAttributes; 
@property (assign,nonatomic) UIOffset badgeTitlePositionAdjustment; 
-(id)init;
-(_UITabBarItemData *)_data;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)_writeToStorage:(/*^block*/id)arg1 ;
-(id)_initWithOwner:(id)arg1 data:(id)arg2 state:(long long)arg3 ;
-(void)_clearOwner;
-(UIColor *)iconColor;
-(void)setIconColor:(UIColor *)arg1 ;
-(NSDictionary *)badgeTextAttributes;
-(void)setBadgeTextAttributes:(NSDictionary *)arg1 ;
-(UIOffset)badgeTitlePositionAdjustment;
-(void)setBadgeTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIColor *)badgeBackgroundColor;
-(void)setBadgeBackgroundColor:(UIColor *)arg1 ;
-(UIOffset)badgePositionAdjustment;
-(void)setBadgePositionAdjustment:(UIOffset)arg1 ;
-(void)_setData:(id)arg1 ;
-(NSArray *)itemEffects;
-(void)setItemEffects:(NSArray *)arg1 ;
@end

