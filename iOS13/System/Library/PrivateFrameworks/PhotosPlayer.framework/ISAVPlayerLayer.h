/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFoundation/AVPlayerLayer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ISAVPlayerLayer : AVPlayerLayer {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	/*^block*/id _readyForDisplayChangeHandler;

}

@property (nonatomic,copy) id readyForDisplayChangeHandler;              //@synthesize readyForDisplayChangeHandler=_readyForDisplayChangeHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(void)setWrappedPlayer:(id)arg1 ;
-(void)deferredDealloc;
-(id)readyForDisplayChangeHandler;
-(void)setReadyForDisplayChangeHandler:(id)arg1 ;
@end

