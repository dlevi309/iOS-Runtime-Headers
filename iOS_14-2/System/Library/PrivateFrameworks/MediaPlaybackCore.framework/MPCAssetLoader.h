/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MFAssetLoading.h>

@protocol MPCAssetLoaderDelegate;
@class MPCPlayerItemConfigurator, NSOperationQueue;

@interface MPCAssetLoader : NSObject <MFAssetLoading> {

	id<MPCAssetLoaderDelegate> _delegate;
	MPCPlayerItemConfigurator* _configurator;
	NSOperationQueue* _loadingQueue;

}

@property (nonatomic,readonly) NSOperationQueue * loadingQueue;                       //@synthesize loadingQueue=_loadingQueue - In the implementation block
@property (assign,nonatomic,__weak) id<MPCAssetLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPCPlayerItemConfigurator * configurator;                //@synthesize configurator=_configurator - In the implementation block
-(void)cancelLoading;
-(void)setConfigurator:(MPCPlayerItemConfigurator *)arg1 ;
-(MPCPlayerItemConfigurator *)configurator;
-(id<MPCAssetLoaderDelegate>)delegate;
-(void)setDelegate:(id<MPCAssetLoaderDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(NSOperationQueue *)loadingQueue;
-(void)loadAssetFor:(id)arg1 token:(long long)arg2 completion:(/*^block*/id)arg3 ;
@end

