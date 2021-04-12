/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSString;

@interface IMMessageNotificationController : NSObject <IDSServiceDelegate> {

	IDSService* _messageNotificationControllerIDSService;

}

@property (nonatomic,retain) IDSService * messageNotificationControllerIDSService;              //@synthesize messageNotificationControllerIDSService=_messageNotificationControllerIDSService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)_playTone;
-(IDSService *)messageNotificationControllerIDSService;
-(id)_copyIDForDevice:(id)arg1 ;
-(BOOL)_deviceIsAudioAccessory:(id)arg1 ;
-(BOOL)_isCurrentDeviceAudioAccessory;
-(void)_executeCommandFromMessageRequest:(id)arg1 ;
-(id)_copyIDSIdentifierOrDefault:(id)arg1 ;
-(void)_sendNotificationMessageRequest:(id)arg1 toTokenURI:(id)arg2 ;
-(BOOL)audioAccessoryDeviceWithTokenURIExists:(id)arg1 ;
-(void)sendNotificationMessageToUniqueID:(id)arg1 withCommmand:(long long)arg2 ;
-(void)sendNotificationMessageToTokenURI:(id)arg1 withCommmand:(long long)arg2 ;
-(void)setMessageNotificationControllerIDSService:(IDSService *)arg1 ;
-(void)dealloc;
@end

