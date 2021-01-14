/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@class NSString;

@interface CSOpportuneSpeakListenerDeviceManager : NSObject {

	NSString* _deviceId;

}

@property (nonatomic,copy) NSString * deviceId;              //@synthesize deviceId=_deviceId - In the implementation block
+(id)sharedManager;
-(void)setDeviceId:(NSString *)arg1 ;
-(NSString *)deviceId;
@end

