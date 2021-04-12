/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(_UIBarButtonItemData *)data;
-(void)setData:(_UIBarButtonItemData *)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)titleTextAttributes;
-(void)setTitlePositionAdjustment:(UIOffset)arg1 ;
-(UIOffset)titlePositionAdjustment;
-(void)_writeToStorage:(/*^block*/id)arg1 ;
-(id)_initWithOwner:(id)arg1 data:(id)arg2 state:(long long)arg3 ;
-(void)_clearOwner;
-(NSArray *)itemEffects;
-(void)setItemEffects:(NSArray *)arg1 ;
-(UIOffset)backgroundImagePositionAdjustment;
-(void)setBackgroundImagePositionAdjustment:(UIOffset)arg1 ;
@end

