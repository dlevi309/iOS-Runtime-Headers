/*
* Generated on Thursday, January 14, 2021 at 2:26:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_addOrRemoveGestureForCurrentSettings;
-(id<CSModalHomeAffordanceControlling>)homeAffordanceController;
-(id<CSDismissableModalViewControllerDelegate>)delegate;
-(BOOL)handleEvent:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)wouldHandleButtonEvent:(id)arg1 ;
-(void)setDelegate:(id<CSDismissableModalViewControllerDelegate>)arg1 ;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setHomeAffordanceController:(id<CSModalHomeAffordanceControlling>)arg1 ;
-(void)_handleBottomEdgeGestureBegan:(id)arg1 ;
-(void)_handleBottomEdgeGestureChanged:(id)arg1 ;
-(void)_handleBottomEdgeGestureEnded:(id)arg1 ;
-(void)addGrabberView:(id)arg1 ;
-(BOOL)presentationCancelsTouches;
-(void)_handleBottomEdgeGestureRecognizer:(id)arg1 ;
@end

