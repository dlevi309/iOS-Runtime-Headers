/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol TVPMediaItem;
@class NSObject;

@interface VUIPostPlayUpsellManager : NSObject {

	NSObject*<TVPMediaItem> _deferredMediaItem;
	double _deferredElapsedTime;

}

@property (nonatomic,retain) NSObject*<TVPMediaItem> deferredMediaItem;              //@synthesize deferredMediaItem=_deferredMediaItem - In the implementation block
@property (assign,nonatomic) double deferredElapsedTime;                             //@synthesize deferredElapsedTime=_deferredElapsedTime - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)_reset;
-(void)handleRouterDataSourceIfNeeded:(id)arg1 ;
-(BOOL)_isFullScreenPlaybackUIShown;
-(void)_handleDeferredMediaItemUpsellIfNeeded;
-(void)_currentMediaItemWillChange:(id)arg1 ;
-(void)_handleUpsellForMediaItem:(id)arg1 elapsedTimeInterval:(double)arg2 ;
-(void)setDeferredMediaItem:(NSObject*<TVPMediaItem>)arg1 ;
-(void)setDeferredElapsedTime:(double)arg1 ;
-(NSObject*<TVPMediaItem>)deferredMediaItem;
-(double)deferredElapsedTime;
@end

