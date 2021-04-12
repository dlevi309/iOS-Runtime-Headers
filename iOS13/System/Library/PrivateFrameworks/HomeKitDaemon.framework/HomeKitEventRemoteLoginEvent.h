/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>
#import <HomeKitDaemon/HomeKitEventRemoteLoginMetricProtocol.h>

@class AWDHomeKitRemoteLogin, NSDate, NSString;

@interface HomeKitEventRemoteLoginEvent : HMDLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol> {

	AWDHomeKitRemoteLogin* _metric;
	NSDate* _startTime;

}

@property (nonatomic,readonly) AWDHomeKitRemoteLogin * metric;              //@synthesize metric=_metric - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                          //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(void)setError:(id)arg1 ;
-(AWDHomeKitRemoteLogin *)metric;
-(NSDate *)startTime;
-(id)initWithSessionID:(id)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

