/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSDate;

@interface BKPurchaseDAAPBackoff : NSObject {

	NSDate* _backoffUntil;
	long long _failureCount;

}

@property (nonatomic,retain) NSDate * backoffUntil;               //@synthesize backoffUntil=_backoffUntil - In the implementation block
@property (assign,nonatomic) long long failureCount;              //@synthesize failureCount=_failureCount - In the implementation block
-(void)clear;
-(long long)failureCount;
-(void)setFailureCount:(long long)arg1 ;
-(BOOL)hasBackedOff;
-(NSDate *)backoffUntil;
-(BOOL)failureIntervals:(unsigned long long)arg1 ;
-(void)setBackoffUntil:(NSDate *)arg1 ;
@end

