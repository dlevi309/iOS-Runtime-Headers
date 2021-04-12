/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMCameraSource.h>

@class _HMCameraStream;

@interface HMCameraStream : HMCameraSource {

	_HMCameraStream* _stream;

}

@property (nonatomic,retain) _HMCameraStream * stream;                             //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) unsigned long long audioStreamSetting; 
-(id)initWithStream:(id)arg1 ;
-(_HMCameraStream *)stream;
-(void)setStream:(_HMCameraStream *)arg1 ;
-(id)audioVolume;
-(void)setAudioStreamSetting:(unsigned long long)arg1 ;
-(unsigned long long)audioStreamSetting;
-(void)updateAudioVolume:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

