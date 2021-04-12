/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>

@class SBHomeGesturePanGestureRecognizer, SBHomeGestureParticipant, NSString;

@interface SBHomeGestureDismissableCoverSheetViewController : CSCoverSheetViewControllerBase <SBHomeGestureParticipantDelegate, SBSystemGestureRecognizerDelegate> {

	BOOL _wantsHomeGestureOwnership;
	SBHomeGesturePanGestureRecognizer* _bottomEdgeRecognizer;
	SBHomeGestureParticipant* _homeGestureParticipant;

}

@property (nonatomic,retain) SBHomeGesturePanGestureRecognizer * bottomEdgeRecognizer;              //@synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer - In the implementation block
@property (assign,nonatomic) BOOL wantsHomeGestureOwnership;                                        //@synthesize wantsHomeGestureOwnership=_wantsHomeGestureOwnership - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * homeGestureParticipant;                     //@synthesize homeGestureParticipant=_homeGestureParticipant - In the implementation block
@property (nonatomic,readonly) long long homeGestureParticipantIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(void)setHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(void)setWantsHomeGestureOwnership:(BOOL)arg1 ;
-(BOOL)wantsHomeGestureOwnership;
-(void)_requestHomeGestureOwnership;
-(void)_relinquishHomeGestureOwnership;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(long long)homeGestureParticipantIdentifier;
-(void)_handleBottomEdgeGesture:(id)arg1 ;
-(void)_handleBottomEdgeGestureBegan:(id)arg1 ;
-(void)_handleBottomEdgeGestureChanged:(id)arg1 ;
-(void)_handleBottomEdgeGestureEnded:(id)arg1 ;
-(BOOL)shouldDismissForHomeGestureRecognizer:(id)arg1 ;
-(SBHomeGesturePanGestureRecognizer *)bottomEdgeRecognizer;
-(void)setBottomEdgeRecognizer:(SBHomeGesturePanGestureRecognizer *)arg1 ;
@end

