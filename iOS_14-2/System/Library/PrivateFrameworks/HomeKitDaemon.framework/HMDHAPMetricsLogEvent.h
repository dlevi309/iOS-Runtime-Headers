/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class HMFUnfairLock;

@interface HMDHAPMetricsLogEvent : HMDLogEvent {

	HMFUnfairLock* _lock;
	unsigned long long _sentHTTPRequests;
	unsigned long long _receivedHTTPResponses;
	unsigned long long _receivedHTTPEvents;
	unsigned long long _accessoryServerInvalidations;
	unsigned long long _btleConnections;
	unsigned long long _btleDiscoveries;
	unsigned long long _btleConnectionPerReasons;

}

@property (nonatomic,readonly) unsigned long long sentHTTPRequests;                          //@synthesize sentHTTPRequests=_sentHTTPRequests - In the implementation block
@property (nonatomic,readonly) unsigned long long receivedHTTPResponses;                     //@synthesize receivedHTTPResponses=_receivedHTTPResponses - In the implementation block
@property (nonatomic,readonly) unsigned long long receivedHTTPEvents;                        //@synthesize receivedHTTPEvents=_receivedHTTPEvents - In the implementation block
@property (nonatomic,readonly) unsigned long long accessoryServerInvalidations;              //@synthesize accessoryServerInvalidations=_accessoryServerInvalidations - In the implementation block
@property (nonatomic,readonly) unsigned long long btleConnections;                           //@synthesize btleConnections=_btleConnections - In the implementation block
@property (nonatomic,readonly) unsigned long long btleDiscoveries;                           //@synthesize btleDiscoveries=_btleDiscoveries - In the implementation block
@property (nonatomic,readonly) unsigned long long btleConnectionPerReasons;                  //@synthesize btleConnectionPerReasons=_btleConnectionPerReasons - In the implementation block
+(id)uuid;
-(id)initWithEventType:(id)arg1 ;
-(id)init;
-(void)updateWithHAPAccessoryServer:(id)arg1 ;
-(unsigned long long)accessoryServerInvalidations;
-(unsigned long long)sentHTTPRequests;
-(unsigned long long)receivedHTTPResponses;
-(unsigned long long)receivedHTTPEvents;
-(unsigned long long)btleConnections;
-(unsigned long long)btleDiscoveries;
-(unsigned long long)btleConnectionPerReasons;
@end

