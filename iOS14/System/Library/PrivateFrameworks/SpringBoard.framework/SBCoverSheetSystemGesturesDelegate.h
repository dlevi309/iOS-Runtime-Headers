/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBTouchTemplateGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBIndirectPanGestureRecognizerOrientationProviding.h>

@protocol SBCoverSheetSystemGestureDelegatePositionProviding;
@class UIPanGestureRecognizer, SBIndirectPanGestureRecognizer, SBFluidScrunchGestureRecognizer, UIViewController, UIGestureRecognizer, CSCoverSheetDismissGestureSettings, NSString;

@interface SBCoverSheetSystemGesturesDelegate : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, SBIndirectPanGestureRecognizerOrientationProviding> {

	int _syntheticAppearState;
	id<SBCoverSheetSystemGestureDelegatePositionProviding> _positionProvider;
	UIPanGestureRecognizer* _presentGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectPresentGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectDismissGestureRecognizer;
	SBFluidScrunchGestureRecognizer* _scrunchDismissGestureRecognizer;
	UIViewController* _viewController;
	UIGestureRecognizer* _dismissGestureRecognizer;
	UIGestureRecognizer* _dismissAddendumGestureRecognizer;
	UIGestureRecognizer* _preemptingGestureRecognizer;
	CSCoverSheetDismissGestureSettings* _dismissGestureSettings;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                                                    //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * dismissGestureRecognizer;                                       //@synthesize dismissGestureRecognizer=_dismissGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * dismissAddendumGestureRecognizer;                               //@synthesize dismissAddendumGestureRecognizer=_dismissAddendumGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) UIGestureRecognizer * preemptingGestureRecognizer;                                    //@synthesize preemptingGestureRecognizer=_preemptingGestureRecognizer - In the implementation block
@property (nonatomic,retain) CSCoverSheetDismissGestureSettings * dismissGestureSettings;                                 //@synthesize dismissGestureSettings=_dismissGestureSettings - In the implementation block
@property (assign,nonatomic,__weak) id<SBCoverSheetSystemGestureDelegatePositionProviding> positionProvider;              //@synthesize positionProvider=_positionProvider - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * presentGestureRecognizer;                                           //@synthesize presentGestureRecognizer=_presentGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectPresentGestureRecognizer;                           //@synthesize indirectPresentGestureRecognizer=_indirectPresentGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectDismissGestureRecognizer;                           //@synthesize indirectDismissGestureRecognizer=_indirectDismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFluidScrunchGestureRecognizer * scrunchDismissGestureRecognizer;                           //@synthesize scrunchDismissGestureRecognizer=_scrunchDismissGestureRecognizer - In the implementation block
@property (assign,nonatomic) int syntheticAppearState;                                                                    //@synthesize syntheticAppearState=_syntheticAppearState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBIndirectPanGestureRecognizer *)indirectDismissGestureRecognizer;
-(void)setScrunchDismissGestureRecognizer:(SBFluidScrunchGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)dismissAddendumGestureRecognizer;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setIndirectPresentGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(void)setIndirectDismissGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(void)setPreemptingGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setDismissAddendumGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(SBFluidScrunchGestureRecognizer *)scrunchDismissGestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)isAnyGestureActivelyRecognized;
-(BOOL)isDismissGestureActive;
-(SBIndirectPanGestureRecognizer *)indirectPresentGestureRecognizer;
-(id)dismissGestures;
-(BOOL)_canDismissGestureBegin;
-(UIGestureRecognizer *)dismissGestureRecognizer;
-(BOOL)isPresentGestureActive;
-(void)setDismissGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(BOOL)_canPresentGestureBegin;
-(void)setPresentGestureFailureRequirements:(id)arg1 ;
-(UIGestureRecognizer *)preemptingGestureRecognizer;
-(void)setSyntheticAppearState:(int)arg1 ;
-(UIViewController *)viewController;
-(BOOL)_isGestureActivelyRecognized:(id)arg1 ;
-(void)setPositionProvider:(id<SBCoverSheetSystemGestureDelegatePositionProviding>)arg1 ;
-(UIPanGestureRecognizer *)presentGestureRecognizer;
-(int)syntheticAppearState;
-(void)setDismissGestureSettings:(CSCoverSheetDismissGestureSettings *)arg1 ;
-(void)setPresentGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(BOOL)_areAnyGesturesRecognizedInSet:(id)arg1 ;
-(CSCoverSheetDismissGestureSettings *)dismissGestureSettings;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)_isGestureAllowedByTransientOverlaysOrTopmostApp;
-(id)initWithViewController:(id)arg1 dismissGestureRecognizer:(id)arg2 dismissAddendumGestureRecognizer:(id)arg3 dismissalPreemptingGestureRecognizer:(id)arg4 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(id)presentGestures;
-(id<SBCoverSheetSystemGestureDelegatePositionProviding>)positionProvider;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)indirectPanEffectiveInterfaceOrientation;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
@end

