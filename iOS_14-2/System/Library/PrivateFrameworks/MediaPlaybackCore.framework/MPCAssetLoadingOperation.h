/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <Foundation/NSOperation.h>

@protocol MPCAssetLoaderDelegate, OS_dispatch_queue;
@class MPAVItem, MPCPlayerItemConfigurator, NSObject;

@interface MPCAssetLoadingOperation : NSOperation {

	MPAVItem* _item;
	id<MPCAssetLoaderDelegate> _delegate;
	MPCPlayerItemConfigurator* _configurator;
	long long _token;
	/*^block*/id _completion;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,copy,readonly) MPAVItem * item;                                           //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<MPCAssetLoaderDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPCPlayerItemConfigurator * configurator;                         //@synthesize configurator=_configurator - In the implementation block
@property (nonatomic,readonly) long long token;                                                //@synthesize token=_token - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                             //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
-(void)setConfigurator:(MPCPlayerItemConfigurator *)arg1 ;
-(MPCPlayerItemConfigurator *)configurator;
-(id<MPCAssetLoaderDelegate>)delegate;
-(MPAVItem *)item;
-(id)completion;
-(void)setDelegate:(id<MPCAssetLoaderDelegate>)arg1 ;
-(void)main;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(long long)token;
-(id)initWithPlayerItem:(id)arg1 configurator:(id)arg2 delegate:(id)arg3 token:(long long)arg4 callbackQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
@end

