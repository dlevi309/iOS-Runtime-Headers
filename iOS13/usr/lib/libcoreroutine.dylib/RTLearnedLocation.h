/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)confidence;
-(RTLocation *)location;
-(unsigned long long)dataPointCount;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithLocation:(id)arg1 dataPointCount:(unsigned long long)arg2 confidence:(double)arg3 ;
-(id)initWithLocation:(id)arg1 dataPointCount:(unsigned long long)arg2 ;
-(id)initWithLearnedLocations:(id)arg1 ;
-(id)initWithLocationOfInterest:(id)arg1 ;
@end

