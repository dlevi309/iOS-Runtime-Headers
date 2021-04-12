/*
* Generated on Thursday, January 14, 2021 at 2:29:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
*/

#import <Osprey/OspreyChannel.h>

@class NSString;

@interface SFSSOspreyTTSClient : OspreyChannel {

	NSString* _deviceId;

}

@property (nonatomic,retain) NSString * deviceId;              //@synthesize deviceId=_deviceId - In the implementation block
+(id)sharedInstance;
-(void)prewarm;
-(id)init;
-(void)setDeviceId:(NSString *)arg1 ;
-(NSString *)deviceId;
-(void)streamTTS:(id)arg1 beginHandler:(/*^block*/id)arg2 chunkHandler:(/*^block*/id)arg3 endHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
@end

