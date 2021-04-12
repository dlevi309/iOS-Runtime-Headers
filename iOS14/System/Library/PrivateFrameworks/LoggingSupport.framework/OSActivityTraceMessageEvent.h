/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned char)messageType;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)senderProgramCounter;
-(NSObject*<OS_xpc_object>)payload;
@end

