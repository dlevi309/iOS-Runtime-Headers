/*
* Generated on Thursday, January 14, 2021 at 2:25:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDataSyncStateEvent : HMDLogEvent {

	unsigned long long _dataSyncState;

}

@property (assign,nonatomic) unsigned long long dataSyncState;              //@synthesize dataSyncState=_dataSyncState - In the implementation block
+(id)uuid;
+(id)dataSyncStateEstablished:(unsigned long long)arg1 ;
-(unsigned long long)dataSyncState;
-(void)setDataSyncState:(unsigned long long)arg1 ;
-(id)initWithDataSyncState:(unsigned long long)arg1 ;
@end

