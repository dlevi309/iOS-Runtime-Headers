/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
*/


@protocol NSCopying;
#import <ToneKit/ToneKit-Structs.h>
@interface TKVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject {

	double _vibrationPatternMaximumDuration;
	double _vibrationPatternDidStartTimestamp;
	unsigned long long _maximumFramesPerSecondRate;
	void* _recordedData;
	unsigned long long _recordedDataElementsCount;
	unsigned long long _recordedDataCursor;
	BOOL _isWarmUpModeEnabled;
	double _warmUpModeDidStartTimestamp;
	BOOL _displayLinkHasRefreshedAtLeastOnce;
	id<NSCopying> _displayLinkManagerObserverToken;

}
-(void)dealloc;
-(id)initWithVibrationPatternMaximumDuration:(double)arg1 ;
-(void)didStopRecording;
-(void)recordNormalizedTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2 ;
-(BOOL)getNormalizedTouchLocation:(CGPoint*)arg1 touchPhase:(int*)arg2 forTimeInterval:(double)arg3 ;
-(void)_updateMaximumFramesPerSecondRate:(id)arg1 ;
-(void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)arg1 ;
-(void)_recordFinalDataWithNormalizedTouchLocation:(CGPoint)arg1 touchPhase:(int)arg2 timeIntervalSinceBeginningOfPattern:(double)arg3 ;
@end

