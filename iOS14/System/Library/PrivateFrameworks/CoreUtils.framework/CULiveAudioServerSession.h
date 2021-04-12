/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)handleDataEvent:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)activateAndReturnError:(id*)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)invalidate;
@end

