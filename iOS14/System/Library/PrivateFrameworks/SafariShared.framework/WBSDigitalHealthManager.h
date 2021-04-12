/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSDigitalHealthManagerDelegate;
@class DMFWebsitePolicyMonitor, NSMutableDictionary;

@interface WBSDigitalHealthManager : NSObject {

	DMFWebsitePolicyMonitor* _monitor;
	NSMutableDictionary* _trackedUrlsToUsageState;
	id<WBSDigitalHealthManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSDigitalHealthManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)deleteUsageHistoryForURLs:(id)arg1 ;
+(void)_updateWebpageUsage:(id)arg1 withDigitalHealthManagerUsageState:(unsigned long long)arg2 ;
+(void)deleteAllUsageHistory;
+(void)deleteUsageHistoryFromDate:(id)arg1 toDate:(id)arg2 ;
-(void)startObserving;
-(void)stopObserving;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(id<WBSDigitalHealthManagerDelegate>)delegate;
-(void)_historyWasCleared:(id)arg1 ;
-(void)stopUsageTrackingForURL:(id)arg1 ;
-(void)setDelegate:(id<WBSDigitalHealthManagerDelegate>)arg1 ;
-(void)_requestPoliciesForWebsites:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)getOverlayStateForURLs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateUsageTrackingForURL:(id)arg1 withBundleIdentifier:(id)arg2 toState:(unsigned long long)arg3 ;
-(void)dealloc;
@end

