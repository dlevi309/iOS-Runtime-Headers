/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSDate, NSMutableDictionary;

@interface RTPlaceInferenceMetrics : NSObject {

	NSDate* _startDate;
	NSMutableDictionary* _metrics;

}

@property (nonatomic,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * metrics;              //@synthesize metrics=_metrics - In the implementation block
-(id)init;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(NSDate *)startDate;
-(NSMutableDictionary *)metrics;
-(id)initWithClientIdentifier:(id)arg1 placeInferenceOptions:(id)arg2 ;
-(void)setPlaceInferences:(id)arg1 ;
-(void)setTopPersonalizedLabelsInferredMapItems:(id)arg1 topBluePOIInferredMapItem:(id)arg2 ;
-(void)submitMetrics;
-(void)setPlaceInferenceOptions:(id)arg1 ;
-(void)setTopPlaceInference:(id)arg1 ;
-(double)entropyOfConflictFromTopResults:(id)arg1 ;
@end

