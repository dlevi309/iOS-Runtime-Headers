/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@class AVAudioPlayer, NSString;

@interface CUAudioRequest : NSObject {

	AVAudioPlayer* _audioPlayer;
	/*^block*/id _completion;
	NSString* _label;

}

@property (nonatomic,retain) AVAudioPlayer * audioPlayer;              //@synthesize audioPlayer=_audioPlayer - In the implementation block
@property (nonatomic,copy) id completion;                              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * label;                           //@synthesize label=_label - In the implementation block
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(AVAudioPlayer *)audioPlayer;
-(void)setAudioPlayer:(AVAudioPlayer *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end

