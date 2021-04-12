/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned)count;
-(BOOL)saturated;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)startMachTimestamp;
-(unsigned long long)endMachTimestamp;
@end

