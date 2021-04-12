/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class NSNumber, NSDate, NSString;

@interface EDSearchableIndexClientState : NSObject {

	NSNumber* _transactionValue;
	long long _transaction;
	NSDate* _transactionDate;
	NSString* _systemBuildVersion;

}

@property (assign,nonatomic) long long transaction;                      //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) NSNumber * transactionValue; 
@property (nonatomic,retain) NSDate * transactionDate;                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,copy) NSString * systemBuildVersion;                //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
+(id)clientState;
+(id)clientStateFromData:(id)arg1 ;
+(id)transactionAttributeKey;
-(void)setTransaction:(long long)arg1 ;
-(id)init;
-(long long)transaction;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)systemBuildVersion;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(id)archiveRepresentation;
-(void)addTransactionValueToAttributeSet:(id)arg1 ;
-(NSNumber *)transactionValue;
@end

