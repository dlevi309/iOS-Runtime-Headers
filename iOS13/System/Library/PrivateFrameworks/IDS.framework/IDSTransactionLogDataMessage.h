/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/

#import <IDS/IDSTransactionLogMessage.h>

@class NSData;

@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage {

	NSData* _dataValue;

}

@property (nonatomic,readonly) NSData * dataValue;              //@synthesize dataValue=_dataValue - In the implementation block
-(id)dictionaryRepresentation;
-(NSData *)dataValue;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithData:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5 ;
@end

