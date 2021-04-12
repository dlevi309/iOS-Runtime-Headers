/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>
#import <HomeKitDaemon/HomeKitEventRemoteLoginMetricProtocol.h>

@class AWDHomeKitRemoteLogout, NSDate, NSString;

@interface HomeKitEventRemoteLogoutEvent : HMDLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol> {

	AWDHomeKitRemoteLogout* _metric;
	NSDate* _startTime;

}

@property (nonatomic,readonly) AWDHomeKitRemoteLogout * metric;              //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                           //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(AWDHomeKitRemoteLogout *)metric;
-(id)initWithSessionID:(id)arg1 ;
-(void)setError:(id)arg1 ;
-(NSDate *)startTime;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

