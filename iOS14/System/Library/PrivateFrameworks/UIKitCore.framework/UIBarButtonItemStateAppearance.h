/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIBarButtonItemAppearance, _UIBarButtonItemData, NSArray, NSDictionary, UIImage;

@interface UIBarButtonItemStateAppearance : NSObject {

	UIBarButtonItemAppearance* _owner;
	long long _state;
	_UIBarButtonItemData* _data;
	NSArray* _itemEffects;

}

@property (nonatomic,retain) _UIBarButtonItemData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSArray * itemEffects;                                     //@synthesize itemEffects=_itemEffects - In the implementation block
@property (nonatomic,copy) NSDictionary * titleTextAttributes; 
@property (assign,nonatomic) UIOffset titlePositionAdjustment; 
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (assign,nonatomic) UIOffset backgroundImagePositionAdjustment; 
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(id)init;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setData:(_UIBarButtonItemData *)arg1 ;
-(void)_writeToStorage:(/*^block*/id)arg1 ;
-(_UIBarButtonItemData *)data;
-(void)_clearOwner;
-(NSArray *)itemEffects;
-(UIOffset)backgroundImagePositionAdjustment;
-(void)setBackgroundImagePositionAdjustment:(UIOffset)arg1 ;
-(void)setItemEffects:(NSArray *)arg1 ;
-(UIImage *)backgroundImage;
-(id)_initWithOwner:(id)arg1 data:(id)arg2 state:(long long)arg3 ;
@end

