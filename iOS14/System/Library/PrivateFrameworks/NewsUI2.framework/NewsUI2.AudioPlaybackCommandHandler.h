/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <libobjc.A.dylib/FCBundleSubscriptionChangeObserver.h>

@interface NewsUI2.AudioPlaybackCommandHandler : NSObject <FCBundleSubscriptionChangeObserver> {

	 dataManager;
	 playbackConductor;
	 playNowIgnoringPlaylistSlot;
	 audioPlaybackTracker;
	 playbackQueue;
	 resumeSlot;
	 bundleSubscriptionManager;
	 offlineManager;
	 offlineArticleManager;
	 offlineAlertControllerFactory;
	 commandCenter;
	 sceneProvider;

}
-(void)bundleSubscriptionDidSubscribe:(id)arg1 ;
-(void)bundleSubscriptionDidExpire:(id)arg1 ;
-(id)init;
@end

