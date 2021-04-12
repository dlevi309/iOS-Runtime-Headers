/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
*/


@class AVAudioPCMBuffer, AVAudioTime, SNDetectionResult;

@interface AXHAAudioBufferData : NSObject {

	AVAudioPCMBuffer* _buffer;
	AVAudioTime* _when;
	SNDetectionResult* _result;

}

@property (nonatomic,retain) AVAudioPCMBuffer * buffer;               //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,retain) AVAudioTime * when;                      //@synthesize when=_when - In the implementation block
@property (nonatomic,retain) SNDetectionResult * result;              //@synthesize result=_result - In the implementation block
-(SNDetectionResult *)result;
-(void)setResult:(SNDetectionResult *)arg1 ;
-(void)setBuffer:(AVAudioPCMBuffer *)arg1 ;
-(AVAudioPCMBuffer *)buffer;
-(void)setWhen:(AVAudioTime *)arg1 ;
-(AVAudioTime *)when;
-(id)initWithBuffer:(id)arg1 andTime:(id)arg2 ;
@end

