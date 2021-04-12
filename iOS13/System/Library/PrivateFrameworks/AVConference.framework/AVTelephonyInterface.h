/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject, CoreTelephonyClient;

@interface AVTelephonyInterface : NSObject {

	id _delegate;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	CTServerConnectionRef _connection;
	CoreTelephonyClient* _coreTelephonyClient;

}

@property (assign) id<AVTelephonyInterfaceDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(id<AVTelephonyInterfaceDelegate>)delegate;
-(void)setDelegate:(id<AVTelephonyInterfaceDelegate>)arg1 ;
-(BOOL)registerForNotifications;
-(void)unregisterForNotifications;
-(void)notifyCTCurrentAudioPayload:(int)arg1 mode:(int)arg2 bitrate:(unsigned)arg3 ;
-(void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2 ;
-(void)handleVocoderNotificationWithInfo:(id)arg1 ;
-(id)translateVocoderTypeToCoreAudioType:(id)arg1 ;
@end

