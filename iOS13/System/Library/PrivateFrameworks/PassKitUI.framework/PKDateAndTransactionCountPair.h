/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSDate;

@interface PKDateAndTransactionCountPair : NSObject {

	NSDate* _date;
	unsigned long long _transactionCount;

}

@property (nonatomic,retain) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long transactionCount;              //@synthesize transactionCount=_transactionCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned long long)transactionCount;
-(void)setTransactionCount:(unsigned long long)arg1 ;
@end

