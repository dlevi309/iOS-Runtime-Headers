/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDWatchConnectivityLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _reportComplete;
	unsigned long long _watchAddedNotificationCount;
	unsigned long long _watchRemovedNotificationCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long watchAddedNotificationCount;                //@synthesize watchAddedNotificationCount=_watchAddedNotificationCount - In the implementation block
@property (assign,nonatomic) unsigned long long watchRemovedNotificationCount;              //@synthesize watchRemovedNotificationCount=_watchRemovedNotificationCount - In the implementation block
@property (assign,getter=isReportComplete,nonatomic) BOOL reportComplete;                   //@synthesize reportComplete=_reportComplete - In the implementation block
+(void)initialize;
+(id)uuid;
-(id)init;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(unsigned long long)watchAddedNotificationCount;
-(void)setWatchAddedNotificationCount:(unsigned long long)arg1 ;
-(unsigned long long)watchRemovedNotificationCount;
-(void)setWatchRemovedNotificationCount:(unsigned long long)arg1 ;
-(BOOL)isReportComplete;
-(void)setReportComplete:(BOOL)arg1 ;
@end

