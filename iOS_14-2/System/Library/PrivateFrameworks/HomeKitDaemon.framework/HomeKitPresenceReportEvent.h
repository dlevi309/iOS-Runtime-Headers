/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class AWDHomeKitPresenceReport, NSString;

@interface HomeKitPresenceReportEvent : HMDLogEvent <HMDAWDLogEvent> {

	AWDHomeKitPresenceReport* _metric;

}

@property (nonatomic,readonly) AWDHomeKitPresenceReport * metric;              //@synthesize metric=_metric - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(id)init;
-(AWDHomeKitPresenceReport *)metric;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

