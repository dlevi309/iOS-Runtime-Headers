/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class ICPlayActivityController, ICRadioGetTracksRequest, NSString;

@interface MPCModelRadioGetTracksOperation : MPAsyncOperation {

	ICPlayActivityController* _playActivityController;
	ICRadioGetTracksRequest* _request;
	NSString* _siriAssetInfo;
	void* _radioQueueFeederPointerForLogging;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)execute;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
-(void)_runStep:(id)arg1 withFinishHandler:(/*^block*/id)arg2 ;
-(id)_cacheTracksForStep:(id)arg1 ;
-(id)initWithGetTracksRequest:(id)arg1 siriAssetInfo:(id)arg2 playActivityController:(id)arg3 radioQueueFeeder:(id)arg4 ;
@end

