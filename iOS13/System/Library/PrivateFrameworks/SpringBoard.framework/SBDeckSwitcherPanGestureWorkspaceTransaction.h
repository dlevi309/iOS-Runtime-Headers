/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBFluidSwitcherGestureWorkspaceTransaction.h>
#import <libobjc.A.dylib/SBHomeGrabberDelegate.h>

@class NSString;

@interface SBDeckSwitcherPanGestureWorkspaceTransaction : SBFluidSwitcherGestureWorkspaceTransaction <SBHomeGrabberDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_begin;
-(void)_didComplete;
-(void)_removeHysteresisFromTranslation;
-(long long)_gestureType;
-(void)_beginWithGesture:(id)arg1 ;
-(void)_finishWithGesture:(id)arg1 ;
-(double)additionalEdgeSpacingForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1 ;
-(id)selectedAppLayoutForGestureRecognizer:(id)arg1 ;
-(id)touchHistoryProvidingGesture;
@end

