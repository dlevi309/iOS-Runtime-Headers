/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEventMessage.h>

@class NSString;

@interface OSActivityLogMessageEvent : OSActivityEventMessage {

	unsigned char _messageType;
	NSString* _subsystem;
	NSString* _category;
	unsigned long long _senderProgramCounter;

}

@property (nonatomic,copy,readonly) NSString * subsystem;                            //@synthesize subsystem=_subsystem - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                             //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long senderProgramCounter;              //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
@property (nonatomic,readonly) unsigned char messageType;                            //@synthesize messageType=_messageType - In the implementation block
-(NSString *)category;
-(unsigned char)messageType;
-(NSString *)subsystem;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)senderProgramCounter;
@end

