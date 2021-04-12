/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HAENotifications.framework/HAENotifications
*/


@protocol OS_dispatch_queue;
#import <HAENotifications/HAENotifications-Structs.h>
@class NSObject;

@interface HAENStatistics : NSObject {

	NSObject*<OS_dispatch_queue> _eventQueue;

}
+(id)sharedInstance;
-(void)processMessage:(id)arg1 ;
-(id)init;
-(void)_sendMessage:(id)arg1 ;
-(void)processStatsForEvent:(id)arg1 ;
-(id)volumeActionString:(unsigned)arg1 ;
-(void)processStatsForLocationGating:(SCD_Struct_HA1)arg1 ;
@end

