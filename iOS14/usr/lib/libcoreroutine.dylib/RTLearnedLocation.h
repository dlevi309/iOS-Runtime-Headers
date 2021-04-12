/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTLocation;

@interface RTLearnedLocation : NSObject {

	RTLocation* _location;
	unsigned long long _dataPointCount;
	double _confidence;

}

@property (nonatomic,readonly) RTLocation * location;                          //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long dataPointCount;              //@synthesize dataPointCount=_dataPointCount - In the implementation block
@property (nonatomic,readonly) double confidence;                              //@synthesize confidence=_confidence - In the implementation block
+(double)confidenceFromDataPointCount:(unsigned long long)arg1 ;
+(id)shiftLocation:(id)arg1 shifter:(id)arg2 ;
-(double)confidence;
-(unsigned long long)dataPointCount;
-(id)init;
-(RTLocation *)location;
-(id)description;
-(unsigned long long)hash;
-(id)initWithMapItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithLocation:(id)arg1 dataPointCount:(unsigned long long)arg2 confidence:(double)arg3 ;
-(id)initWithLocation:(id)arg1 dataPointCount:(unsigned long long)arg2 ;
-(id)initWithLearnedLocations:(id)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 ;
-(void)calculateAltitude:(double*)arg1 verticalUncertainty:(double*)arg2 learnedLocations:(id)arg3 ;
@end

