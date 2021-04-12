/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <libobjc.A.dylib/DAMessageSendConsumer.h>

@class MFError;

@interface MFDADeliveryConsumer : MFDAMailAccountConsumer <DAMessageSendConsumer> {

	MFError* _error;
	long long _status;
	unsigned long long _bytesRead;
	unsigned long long _bytesWritten;

}

@property (nonatomic,retain) MFError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) long long status;                             //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesRead;                 //@synthesize bytesRead=_bytesRead - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesWritten;              //@synthesize bytesWritten=_bytesWritten - In the implementation block
-(MFError *)error;
-(void)setError:(MFError *)arg1 ;
-(long long)status;
-(unsigned long long)bytesRead;
-(unsigned long long)bytesWritten;
-(void)actionFailed:(long long)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(void)messageDidSendWithContext:(id)arg1 sentBytesCount:(unsigned long long)arg2 receivedBytesCount:(unsigned long long)arg3 ;
@end

