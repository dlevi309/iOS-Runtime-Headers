/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSMutableDictionary *)bins;
-(id)initWithActivites:(id)arg1 betweenDate:(id)arg2 andDate:(id)arg3 ;
-(double)totalInterval;
-(id)binForType:(unsigned long long)arg1 ;
-(void)addInterval:(double)arg1 ofType:(unsigned long long)arg2 withConfidence:(unsigned long long)arg3 ;
-(void)setTotalInterval:(double)arg1 ;
-(id)binsSortedByInterval;
@end

