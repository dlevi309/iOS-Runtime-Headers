/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVFrameRateRange;

@interface AVCaptureSystemPressureStateInternal : NSObject {

	int _figLevel;
	unsigned long long _factors;
	AVFrameRateRange* _recommendedFrameRateRangeForPortrait;

}

@property (readonly) int figLevel; 
@property (readonly) unsigned long long factors; 
@property (readonly) AVFrameRateRange * recommendedFrameRateRangeForPortrait; 
-(void)dealloc;
-(unsigned long long)factors;
-(id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3 ;
-(int)figLevel;
-(AVFrameRateRange *)recommendedFrameRateRangeForPortrait;
@end

