/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/CAStateControllerDelegate.h>
#import <libobjc.A.dylib/SFDeferrableUpdateView.h>

@class UIProgressView, CAStateController, UIBarButtonItem;

@interface SFDownloadsBarButtonItemView : UIButton <CAStateControllerDelegate, SFDeferrableUpdateView> {

	UIProgressView* _progressView;
	double _progress;
	SCD_Struct_SF16 deferrableUpdateViewState;
	CAStateController* _stateController;
	UIBarButtonItem* _barButtonItem;

}

@property (assign,nonatomic,__weak) UIBarButtonItem * barButtonItem;              //@synthesize barButtonItem=_barButtonItem - In the implementation block
+(id)buttonWithBarButtonItem:(id)arg1 ;
-(CGRect)_selectedIndicatorBounds;
-(UIBarButtonItem *)barButtonItem;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(void)pulse;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGRect)_barButtonHitRect;
-(void)_installSubviews;
-(void)updateContents;
-(SCD_Struct_SF16*)deferrableUpdateViewState;
-(void)_buttonPressed;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(BOOL)arg3 ;
-(void)setProgress:(double)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
@end

