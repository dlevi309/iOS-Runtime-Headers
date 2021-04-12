/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>
#import <libobjc.A.dylib/NUAsyncContentViewControllerLoader.h>

@protocol SVVideoPlaybackController;
@class NSString;

@interface NUVideoLoadingCoordinator : NSObject <NUVideoPlayerEventTracker, NUAsyncContentViewControllerLoader> {

	BOOL _loadStarted;
	id<SVVideoPlaybackController> _playbackController;
	/*^block*/id _completionBlock;

}

@property (nonatomic,readonly) id<SVVideoPlaybackController> playbackController;              //@synthesize playbackController=_playbackController - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,getter=hasLoadStarted,nonatomic) BOOL loadStarted;                          //@synthesize loadStarted=_loadStarted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(id<SVVideoPlaybackController>)playbackController;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackFailedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)playbackStartedForVideoAdWithMetadata:(id)arg1 ;
-(void)_invokeAndClearCompletionBlockWithError:(id)arg1 ;
-(BOOL)hasLoadStarted;
-(void)setLoadStarted:(BOOL)arg1 ;
-(id)loadContentWithTimeoutTime:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPlaybackController:(id)arg1 ;
@end

