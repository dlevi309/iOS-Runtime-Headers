/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFCore/AVPlayerLayer.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface ISAVPlayerLayer : AVPlayerLayer {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	/*^block*/id _readyForDisplayChangeHandler;

}

@property (nonatomic,copy) id readyForDisplayChangeHandler;              //@synthesize readyForDisplayChangeHandler=_readyForDisplayChangeHandler - In the implementation block
-(void)setPlayer:(id)arg1 ;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)readyForDisplayChangeHandler;
-(void)setReadyForDisplayChangeHandler:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setWrappedPlayer:(id)arg1 ;
-(void)deferredDealloc;
-(void)dealloc;
@end

