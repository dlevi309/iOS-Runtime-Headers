/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@interface IMSharedMessageSendingUtilities : NSObject {

	long long _serviceAvailability;

}

@property (assign) long long serviceAvailability;              //@synthesize serviceAvailability=_serviceAvailability - In the implementation block
+(void)initialize;
+(id)sharedInstance;
+(void)_setupAccountMonitor;
-(BOOL)isMMSEnabled;
-(BOOL)isiMessageEnabled;
-(BOOL)_hasSMSCapability;
-(BOOL)_canSendText;
-(void)setServiceAvailability:(long long)arg1 ;
-(id)_managedConfigAppWhitelist;
-(void)_updateServiceAvailability;
-(BOOL)canSendText;
-(BOOL)_isiMessageSupported;
-(long long)_maxMMSAttachmentCount;
-(long long)_maxMMSMessageByteCount;
-(BOOL)isSupportedAttachmentUTI:(id)arg1 ;
-(long long)serviceAvailability;
-(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3 ;
@end

