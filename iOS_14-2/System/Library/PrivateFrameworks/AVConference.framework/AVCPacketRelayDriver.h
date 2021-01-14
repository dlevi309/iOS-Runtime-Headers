/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface AVCPacketRelayDriver : NSObject
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)startMonitoringFileDescriptor:(int)arg1 forConnection:(id)arg2 ;
-(void)stopMonitoringFileDescriptor:(int)arg1 ;
@end

