/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSString;

@interface HMDHomeInviteLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	int _stage;
	int _responseType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int stage;                           //@synthesize stage=_stage - In the implementation block
@property (nonatomic,readonly) int responseType;                    //@synthesize responseType=_responseType - In the implementation block
+(id)uuid;
+(id)homeInvitationWithStage:(int)arg1 ;
+(id)homeInvitationWithStage:(int)arg1 responseType:(int)arg2 ;
-(int)stage;
-(int)responseType;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initInvitationWithStage:(int)arg1 responseType:(int)arg2 ;
@end

