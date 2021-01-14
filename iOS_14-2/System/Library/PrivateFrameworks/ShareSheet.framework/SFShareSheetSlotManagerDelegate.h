/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/


@protocol SFShareSheetSlotManagerDelegate <NSObject>
@required
-(void)connectionInterrupted;
-(void)setProgress:(id)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(id)arg5 animated:(BOOL)arg6;
-(void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2;
-(void)performAirDropActivityInHostWithNoContentView:(BOOL)arg1;
-(void)dataSourceUpdatedWithSessionConfiguration:(id)arg1;
-(void)performExtensionActivityInHostWithBundleID:(id)arg1 request:(id)arg2;
-(void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4;
-(void)performActivityInHostWithUUID:(id)arg1;

@end

