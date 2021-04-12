/*
* Generated on Monday, March 1, 2021 at 2:33:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDItemProvider.h>

@protocol CAMControlStatusIndicatorDelegate;
@class UIImageView, UILabel, NSString;

@interface CAMControlStatusIndicator : UIControl <CAMAccessibilityHUDItemProvider> {

	BOOL _showingValue;
	BOOL __needsUpdateValueText;
	id<CAMControlStatusIndicatorDelegate> _delegate;
	long long _orientation;
	UIImageView* __imageView;
	UIImageView* __outlineView;
	UILabel* __valueLabel;
	CGSize __valueLabelSize;

}

@property (nonatomic,readonly) UIImageView * _imageView;                                               //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _outlineView;                                             //@synthesize _outlineView=__outlineView - In the implementation block
@property (nonatomic,readonly) UILabel * _valueLabel;                                                  //@synthesize _valueLabel=__valueLabel - In the implementation block
@property (assign,setter=_setValueLabelSize:,nonatomic) CGSize _valueLabelSize;                        //@synthesize _valueLabelSize=__valueLabelSize - In the implementation block
@property (assign,setter=_setNeedsUpdateValueText:,nonatomic) BOOL _needsUpdateValueText;              //@synthesize _needsUpdateValueText=__needsUpdateValueText - In the implementation block
@property (assign,nonatomic,__weak) id<CAMControlStatusIndicatorDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long orientation;                                                    //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) BOOL canShowValue; 
@property (assign,getter=isShowingValue,nonatomic) BOOL showingValue;                                  //@synthesize showingValue=_showingValue - In the implementation block
@property (nonatomic,readonly) BOOL canAnimate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)decimalFormatter;
+(id)integerFormatter;
+(id)_createStretchableCircleImageFilled:(BOOL)arg1 ;
+(id)_outlineImage;
+(id)_filledOutlineImage;
-(id<CAMControlStatusIndicatorDelegate>)delegate;
-(void)setDelegate:(id<CAMControlStatusIndicatorDelegate>)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)_imageView;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)startAnimating;
-(void)stopAnimating;
-(void)updateImage;
-(UILabel *)_valueLabel;
-(UIImageView *)_outlineView;
-(id)valueText;
-(BOOL)canAnimate;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(void)setNeedsUpdateValueText;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldShowOutlineForCurrentState;
-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)canShowValue;
-(void)setShowingValue:(BOOL)arg1 ;
-(void)setShowingValue:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateValueLabelVisibilityAnimated:(BOOL)arg1 ;
-(void)_setNeedsUpdateValueText:(BOOL)arg1 ;
-(BOOL)isShowingValue;
-(double)_additionalWidthForValue;
-(CGSize)_valueLabelSize;
-(id)imageForCurrentState;
-(void)_updateValueText;
-(void)_setValueLabelSize:(CGSize)arg1 ;
-(id)imageAnimationFramesForCurrentState;
-(void)_updateImageOrientationAnimated:(BOOL)arg1 ;
-(BOOL)_needsUpdateValueText;
@end

