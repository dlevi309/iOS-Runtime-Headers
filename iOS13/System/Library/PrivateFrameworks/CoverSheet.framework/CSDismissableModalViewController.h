/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSPresentationViewController.h>
#import <libobjc.A.dylib/CSModalHomeGestureParticipating.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CSDismissableModalViewControllerDelegate, CSModalHomeAffordanceControlling;
@class UIScreenEdgePanGestureRecognizer, NSString;

@interface CSDismissableModalViewController : CSPresentationViewController <CSModalHomeGestureParticipating, UIGestureRecognizerDelegate> {

	UIScreenEdgePanGestureRecognizer* _bottomEdgeRecognizer;
	id<CSDismissableModalViewControllerDelegate> _delegate;
	id<CSModalHomeAffordanceControlling> _homeAffordanceController;

}

@property (assign,nonatomic,__weak) id<CSDismissableModalViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<CSModalHomeAffordanceControlling> homeAffordanceController;              //@synthesize homeAffordanceController=_homeAffordanceController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CSDismissableModalViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CSDismissableModalViewControllerDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)handleEvent:(id)arg1 ;
-(void)aggregateBehavior:(id)arg1 ;
-(void)_addOrRemoveGestureForCurrentSettings;
-(void)_handleBottomEdgeGestureRecognizer:(id)arg1 ;
-(void)_handleBottomEdgeGestureBegan:(id)arg1 ;
-(void)_handleBottomEdgeGestureChanged:(id)arg1 ;
-(void)_handleBottomEdgeGestureEnded:(id)arg1 ;
-(void)addGrabberView:(id)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(BOOL)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(id<CSModalHomeAffordanceControlling>)homeAffordanceController;
-(void)setHomeAffordanceController:(id<CSModalHomeAffordanceControlling>)arg1 ;
@end

