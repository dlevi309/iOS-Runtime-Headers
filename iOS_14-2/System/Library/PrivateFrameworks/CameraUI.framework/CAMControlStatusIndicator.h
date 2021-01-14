/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDItemProvider.h>

@protocol CAMControlStatusIndicatorDelegate;
@class UIImageView, UILabel, CAMSlashView, CAMSlashMaskView, UIView, NSString;

@interface CAMControlStatusIndicator : UIControl <CAMAccessibilityHUDItemProvider> {

	BOOL _showingValue;
	BOOL __needsUpdateValueText;
	id<CAMControlStatusIndicatorDelegate> _delegate;
	long long _orientation;
	UIImageView* __imageView;
	UIImageView* __outlineView;
	UILabel* __valueLabel;
	CAMSlashView* __slashView;
	CAMSlashMaskView* __slashMaskView;
	UIView* __slashMaskContainer;
	CGSize __valueLabelSize;

}

@property (nonatomic,readonly) UIImageView * _imageView;                                               //@synthesize _imageView=__imageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _outlineView;                                             //@synthesize _outlineView=__outlineView - In the implementation block
@property (nonatomic,readonly) UILabel * _valueLabel;                                                  //@synthesize _valueLabel=__valueLabel - In the implementation block
@property (nonatomic,readonly) CAMSlashView * _slashView;                                              //@synthesize _slashView=__slashView - In the implementation block
@property (nonatomic,readonly) CAMSlashMaskView * _slashMaskView;                                      //@synthesize _slashMaskView=__slashMaskView - In the implementation block
@property (nonatomic,readonly) UIView * _slashMaskContainer;                                           //@synthesize _slashMaskContainer=__slashMaskContainer - In the implementation block
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
+(id)integerFormatter;
+(id)_createStretchableCircleImageFilled:(BOOL)arg1 ;
+(id)_outlineImage;
+(id)_filledOutlineImage;
+(id)decimalFormatter;
-(UIImageView *)_imageView;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateImage;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(id<CAMControlStatusIndicatorDelegate>)delegate;
-(BOOL)shouldUseOutline;
-(id)imageNameForCurrentState;
-(id)hudItemForAccessibilityHUDManager:(id)arg1 ;
-(CAMSlashView *)_slashView;
-(void)updateImageAnimated:(BOOL)arg1 ;
-(void)setDelegate:(id<CAMControlStatusIndicatorDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)canAnimate;
-(void)startAnimating;
-(long long)orientation;
-(void)stopAnimating;
-(UILabel *)_valueLabel;
-(void)selectedByAccessibilityHUDManager:(id)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(id)valueText;
-(UIImageView *)_outlineView;
-(void)setNeedsUpdateValueText;
-(BOOL)shouldUseActiveTintForCurrentState;
-(BOOL)shouldShowOutlineForCurrentState;
-(BOOL)shouldFillOutlineForCurrentState;
-(BOOL)canShowValue;
-(BOOL)shouldUseSlash;
-(BOOL)shouldShowSlashForCurrentState;
-(void)setShowingValue:(BOOL)arg1 ;
-(void)setShowingValue:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateValueLabelVisibilityAnimated:(BOOL)arg1 ;
-(void)_setNeedsUpdateValueText:(BOOL)arg1 ;
-(UIView *)_slashMaskContainer;
-(BOOL)isShowingValue;
-(double)_additionalWidthForValue;
-(CGSize)_valueLabelSize;
-(CAMSlashMaskView *)_slashMaskView;
-(void)_updateSlashAnimated:(BOOL)arg1 ;
-(id)imageForCurrentState;
-(void)_updateValueText;
-(void)_setValueLabelSize:(CGSize)arg1 ;
-(id)imageAnimationFramesForCurrentState;
-(void)_updateImageOrientationAnimated:(BOOL)arg1 ;
-(BOOL)_needsUpdateValueText;
-(BOOL)supportsOrientations;
@end

