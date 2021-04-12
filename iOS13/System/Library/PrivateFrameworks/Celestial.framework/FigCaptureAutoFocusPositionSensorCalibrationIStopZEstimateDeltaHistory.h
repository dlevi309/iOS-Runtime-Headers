/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@interface FigCaptureAutoFocusPositionSensorCalibrationIStopZEstimateDeltaHistory : NSObject {

	int _lastPassingIStopZEstimateDelta;
	int _previousIStopZEstimateDelta;
	int _currentIStopZEstimateDelta;
	int _previousIStopZEstimate;
	int _currentIStopZEstimate;

}

@property (assign,nonatomic) int lastPassingIStopZEstimateDelta;              //@synthesize lastPassingIStopZEstimateDelta=_lastPassingIStopZEstimateDelta - In the implementation block
@property (assign,nonatomic) int previousIStopZEstimateDelta;                 //@synthesize previousIStopZEstimate=_previousIStopZEstimate - In the implementation block
@property (assign,nonatomic) int currentIStopZEstimateDelta;                  //@synthesize currentIStopZEstimate=_currentIStopZEstimate - In the implementation block
-(int)lastPassingIStopZEstimateDelta;
-(void)setLastPassingIStopZEstimateDelta:(int)arg1 ;
-(int)previousIStopZEstimateDelta;
-(void)setPreviousIStopZEstimateDelta:(int)arg1 ;
-(int)currentIStopZEstimateDelta;
-(void)setCurrentIStopZEstimateDelta:(int)arg1 ;
@end

