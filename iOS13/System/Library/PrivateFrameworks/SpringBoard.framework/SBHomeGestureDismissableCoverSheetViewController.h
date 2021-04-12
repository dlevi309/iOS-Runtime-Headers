/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>

@class SBHomeGesturePanGestureRecognizer, SBHomeGestureParticipant, NSString;

@interface SBHomeGestureDismissableCoverSheetViewController : CSCoverSheetViewControllerBase <SBHomeGestureParticipantDelegate, SBSystemGestureRecognizerDelegate> {

	SBHomeGesturePanGestureRecognizer* _bottomEdgeRecognizer;
	SBHomeGestureParticipant* _homeGestureParticipant;

}

@property (nonatomic,retain) SBHomeGesturePanGestureRecognizer * bottomEdgeRecognizer;              //@synthesize bottomEdgeRecognizer=_bottomEdgeRecognizer - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * homeGestureParticipant;                     //@synthesize homeGestureParticipant=_homeGestureParticipant - In the implementation block
@property (nonatomic,readonly) long long homeGestureParticipantIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)_handleBottomEdgeGestureBegan:(id)arg1 ;
-(void)_handleBottomEdgeGestureChanged:(id)arg1 ;
-(void)_handleBottomEdgeGestureEnded:(id)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(long long)homeGestureParticipantIdentifier;
-(void)setHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(void)_handleBottomEdgeGesture:(id)arg1 ;
-(void)_requestHomeGestureOwnership;
-(void)_relinquishHomeGestureOwnership;
-(BOOL)shouldDismissForHomeGestureRecognizer:(id)arg1 ;
-(SBHomeGesturePanGestureRecognizer *)bottomEdgeRecognizer;
-(void)setBottomEdgeRecognizer:(SBHomeGesturePanGestureRecognizer *)arg1 ;
@end

