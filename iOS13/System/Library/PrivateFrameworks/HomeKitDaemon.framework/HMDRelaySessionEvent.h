/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDRelaySessionEvent : HMDLogEvent <HMDAWDLogEvent> {

	unsigned long long _actionType;
	long long _statusCode;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long actionType;              //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) long long statusCode;                         //@synthesize statusCode=_statusCode - In the implementation block
+(void)initialize;
+(id)uuid;
+(id)stringForActionType:(unsigned long long)arg1 ;
+(id)relaySessionEventWithActionType:(unsigned long long)arg1 ;
-(long long)statusCode;
-(void)setStatusCode:(long long)arg1 ;
-(unsigned long long)actionType;
-(id)initWithActionType:(unsigned long long)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end

