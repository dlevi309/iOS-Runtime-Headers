/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlayerItemLoading.h>

@protocol SVPlayerItemFactory, SVURLAssetLoading, SVVideoMetadata;
@class AVPlayerItem, NSError, NFStateMachine, NSMutableArray, NSString;

@interface SVPlayerItemLoader : NSObject <SVPlayerItemLoading> {

	id<SVPlayerItemFactory> _playerItemFactory;
	id<SVURLAssetLoading> _URLAssetLoader;
	id<SVVideoMetadata> _metadata;
	NFStateMachine* _stateMachine;
	NSMutableArray* _loadingStateChangeBlocks;
	unsigned long long _state;
	AVPlayerItem* _item;
	NSError* _error;
	/*^block*/id _cancellationBlock;

}

@property (nonatomic,readonly) id<SVPlayerItemFactory> playerItemFactory;              //@synthesize playerItemFactory=_playerItemFactory - In the implementation block
@property (nonatomic,readonly) id<SVURLAssetLoading> URLAssetLoader;                   //@synthesize URLAssetLoader=_URLAssetLoader - In the implementation block
@property (nonatomic,readonly) id<SVVideoMetadata> metadata;                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NFStateMachine * stateMachine;                          //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) NSMutableArray * loadingStateChangeBlocks;              //@synthesize loadingStateChangeBlocks=_loadingStateChangeBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                 //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) AVPlayerItem * item;                                      //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) id cancellationBlock;                                       //@synthesize cancellationBlock=_cancellationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)load;
-(NSError *)error;
-(AVPlayerItem *)item;
-(void)setItem:(AVPlayerItem *)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id<SVVideoMetadata>)metadata;
-(NFStateMachine *)stateMachine;
-(void)setCancellationBlock:(id)arg1 ;
-(id)cancellationBlock;
-(void)loadPlayerItemWithCompletionBlock:(/*^block*/id)arg1 ;
-(NSMutableArray *)loadingStateChangeBlocks;
-(id<SVURLAssetLoading>)URLAssetLoader;
-(id<SVPlayerItemFactory>)playerItemFactory;
-(void)onLoadingStateChange:(/*^block*/id)arg1 ;
-(id)initWithPlayerItemFactory:(id)arg1 URLAssetLoader:(id)arg2 metadata:(id)arg3 ;
@end

