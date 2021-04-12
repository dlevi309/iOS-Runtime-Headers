/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/WBSFluidProgressControllerDelegate.h>

@protocol _SFFluidProgressViewDelegate;
@class UIView, WBSFluidProgressState, UIColor, NSString;

@interface _SFFluidProgressView : UIView <WBSFluidProgressControllerDelegate> {

	UIView* _progressBar;
	UIView* _clippingView;
	WBSFluidProgressState* _state;
	BOOL _progressAnimationSuppressed;
	id<_SFFluidProgressViewDelegate> _delegate;
	UIColor* _progressBarFillColor;
	double _cornerRadius;

}

@property (assign,nonatomic) BOOL progressAnimationSuppressed;                              //@synthesize progressAnimationSuppressed=_progressAnimationSuppressed - In the implementation block
@property (assign,nonatomic,__weak) id<_SFFluidProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isShowingProgress,nonatomic,readonly) BOOL showingProgress; 
@property (nonatomic,retain) UIColor * progressBarFillColor;                                //@synthesize progressBarFillColor=_progressBarFillColor - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                           //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultHeight;
-(id<_SFFluidProgressViewDelegate>)delegate;
-(void)setDelegate:(id<_SFFluidProgressViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(double)cornerRadius;
-(CGRect)_progressBarBoundsForValue:(double)arg1 ;
-(void)_finishProgressBarWithDuration:(double)arg1 ;
-(void)fluidProgressController:(id)arg1 updateFluidProgressBar:(id)arg2 ;
-(void)_animateUsingDefaultTiming:(BOOL)arg1 stepAnimationTime:(double)arg2 options:(unsigned long long)arg3 animations:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)fluidProgressController:(id)arg1 startFluidProgressBar:(id)arg2 animateFillFade:(BOOL)arg3 ;
-(void)fluidProgressControllerFinishProgressBar:(id)arg1 animateFillFade:(BOOL)arg2 ;
-(void)fluidProgressController:(id)arg1 setProgressToCurrentPosition:(id)arg2 ;
-(void)setProgressBarFillColor:(UIColor *)arg1 ;
-(void)setProgressAnimationSuppressed:(BOOL)arg1 duringFluidProgressState:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)isShowingProgress;
-(BOOL)progressAnimationSuppressed;
-(void)setProgressAnimationSuppressed:(BOOL)arg1 ;
-(UIColor *)progressBarFillColor;
@end

