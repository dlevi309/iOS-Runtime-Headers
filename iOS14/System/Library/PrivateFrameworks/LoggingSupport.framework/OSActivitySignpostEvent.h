/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityLogMessageEvent.h>

@interface OSActivitySignpostEvent : OSActivityLogMessageEvent {

	unsigned long long _signpostID;

}

@property (nonatomic,readonly) unsigned long long signpostID;              //@synthesize signpostID=_signpostID - In the implementation block
-(unsigned long long)signpostID;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
@end

