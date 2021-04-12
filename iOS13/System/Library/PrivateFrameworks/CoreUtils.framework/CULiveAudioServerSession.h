/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@protocol OS_dispatch_queue;
@class AVAudioConverter, AVAudioEngine, AVAudioFormat, AVAudioPlayerNode, NSObject;

@interface CULiveAudioServerSession : NSObject {

	AVAudioConverter* _audioConverter;
	AVAudioEngine* _audioEngine;
	AVAudioFormat* _audioInputFormat;
	AVAudioFormat* _audioOutputFormat;
	AVAudioPlayerNode* _audioPlayerNode;
	BOOL _playbackStarted;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)handleDataEvent:(id)arg1 ;
-(BOOL)activateAndReturnError:(id*)arg1 ;
@end

