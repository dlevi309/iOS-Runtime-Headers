/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityLossEvent : OSActivityEvent {

	BOOL _saturated;
	unsigned _count;
	unsigned long long _startMachTimestamp;
	unsigned long long _endMachTimestamp;

}

@property (nonatomic,readonly) unsigned long long startMachTimestamp;              //@synthesize startMachTimestamp=_startMachTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachTimestamp;                //@synthesize endMachTimestamp=_endMachTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned count;                                     //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) BOOL saturated;                                     //@synthesize saturated=_saturated - In the implementation block
-(BOOL)saturated;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)startMachTimestamp;
-(unsigned long long)endMachTimestamp;
-(unsigned)count;
@end

