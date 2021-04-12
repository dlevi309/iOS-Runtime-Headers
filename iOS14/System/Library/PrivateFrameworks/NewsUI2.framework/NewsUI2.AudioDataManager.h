/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsUI2.AudioDataManager : NSObject <FCBundleSubscriptionChangeObserver> {

	 state;
	 configurationManager;
	 readingHistory;
	 dailyBriefingStore;
	 playlistStore;
	 recentlyPlayedStore;
	 suggestionsStore;
	 reloadQueue;
	 audioTabVisibilitySignal;
	 audioStateFactory;
	 completedListeningProcessor;
	 expirationTimer;
	 topOfFeedTrack;
	 dailyBriefingTrack;
	 upNextTracks;
	 suggestedTracks;
	 recentlyPlayedTracks;
	 ignoreStoreUpdates;

}
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(id)init;
@end

