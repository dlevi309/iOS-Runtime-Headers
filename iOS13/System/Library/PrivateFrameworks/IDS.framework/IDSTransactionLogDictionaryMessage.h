/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSTransactionLogMessage.h>

@class NSDictionary;

@interface IDSTransactionLogDictionaryMessage : IDSTransactionLogMessage {

	NSDictionary* _dictionaryValue;

}

@property (nonatomic,readonly) NSDictionary * dictionaryValue;              //@synthesize dictionaryValue=_dictionaryValue - In the implementation block
-(id)dictionaryRepresentation;
-(NSDictionary *)dictionaryValue;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5 ;
@end

