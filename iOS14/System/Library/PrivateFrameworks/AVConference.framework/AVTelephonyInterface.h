/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<AVTelephonyInterfaceDelegate>)delegate;
-(void)setDelegate:(id<AVTelephonyInterfaceDelegate>)arg1 ;
-(BOOL)registerForNotifications;
-(void)unregisterForNotifications;
-(void)dealloc;
-(void)notifyCTCurrentAudioPayload:(int)arg1 mode:(int)arg2 bitrate:(unsigned)arg3 ;
-(void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2 ;
-(void)handleVocoderNotificationWithInfo:(id)arg1 ;
-(id)translateVocoderTypeToCoreAudioType:(id)arg1 ;
@end

