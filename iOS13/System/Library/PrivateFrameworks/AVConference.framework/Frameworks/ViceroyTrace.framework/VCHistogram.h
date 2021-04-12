/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/


@interface VCHistogram : NSObject {

	unsigned* _buckets;
	const unsigned* _ranges;
	unsigned _bucketCount;

}

@property (readonly) const unsigned* ranges;              //@synthesize ranges=_ranges - In the implementation block
+(const unsigned*)bucketWithType:(int)arg1 count:(unsigned*)arg2 ;
+(id)rangesDescription:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(id)array;
-(void)reset;
-(void)addValue:(unsigned)arg1 ;
-(BOOL)merge:(id)arg1 ;
-(const unsigned*)ranges;
-(id)initWithType:(int)arg1 bucketValues:(id)arg2 ;
-(void)addValue:(unsigned)arg1 withIncrement:(unsigned)arg2 ;
-(unsigned)bucketValueAtIndex:(unsigned)arg1 ;
@end

