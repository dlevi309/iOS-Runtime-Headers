/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class SSVPlayActivityController, ICRadioGetTracksRequest, NSString;

@interface MPCModelRadioGetTracksOperation : MPAsyncOperation {

	SSVPlayActivityController* _playActivityController;
	ICRadioGetTracksRequest* _request;
	NSString* _siriAssetInfo;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)execute;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3 ;
-(void)_runStep:(id)arg1 withFinishHandler:(/*^block*/id)arg2 ;
-(id)_cacheTracksForStep:(id)arg1 ;
@end

