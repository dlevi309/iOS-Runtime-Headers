/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@interface AppStoreKit.VideoObserver : NSObject {

	 delegate;
	 playerItemObserversAdded;
	 playerObserversAdded;
	 timeBoundaryObserver;

}
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)videoDidPlayToEnd;
-(void)videoPlaybackDidStall;
-(void)playbackErrorOccurredWithNotification:(id)arg1 ;
@end

