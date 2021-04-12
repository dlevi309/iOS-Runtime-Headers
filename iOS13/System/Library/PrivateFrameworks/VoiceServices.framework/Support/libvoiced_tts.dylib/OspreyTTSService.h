/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(void)roundTripTTS:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)streamTTS:(id)arg1 beginHandler:(/*^block*/id)arg2 chunkHandler:(/*^block*/id)arg3 endHandler:(/*^block*/id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setConfigurationOptionUseCompression:(BOOL)arg1 ;
-(void)setConfigurationOptionUseAbsinthe:(BOOL)arg1 ;
@end

