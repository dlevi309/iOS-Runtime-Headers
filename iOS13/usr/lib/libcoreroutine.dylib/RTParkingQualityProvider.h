/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSMutableArray;

@interface RTParkingQualityProvider : NSObject {

	NSMutableArray* _movingHistorgram;
	unsigned long long _parkingQualityIndicator;

}

@property (nonatomic,retain) NSMutableArray * movingHistorgram;                       //@synthesize movingHistorgram=_movingHistorgram - In the implementation block
@property (assign,nonatomic) unsigned long long parkingQualityIndicator;              //@synthesize parkingQualityIndicator=_parkingQualityIndicator - In the implementation block
-(id)init;
-(void)reset;
-(unsigned long long)calculateParkingQualityWithLocations:(id)arg1 parkingTimestamp:(double)arg2 ;
-(NSMutableArray *)movingHistorgram;
-(void)setParkingQualityIndicator:(unsigned long long)arg1 ;
-(unsigned long long)classifySamples:(id)arg1 ;
-(unsigned long long)parkingQualityToLocationQuality:(unsigned long long)arg1 ;
-(id)getHistogramFromSamples:(id)arg1 ;
-(id)getCdfFromHistogram:(id)arg1 numSamples:(double)arg2 ;
-(int)indexOfSmallestElement:(double*)arg1 size:(int)arg2 ;
-(unsigned long long)parkingQualityIndicator;
-(void)setMovingHistorgram:(NSMutableArray *)arg1 ;
@end

