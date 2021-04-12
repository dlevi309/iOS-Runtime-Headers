/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDRemoteMessage, NSString;

@interface HMDRemoteMessageLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _sending;
	int _transportType;
	HMDRemoteMessage* _remoteMessage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HMDRemoteMessage * remoteMessage;              //@synthesize remoteMessage=_remoteMessage - In the implementation block
@property (nonatomic,readonly) int transportType;                             //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL sending;                                  //@synthesize sending=_sending - In the implementation block
+(id)uuid;
+(id)sendingRemoteMessage:(id)arg1 transportType:(int)arg2 ;
+(id)receivedRemoteMessage:(id)arg1 transportType:(int)arg2 ;
+(int)awdMessageTypeFromHMDMessageType:(long long)arg1 ;
-(int)transportType;
-(BOOL)sending;
-(id)initWithRemoteMessage:(id)arg1 transportType:(int)arg2 sending:(BOOL)arg3 ;
-(HMDRemoteMessage *)remoteMessage;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

