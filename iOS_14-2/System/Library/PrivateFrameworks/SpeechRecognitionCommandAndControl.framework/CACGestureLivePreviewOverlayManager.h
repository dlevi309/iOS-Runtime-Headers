/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/CACSimpleContentViewManager.h>

@class CACGestureLivePreviewViewController;

@interface CACGestureLivePreviewOverlayManager : CACSimpleContentViewManager {

	CACGestureLivePreviewViewController* _gestureViewController;

}

@property (nonatomic,retain) CACGestureLivePreviewViewController * gestureViewController;              //@synthesize gestureViewController=_gestureViewController - In the implementation block
-(BOOL)isOverlay;
-(void)setGestureViewController:(CACGestureLivePreviewViewController *)arg1 ;
-(CACGestureLivePreviewViewController *)gestureViewController;
-(void)addPointsToLiveRecordingGesturePreviewByFingerIdentifier:(id)arg1 forces:(id)arg2 atTime:(double)arg3 ;
-(void)removeTrackingForFingerIdentifier:(id)arg1 ;
-(void)showGestureLivePreviewViewer;
-(BOOL)isPhysiciallyInteractiveOverlay;
@end

