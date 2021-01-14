/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


@class NSDateInterval, NSNumber;

@interface RTStoredSettledStateTransitionEnumerationOptions : NSObject {

	BOOL _ascending;
	NSDateInterval* _dateInterval;
	NSNumber* _limit;
	unsigned long long _batchSize;

}

@property (nonatomic,readonly) BOOL ascending;                            //@synthesize ascending=_ascending - In the implementation block
@property (nonatomic,copy) NSDateInterval * dateInterval;                 //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) NSNumber * limit;                          //@synthesize limit=_limit - In the implementation block
@property (nonatomic,readonly) unsigned long long batchSize;              //@synthesize batchSize=_batchSize - In the implementation block
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSNumber *)limit;
-(unsigned long long)batchSize;
-(id)description;
-(BOOL)ascending;
-(id)initWithAscending:(BOOL)arg1 dateInterval:(id)arg2 limit:(id)arg3 batchSize:(unsigned long long)arg4 ;
@end

