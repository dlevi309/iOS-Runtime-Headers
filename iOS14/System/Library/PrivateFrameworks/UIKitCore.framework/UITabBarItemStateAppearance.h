/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(id)init;
-(UIColor *)iconColor;
-(_UITabBarItemData *)_data;
-(void)_setData:(id)arg1 ;
-(void)_writeToStorage:(/*^block*/id)arg1 ;
-(NSDictionary *)badgeTextAttributes;
-(void)setIconColor:(UIColor *)arg1 ;
-(void)_clearOwner;
-(NSArray *)itemEffects;
-(void)setItemEffects:(NSArray *)arg1 ;
-(id)_initWithOwner:(id)arg1 data:(id)arg2 state:(long long)arg3 ;
-(void)setBadgeTextAttributes:(NSDictionary *)arg1 ;
-(UIOffset)badgeTitlePositionAdjustment;
-(void)setBadgeTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIColor *)badgeBackgroundColor;
-(void)setBadgeBackgroundColor:(UIColor *)arg1 ;
-(UIOffset)badgePositionAdjustment;
-(void)setBadgePositionAdjustment:(UIOffset)arg1 ;
@end

