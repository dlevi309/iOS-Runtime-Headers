/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStats.h>

@interface BWMovingWindowStats : BWStats {

	int _windowSize;
	int _numDataPoints;
	int _dataPointIndex;
	double* _dataPoints;

}

@property (nonatomic,readonly) int windowSize;              //@synthesize windowSize=_windowSize - In the implementation block
-(int)windowSize;
-(void)addDataPoint:(double)arg1 ;
-(double)min;
-(id)initWithWindowSize:(int)arg1 ;
-(id)description;
-(double)max;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

