/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDProcessMemoryPressureNotificationLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging, HMDAWDLogEvent> {

	NSString* _processMemoryState;
	NSString* _dataSyncState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * processMemoryState;              //@synthesize processMemoryState=_processMemoryState - In the implementation block
@property (nonatomic,readonly) NSString * dataSyncState;                   //@synthesize dataSyncState=_dataSyncState - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)createEventWithProcessMemoryState:(id)arg1 dataSyncState:(id)arg2 ;
-(id)eventName;
-(NSString *)dataSyncState;
-(id)serializedEvent;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithProcessMemoryState:(id)arg1 dataSyncState:(id)arg2 ;
-(NSString *)processMemoryState;
@end

