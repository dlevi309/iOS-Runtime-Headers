/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEventMessage.h>

@protocol OS_xpc_object;
@class NSObject;

@interface OSActivityTraceMessageEvent : OSActivityEventMessage {

	unsigned char _messageType;
	NSObject*<OS_xpc_object> _payload;
	unsigned long long _senderProgramCounter;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> payload;                     //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) unsigned long long senderProgramCounter;              //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
@property (nonatomic,readonly) unsigned char messageType;                            //@synthesize messageType=_messageType - In the implementation block
-(NSObject*<OS_xpc_object>)payload;
-(unsigned char)messageType;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)senderProgramCounter;
@end

