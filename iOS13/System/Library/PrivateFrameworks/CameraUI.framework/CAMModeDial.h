/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id<CAMModeDialDataSource>)dataSource;
-(NSDictionary *)_items;
-(void)setDataSource:(id<CAMModeDialDataSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(id)_selectedItem;
-(void)setLayoutStyle:(long long)arg1 ;
-(long long)layoutStyle;
-(void)_setItems:(id)arg1 ;
-(CAGradientLayer *)_gradientLayer;
-(NSArray *)_modes;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(void)_updateForLayoutStyle;
-(void)setSelectedMode:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setSelectedMode:(long long)arg1 ;
-(long long)selectedMode;
-(void)_setModes:(id)arg1 ;
-(void)_configureMeshTransformForLayoutStyle:(long long)arg1 ;
-(void)_configureGradientForLayoutStyle:(long long)arg1 ;
-(void)_commonCAMModeDialInitializationWithLayoutStyle:(long long)arg1 ;
-(void)_layoutVerticalModeDial;
-(void)_layoutHorizontalModeDial;
-(void)_updateContainerCenterFromSelectedModeAnimated:(BOOL)arg1 ;
-(CGSize)_interpolatedHorizontalMeshTransformSize;
-(UIView *)_meshTransformView;
-(UIView *)_itemsContainerView;
-(id)_fontForLayoutStyle:(long long)arg1 selected:(BOOL)arg2 ;
-(double)_centeringNudgeForMode:(long long)arg1 ;
-(CGPoint)_verticalContainerCenterForMode:(long long)arg1 ;
-(CGPoint)_horizontalContainerCenterForMode:(long long)arg1 ;
-(id)_horizontalMeshTransform;
-(id)_meshTransformForLayoutStyle:(long long)arg1 ;
-(long long)_nearestCaptureModeForLocation:(CGPoint)arg1 ;
-(void)_updateItemsForLayoutStyle:(long long)arg1 ;
-(void)_updateSelectedItemBackgroundForLayoutStyle:(long long)arg1 ;
-(UIView *)_selectedItemBackgroundView;
@end

