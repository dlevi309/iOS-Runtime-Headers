/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)timeInterval;
-(unsigned long long)maximum;
-(NSLock *)instanceLock;
-(NSDate *)rateLimitingStartDate;
-(void)locked_removeDatesBefore:(id)arg1 ;
-(NSMutableArray *)sortedActionDates;
-(void)locked_addDate:(id)arg1 ;
-(unsigned long long)locked_indexOfFirstAfter:(id)arg1 ;
-(id)initWithMaximum:(unsigned long long)arg1 inTimeInterval:(double)arg2 ;
-(BOOL)reservePerformActionNow;
-(BOOL)isEmptyAfterFlushing;
-(void)setInstanceLock:(NSLock *)arg1 ;
-(void)setSortedActionDates:(NSMutableArray *)arg1 ;
@end

