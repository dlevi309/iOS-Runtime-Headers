/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface AVCPacketRelayDriver : NSObject
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)startMonitoringFileDescriptor:(int)arg1 forConnection:(id)arg2 ;
-(void)stopMonitoringFileDescriptor:(int)arg1 ;
@end

