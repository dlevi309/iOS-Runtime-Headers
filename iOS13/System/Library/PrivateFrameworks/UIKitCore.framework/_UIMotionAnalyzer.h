/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

@interface _UIMotionAnalyzer : NSObject {

	_UIMotionAnalyzerSettings* _settings;
	_UIViewerRelativeDevicePose* _viewerRelativeDevicePose;

}

@property (nonatomic,readonly) _UIMotionAnalyzerSettings * settings;                                //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) _UIViewerRelativeDevicePose * viewerRelativeDevicePose;              //@synthesize viewerRelativeDevicePose=_viewerRelativeDevicePose - In the implementation block
-(id)init;
-(id)description;
-(void)reset;
-(id)initWithSettings:(id)arg1 ;
-(_UIMotionAnalyzerSettings *)settings;
-(_UIViewerRelativeDevicePose *)viewerRelativeDevicePose;
-(void)updateWithEvent:(id)arg1 ;
-(BOOL)applyHysteresisWithReceivedEventTimestamp:(double)arg1 timeSinceLastNewMotionEvent:(double)arg2 slowUpdatesEnabled:(BOOL)arg3 returningShouldToggleSlowUpdates:(BOOL*)arg4 logger:(id)arg5 ;
-(void)updateHistory;
-(void)resetHysteresis;
@end

