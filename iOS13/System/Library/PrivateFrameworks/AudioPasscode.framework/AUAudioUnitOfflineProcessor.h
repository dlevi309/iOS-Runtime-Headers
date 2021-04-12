/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioPasscode.framework/AudioPasscode
*/


#import <AudioPasscode/AudioPasscode-Structs.h>
@class AUAudioUnit;

@interface AUAudioUnitOfflineProcessor : NSObject {

	CAExtAudioFile* _srcFile;
	CAExtAudioFile* _destFile;
	AUAudioUnit* _audioUnit;
	/*^block*/id _renderBlock;
	unique_ptr<CABufferList, std::__1::default_delete<CABufferList> >* _srcBufferList;
	unique_ptr<CABufferList, std::__1::default_delete<CABufferList> >* _destBufferList;
	/*^block*/id _pullInputBlock;
	long long _assetLength;

}

@property (nonatomic,readonly) long long assetLength;              //@synthesize assetLength=_assetLength - In the implementation block
-(BOOL)run;
-(long long)assetLength;
-(id)initWithAudioUnit:(id)arg1 inputFileURL:(id)arg2 outputFileURL:(id)arg3 ioSampleRate:(long long)arg4 ;
@end

