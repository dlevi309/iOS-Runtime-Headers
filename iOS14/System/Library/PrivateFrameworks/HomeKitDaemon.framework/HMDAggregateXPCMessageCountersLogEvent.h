/*
* Generated on Thursday, January 14, 2021 at 2:25:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString, NSNumber;

@interface HMDAggregateXPCMessageCountersLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _type;
	NSString* _peerInformation;
	NSString* _messageName;
	NSNumber* _count;

}

@property (nonatomic,readonly) NSString * type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * peerInformation;              //@synthesize peerInformation=_peerInformation - In the implementation block
@property (nonatomic,readonly) NSString * messageName;                  //@synthesize messageName=_messageName - In the implementation block
@property (nonatomic,readonly) NSNumber * count;                        //@synthesize count=_count - In the implementation block
+(id)identifier;
+(id)aggregateXPCCountersLogEventWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4 ;
-(id)init;
-(NSString *)messageName;
-(id)eventName;
-(NSNumber *)count;
-(NSString *)type;
-(id)serializedEvent;
-(BOOL)shouldSubmitEvent;
-(NSString *)peerInformation;
-(id)__initWithType:(id)arg1 peerInformation:(id)arg2 messageName:(id)arg3 count:(id)arg4 ;
@end

