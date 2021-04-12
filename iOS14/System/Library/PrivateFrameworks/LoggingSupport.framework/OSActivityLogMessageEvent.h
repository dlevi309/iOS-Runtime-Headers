/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned char)messageType;
-(NSString *)subsystem;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)senderProgramCounter;
-(NSString *)category;
@end

