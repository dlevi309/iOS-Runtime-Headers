/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityCreateEvent : OSActivityEvent {

	unsigned long long _creatorActivityID;
	unsigned long long _creatorProcessUniqueID;
	unsigned long long _senderProgramCounter;

}

@property (nonatomic,readonly) unsigned long long creatorActivityID;                   //@synthesize creatorActivityID=_creatorActivityID - In the implementation block
@property (nonatomic,readonly) unsigned long long creatorProcessUniqueID;              //@synthesize creatorProcessUniqueID=_creatorProcessUniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long senderProgramCounter;                //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)creatorActivityID;
-(unsigned long long)creatorProcessUniqueID;
-(unsigned long long)senderProgramCounter;
@end

