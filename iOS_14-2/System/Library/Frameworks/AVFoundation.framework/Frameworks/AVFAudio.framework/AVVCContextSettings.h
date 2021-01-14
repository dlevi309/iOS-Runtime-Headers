/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/


@class NSString;

@interface AVVCContextSettings : NSObject {

	long long _activationMode;
	NSString* _activationDeviceUID;

}

@property (assign,nonatomic) long long activationMode;                    //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,retain) NSString * activationDeviceUID;              //@synthesize activationDeviceUID=_activationDeviceUID - In the implementation block
-(long long)activationMode;
-(void)setActivationMode:(long long)arg1 ;
-(NSString *)activationDeviceUID;
-(id)initWithMode:(long long)arg1 deviceUID:(id)arg2 ;
-(void)setActivationDeviceUID:(NSString *)arg1 ;
@end

