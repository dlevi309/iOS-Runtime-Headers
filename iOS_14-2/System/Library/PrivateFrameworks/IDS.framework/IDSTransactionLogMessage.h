/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class NSString;

@interface IDSTransactionLogMessage : NSObject {

	NSString* _fromID;
	NSString* _loginID;
	NSString* _accountUniqueID;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * fromID;                       //@synthesize fromID=_fromID - In the implementation block
@property (nonatomic,readonly) NSString * loginID;                      //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * accountUniqueID;              //@synthesize accountUniqueID=_accountUniqueID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
+(id)transactionLogMessageFromDictionaryRepresentation:(id)arg1 ;
-(NSString *)loginID;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)fromID;
-(id)_initWithAccountUniqueID:(id)arg1 fromID:(id)arg2 loginID:(id)arg3 serviceName:(id)arg4 ;
-(NSString *)accountUniqueID;
-(id)_dictionaryRepresentation;
-(NSString *)serviceName;
@end

