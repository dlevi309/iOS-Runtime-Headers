/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1 ;
-(void)_didComplete;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1 ;
-(double)additionalEdgeSpacingForHomeGrabberView:(id)arg1 ;
-(long long)_gestureType;
-(void)_removeHysteresisFromTranslation;
-(void)_beginWithGesture:(id)arg1 ;
-(void)_finishWithGesture:(id)arg1 ;
-(id)selectedAppLayoutForGestureRecognizer:(id)arg1 ;
-(id)touchHistoryProvidingGesture;
@end

