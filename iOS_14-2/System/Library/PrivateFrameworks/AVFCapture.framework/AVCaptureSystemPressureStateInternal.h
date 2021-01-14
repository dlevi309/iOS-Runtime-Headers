/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
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
-(AVFrameRateRange *)recommendedFrameRateRangeForPortrait;
-(int)figLevel;
-(id)initWithFigLevel:(int)arg1 factors:(unsigned long long)arg2 recommendedFrameRateRangeForPortrait:(id)arg3 ;
-(unsigned long long)factors;
-(void)dealloc;
@end

