/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSMutableDictionary;

@interface RTMotionActivityHistogram : NSObject {

	NSMutableDictionary* _bins;
	double _totalInterval;

}

@property (assign,nonatomic) double totalInterval;                      //@synthesize totalInterval=_totalInterval - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * bins;              //@synthesize bins=_bins - In the implementation block
-(id)init;
-(void)setTotalInterval:(double)arg1 ;
-(double)totalInterval;
-(id)binsSortedByInterval;
-(id)binForType:(unsigned long long)arg1 ;
-(NSMutableDictionary *)bins;
-(id)initWithActivites:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3 ;
-(void)addInterval:(double)arg1 ofType:(unsigned long long)arg2 withConfidence:(unsigned long long)arg3 ;
@end

