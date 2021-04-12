/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
*/

#import <Osprey/OspreyChannel.h>

@class NSString;

@interface OspreyTTSService : OspreyChannel {

	NSString* _deviceID;

}

@property (nonatomic,retain) NSString * deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
+(id)sharedInstance;
+(id)ospreyServiceEndpointURL;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
-(id)init;
-(void)roundTripTTS:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)streamTTS:(id)arg1 beginHandler:(/*^block*/id)arg2 chunkHandler:(/*^block*/id)arg3 endHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setConfigurationOptionUseCompression:(BOOL)arg1 ;
-(void)setConfigurationOptionUseAbsinthe:(BOOL)arg1 ;
@end

