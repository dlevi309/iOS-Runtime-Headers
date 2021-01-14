/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class RTMapItem;

@interface RTFusedInferredMapItem : NSObject {

	RTMapItem* _mapItem;
	double _confidence;
	unsigned long long _source;

}

@property (nonatomic,retain) RTMapItem * mapItem;                    //@synthesize mapItem=_mapItem - In the implementation block
@property (assign,nonatomic) double confidence;                      //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) unsigned long long source;              //@synthesize source=_source - In the implementation block
+(id)sortFusedInferredMapItems:(id)arg1 confidenceEqualityEpsilon:(double)arg2 referenceLocation:(id)arg3 distanceCalculator:(id)arg4 ascending:(BOOL)arg5 ;
-(double)confidence;
-(id)init;
-(RTMapItem *)mapItem;
-(void)setSource:(unsigned long long)arg1 ;
-(id)initWithMapItem:(id)arg1 confidence:(double)arg2 source:(unsigned long long)arg3 ;
-(id)description;
-(void)setConfidence:(double)arg1 ;
-(void)setMapItem:(RTMapItem *)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)source;
-(id)convertToInferredMapItem;
-(id)initWithInferredMapItem:(id)arg1 ;
@end

