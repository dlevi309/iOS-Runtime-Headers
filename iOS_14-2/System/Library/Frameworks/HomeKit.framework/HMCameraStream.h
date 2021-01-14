/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCameraSource.h>

@class _HMCameraStream, NSNumber;

@interface HMCameraStream : HMCameraSource {

	_HMCameraStream* _stream;

}

@property (nonatomic,retain) _HMCameraStream * stream;                             //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSNumber * audioVolume; 
@property (nonatomic,readonly) unsigned long long audioStreamSetting; 
-(_HMCameraStream *)stream;
-(id)initWithStream:(id)arg1 ;
-(void)setStream:(_HMCameraStream *)arg1 ;
-(void)setAudioStreamSetting:(unsigned long long)arg1 ;
-(unsigned long long)audioStreamSetting;
-(void)updateAudioVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSNumber *)audioVolume;
@end

