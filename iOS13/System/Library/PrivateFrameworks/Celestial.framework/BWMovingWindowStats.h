/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWStats.h>

@interface BWMovingWindowStats : BWStats {

	int _windowSize;
	int _numDataPoints;
	int _dataPointIndex;
	double* _dataPoints;

}

@property (nonatomic,readonly) int windowSize;              //@synthesize windowSize=_windowSize - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)max;
-(double)min;
-(void)addDataPoint:(double)arg1 ;
-(id)initWithWindowSize:(int)arg1 ;
-(int)windowSize;
@end

