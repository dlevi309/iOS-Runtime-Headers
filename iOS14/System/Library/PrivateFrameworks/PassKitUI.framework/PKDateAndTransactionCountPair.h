/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


@class NSDate;

@interface PKDateAndTransactionCountPair : NSObject {

	NSDate* _date;
	unsigned long long _transactionCount;

}

@property (nonatomic,retain) NSDate * date;                                    //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long transactionCount;              //@synthesize transactionCount=_transactionCount - In the implementation block
-(unsigned long long)transactionCount;
-(void)setDate:(NSDate *)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(void)setTransactionCount:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

