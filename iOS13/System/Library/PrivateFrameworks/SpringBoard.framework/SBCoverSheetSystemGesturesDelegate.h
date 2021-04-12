/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setViewController:(UIViewController *)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIViewController *)viewController;
-(void)setDismissGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)dismissGestureRecognizer;
-(BOOL)isDismissGestureActive;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(BOOL)isAnyGestureActivelyRecognized;
-(id)initWithViewController:(id)arg1 dismissGestureRecognizer:(id)arg2 dismissAddendumGestureRecognizer:(id)arg3 dismissalPreemptingGestureRecognizer:(id)arg4 ;
-(void)setIndirectDismissGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(void)setIndirectPresentGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(void)setScrunchDismissGestureRecognizer:(SBFluidScrunchGestureRecognizer *)arg1 ;
-(void)setPositionProvider:(id<SBCoverSheetSystemGestureDelegatePositionProviding>)arg1 ;
-(BOOL)isPresentGestureActive;
-(int)syntheticAppearState;
-(UIGestureRecognizer *)dismissAddendumGestureRecognizer;
-(void)setSyntheticAppearState:(int)arg1 ;
-(SBIndirectPanGestureRecognizer *)indirectPresentGestureRecognizer;
-(SBIndirectPanGestureRecognizer *)indirectDismissGestureRecognizer;
-(SBFluidScrunchGestureRecognizer *)scrunchDismissGestureRecognizer;
-(id)dismissGestures;
-(UIPanGestureRecognizer *)presentGestureRecognizer;
-(void)setDismissAddendumGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(long long)indirectPanEffectiveInterfaceOrientation;
-(void)setPresentGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(void)setPreemptingGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(BOOL)_canPresentGestureBegin;
-(id)presentGestures;
-(BOOL)_areAnyGesturesRecognizedInSet:(id)arg1 ;
-(BOOL)_canDismissGestureBegin;
-(BOOL)_isGestureActivelyRecognized:(id)arg1 ;
-(void)setPresentGestureFailureRequirements:(id)arg1 ;
-(BOOL)_isGestureAllowedByTransientOverlaysOrTopmostApp;
-(id<SBCoverSheetSystemGestureDelegatePositionProviding>)positionProvider;
-(UIGestureRecognizer *)preemptingGestureRecognizer;
-(CSCoverSheetDismissGestureSettings *)dismissGestureSettings;
-(void)setDismissGestureSettings:(CSCoverSheetDismissGestureSettings *)arg1 ;
@end

