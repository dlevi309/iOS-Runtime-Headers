/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@protocol NUAdProvider <NSObject>
@required
-(void)bannerViewForIdentifier:(id)arg1 contextProviders:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(/*^block*/id)arg4;
-(void)interstitialViewForContextProviders:(id)arg1 layoutOptions:(id)arg2 withCompletionBlock:(/*^block*/id)arg3;
-(void)interstitialViewForContextProviders:(id)arg1 contextProvidersWithKeys:(id)arg2 layoutOptions:(id)arg3 withCompletionBlock:(/*^block*/id)arg4;
-(void)prerollForContextProviders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)videoPlaylistAdForContextProviders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2;
-(void)bannerViewDidLoad:(id)arg1;
-(void)bannerViewDidUnload:(id)arg1;

@end

