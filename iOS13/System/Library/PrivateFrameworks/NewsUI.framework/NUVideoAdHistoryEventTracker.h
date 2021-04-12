/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/NUVideoPlayerEventTracker.h>

@class NUAdBannerView, NSString;

@interface NUVideoAdHistoryEventTracker : NSObject <NUVideoPlayerEventTracker> {

	NUAdBannerView* _mostRecentBannerView;

}

@property (nonatomic,retain) NUAdBannerView * mostRecentBannerView;              //@synthesize mostRecentBannerView=_mostRecentBannerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearHistory;
-(void)playbackStartedWithVideoItem:(id)arg1 metadata:(id)arg2 ;
-(void)loadingFinishedForVideoAdWithMetadata:(id)arg1 ;
-(void)setMostRecentBannerView:(NUAdBannerView *)arg1 ;
-(NUAdBannerView *)mostRecentBannerView;
@end

