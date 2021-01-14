/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSTransactionLogMessage.h>

@class NSData;

@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage {

	NSData* _dataValue;

}

@property (nonatomic,readonly) NSData * dataValue;              //@synthesize dataValue=_dataValue - In the implementation block
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSData *)dataValue;
-(id)initWithData:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5 ;
@end

