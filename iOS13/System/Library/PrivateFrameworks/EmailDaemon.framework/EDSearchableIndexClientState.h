/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(long long)transaction;
-(void)setTransaction:(long long)arg1 ;
-(NSDate *)transactionDate;
-(void)setTransactionDate:(NSDate *)arg1 ;
-(NSString *)systemBuildVersion;
-(void)setSystemBuildVersion:(NSString *)arg1 ;
-(id)archiveRepresentation;
-(void)addTransactionValueToAttributeSet:(id)arg1 ;
-(NSNumber *)transactionValue;
@end

