/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString;

@interface PKDemoTransactionGeneratorConfiguration : NSObject {

	NSString* _accountIdentifier;
	NSString* _transactionSourceIdentifier;
	long long _accountType;
	NSString* _merchantName;
	NSString* _personName;
	long long _transactionCount;

}

@property (nonatomic,copy) NSString * accountIdentifier;                        //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * transactionSourceIdentifier;              //@synthesize transactionSourceIdentifier=_transactionSourceIdentifier - In the implementation block
@property (assign,nonatomic) long long accountType;                             //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,copy) NSString * merchantName;                             //@synthesize merchantName=_merchantName - In the implementation block
@property (nonatomic,copy) NSString * personName;                               //@synthesize personName=_personName - In the implementation block
@property (assign,nonatomic) long long transactionCount;                        //@synthesize transactionCount=_transactionCount - In the implementation block
-(long long)transactionCount;
-(long long)accountType;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)personName;
-(void)setTransactionSourceIdentifier:(NSString *)arg1 ;
-(NSString *)transactionSourceIdentifier;
-(void)setPersonName:(NSString *)arg1 ;
-(void)setAccountType:(long long)arg1 ;
-(void)setTransactionCount:(long long)arg1 ;
-(NSString *)merchantName;
-(void)setMerchantName:(NSString *)arg1 ;
@end

