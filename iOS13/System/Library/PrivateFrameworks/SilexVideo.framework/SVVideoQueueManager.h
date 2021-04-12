/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTransitionObserver.h>
#import <libobjc.A.dylib/SVVideoQueueProviding.h>
#import <libobjc.A.dylib/SVVideoQueueObserving.h>
#import <libobjc.A.dylib/SVVideoQueueManager.h>

@protocol SVVideoQueueManager <NSObject>
@required
-(void)replaceCurrentQueueWithQueue:(id)arg1;
-(void)addModifier:(id)arg1;
-(void)removeModifier:(id)arg1;

@end

#import <libobjc.A.dylib/SVVideoViewControllerAppearanceObserver.h>

@protocol SVVideoQueue, SVVideo;
@class NSMutableArray, NSString;

@interface SVVideoQueueManager : NSObject <SVVideoTransitionObserver, SVVideoQueueProviding, SVVideoQueueObserving, SVVideoQueueManager, SVVideoViewControllerAppearanceObserver> {

	BOOL _locked;
	id<SVVideoQueue> _queue;
	id<SVVideoQueue> _pendingQueue;
	NSMutableArray* _updateBlocks;
	NSMutableArray* _modifiers;
	id<SVVideo> _video;

}

@property (nonatomic,copy) id<SVVideoQueue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id<SVVideoQueue> pendingQueue;                  //@synthesize pendingQueue=_pendingQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * updateBlocks;              //@synthesize updateBlocks=_updateBlocks - In the implementation block
@property (nonatomic,readonly) NSMutableArray * modifiers;                 //@synthesize modifiers=_modifiers - In the implementation block
@property (nonatomic,retain) id<SVVideo> video;                            //@synthesize video=_video - In the implementation block
@property (assign,nonatomic) BOOL locked;                                  //@synthesize locked=_locked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setQueue:(id<SVVideoQueue>)arg1 ;
-(id<SVVideoQueue>)queue;
-(id)initWithQueue:(id)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(NSMutableArray *)modifiers;
-(NSMutableArray *)updateBlocks;
-(id<SVVideo>)video;
-(BOOL)locked;
-(void)setVideo:(id<SVVideo>)arg1 ;
-(id<SVVideoQueue>)pendingQueue;
-(void)setPendingQueue:(id<SVVideoQueue>)arg1 ;
-(void)onUpdate:(/*^block*/id)arg1 ;
-(void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)videoViewControllerDidAppear:(id)arg1 ;
-(void)videoViewControllerWillDisappear:(id)arg1 ;
-(void)replaceCurrentQueueWithQueue:(id)arg1 ;
-(void)addModifier:(id)arg1 ;
-(void)removeModifier:(id)arg1 ;
@end

