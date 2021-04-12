/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <IDSFoundation/IDSSocketPairDataMessage.h>

@interface IDSSocketPairResourceTransferMessage : IDSSocketPairDataMessage
+(id)resumeMessageWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 nextByteOffset:(unsigned long long)arg4 ;
+(id)cancelMessageWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 messageUUID:(id)arg3 cancelReason:(unsigned char)arg4 ;
-(unsigned char)type;
-(unsigned char)command;
-(unsigned long long)byteOffset;
-(unsigned char)cancelReason;
@end

