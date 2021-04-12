/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Accounts.framework/Accounts
*/


@class NSLock, NSMutableArray, NSDate;

@interface ACSimpleRateLimiter : NSObject {

	unsigned long long _maximum;
	double _timeInterval;
	NSLock* _instanceLock;
	NSMutableArray* _sortedActionDates;

}

@property (readonly) NSDate * rateLimitingStartDate; 
@property (retain) NSLock * instanceLock;                           //@synthesize instanceLock=_instanceLock - In the implementation block
@property (retain) NSMutableArray * sortedActionDates;              //@synthesize sortedActionDates=_sortedActionDates - In the implementation block
@property (readonly) unsigned long long maximum;                    //@synthesize maximum=_maximum - In the implementation block
@property (readonly) double timeInterval;                           //@synthesize timeInterval=_timeInterval - In the implementation block
-(unsigned long long)maximum;
-(double)timeInterval;
-(NSLock *)instanceLock;
-(id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(void)locked_removeDatesBefore:(id)arg1 ;
-(unsigned long long)locked_indexOfFirstAfter:(id)arg1 ;
-(void)locked_addDate:(id)arg1 ;
-(NSMutableArray *)sortedActionDates;
-(BOOL)isEmptyAfterFlushing;
-(void)setInstanceLock:(NSLock *)arg1 ;
-(NSDate *)rateLimitingStartDate;
-(void)setSortedActionDates:(NSMutableArray *)arg1 ;
-(BOOL)reservePerformActionNow;
@end

