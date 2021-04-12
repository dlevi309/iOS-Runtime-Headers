/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMSharedMessageSendingUtilities : NSObject {

	long long _serviceAvailability;

}

@property (assign) long long serviceAvailability;              //@synthesize serviceAvailability=_serviceAvailability - In the implementation block
+(void)initialize;
+(id)sharedInstance;
+(void)_setupAccountMonitor;
-(BOOL)_hasSMSCapability;
-(BOOL)isiMessageEnabled;
-(long long)serviceAvailability;
-(BOOL)_canSendText;
-(void)setServiceAvailability:(long long)arg1 ;
-(id)_managedConfigAppWhitelist;
-(void)_updateServiceAvailability;
-(BOOL)isMMSEnabled;
-(BOOL)_isiMessageSupported;
-(long long)_maxMMSAttachmentCount;
-(long long)_maxMMSMessageByteCount;
-(BOOL)canSendText;
-(BOOL)isSupportedAttachmentUTI:(id)arg1 ;
-(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
@end

