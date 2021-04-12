/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@interface AppStoreKit.VideoObserver : NSObject {

	 delegate;
	 playerItemObserversAdded;
	 playerObserversAdded;
	 timeBoundaryObserver;

}
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)videoDidPlayToEnd;
-(void)videoPlaybackDidStall;
-(void)playbackErrorOccurredWithNotification:(id)arg1 ;
@end

