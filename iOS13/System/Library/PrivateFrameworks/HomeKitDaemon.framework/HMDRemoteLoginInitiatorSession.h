/*
* Generated on Monday, March 1, 2021 at 2:33:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol HomeKitEventRemoteLoginMetricProtocol;
@class NSString, HMDLogEvent;

@interface HMDRemoteLoginInitiatorSession : HMFObject {

	NSString* _sessionID;
	HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol> _metric;

}

@property (nonatomic,readonly) NSString * sessionID;                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol> metric;              //@synthesize metric=_metric - In the implementation block
-(void)dealloc;
-(id)description;
-(HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol>)metric;
-(void)setMetric:(HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol>)arg1 ;
-(NSString *)sessionID;
-(id)initWithSessionID:(id)arg1 ;
@end

