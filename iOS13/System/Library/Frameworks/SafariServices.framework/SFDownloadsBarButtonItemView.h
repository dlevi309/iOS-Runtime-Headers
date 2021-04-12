/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/SFDeferrableUpdateView.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>

@class UIProgressView, CAStateController, UIBarButtonItem;

@interface SFDownloadsBarButtonItemView : UIButton <SFDeferrableUpdateView, CAStateControllerDelegate> {

	UIProgressView* _progressView;
	double _barButtonItemWidth;
	double _progress;
	SCD_Struct_SF15 deferrableUpdateViewState;
	CAStateController* _stateController;
	UIBarButtonItem* _barButtonItem;

}

@property (assign,nonatomic,__weak) UIBarButtonItem * barButtonItem;              //@synthesize barButtonItem=_barButtonItem - In the implementation block
+(id)buttonWithBarButtonItem:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setProgress:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)tintColorDidChange;
-(void)didMoveToWindow;
-(UIBarButtonItem *)barButtonItem;
-(id)cursorInteraction:(id)arg1 regionForLocation:(CGPoint)arg2 defaultRegion:(id)arg3 ;
-(CGRect)_selectedIndicatorBounds;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(void)pulse;
-(void)_buttonPressed;
-(CGRect)_barButtonHitRect;
-(void)updateContents;
-(SCD_Struct_SF15*)deferrableUpdateViewState;
@end

