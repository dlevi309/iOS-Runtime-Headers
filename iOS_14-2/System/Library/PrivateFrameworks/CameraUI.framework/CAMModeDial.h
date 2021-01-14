/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDItemProvider.h>

@protocol CAMModeDialDataSource;
@class UIView, NSArray, NSDictionary, CAGradientLayer, NSString;

@interface CAMModeDial : UIControl <CAMAccessibilityHUDItemProvider> {

	long long _layoutStyle;
	id<CAMModeDialDataSource> _dataSource;
	long long _selectedMode;
	UIView* __selectedItemBackgroundView;
	NSArray* __modes;
	NSDictionary* __items;
	UIView* __meshTransformView;
	CAGradientLayer* __gradientLayer;
	UIView* __itemsContainerView;

}

@property (nonatomic,readonly) UIView * _selectedItemBackgroundView;               //@synthesize _selectedItemBackgroundView=__selectedItemBackgroundView - In the implementation block
@property (setter=_setModes:,nonatomic,retain) NSArray * _modes;                   //@synthesize _modes=__modes - In the implementation block
@property (setter=_setItems:,nonatomic,retain) NSDictionary * _items;              //@synthesize _items=__items - In the implementation block
@property (nonatomic,readonly) UIView * _meshTransformView;                        //@synthesize _meshTransformView=__meshTransformView - In the implementation block
@property (nonatomic,readonly) CAGradientLayer * _gradientLayer;                   //@synthesize _gradientLayer=__gradientLayer - In the implementation block
@property (nonatomic,readonly) UIView * _itemsContainerView;                       //@synthesize _itemsContainerView=__itemsContainerView - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) id<CAMModeDialDataSource> dataSource;                 //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long selectedMode;                               //@synthesize selectedMode=_selectedMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsVerticalModeDialForLayoutStyle:(long long)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)setSelectedMode:(long long)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)_setModes:(id)arg1 ;
-(void)_layoutHorizontalModeDial;
-(void)_configureMeshTransformForLayoutStyle:(long long)arg1 ;
-(void)_commonCAMModeDialInitializationWithLayoutStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSDictionary *)_items;
-(UIView *)_selectedItemBackgroundView;
-(void)_updateForLayoutStyle;
-(void)_updateContainerCenterFromSelectedModeAnimated:(BOOL)arg1 ;
-(CGSize)_interpolatedHorizontalMeshTransformSize;
-(long long)layoutStyle;
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(id<CAMModeDialDataSource>)dataSource;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)_selectedItem;
-(NSArray *)_modes;
-(id)_meshTransformForLayoutStyle:(long long)arg1 ;
-(void)setDataSource:(id<CAMModeDialDataSource>)arg1 ;
-(void)layoutSubviews;
-(CAGradientLayer *)_gradientLayer;
-(void)_updateSelectedItemBackgroundForLayoutStyle:(long long)arg1 ;
-(void)reloadData;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateItemsForLayoutStyle:(long long)arg1 ;
-(id)_fontForLayoutStyle:(long long)arg1 selected:(BOOL)arg2 ;
-(void)updateToContentSize:(id)arg1 ;
-(UIView *)_meshTransformView;
-(id)initWithCoder:(id)arg1 ;
-(void)_configureGradientForLayoutStyle:(long long)arg1 ;
-(CGPoint)_horizontalContainerCenterForMode:(long long)arg1 ;
-(void)_setItems:(id)arg1 ;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(long long)selectedMode;
-(long long)_nearestCaptureModeForLocation:(CGPoint)arg1 ;
-(id)_horizontalMeshTransform;
-(double)_centeringNudgeForMode:(long long)arg1 ;
-(void)_layoutVerticalModeDial;
-(UIView *)_itemsContainerView;
-(CGPoint)_verticalContainerCenterForMode:(long long)arg1 ;
@end

