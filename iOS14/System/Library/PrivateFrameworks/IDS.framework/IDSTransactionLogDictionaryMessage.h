/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSTransactionLogMessage.h>

@class NSDictionary;

@interface IDSTransactionLogDictionaryMessage : IDSTransactionLogMessage {

	NSDictionary* _dictionaryValue;

}

@property (nonatomic,readonly) NSDictionary * dictionaryValue;              //@synthesize dictionaryValue=_dictionaryValue - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5 ;
-(NSDictionary *)dictionaryValue;
@end

