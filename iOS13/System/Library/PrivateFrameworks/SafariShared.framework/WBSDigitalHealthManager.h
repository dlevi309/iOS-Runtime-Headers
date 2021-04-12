/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@protocol WBSDigitalHealthManagerDelegate;
@class DMFWebsitePolicyMonitor, NSMutableDictionary;

@interface WBSDigitalHealthManager : NSObject {

	DMFWebsitePolicyMonitor* _monitor;
	NSMutableDictionary* _trackedUrlsToUsageState;
	id<WBSDigitalHealthManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSDigitalHealthManagerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (getter=isDeviceManagementEnabled,readonly) BOOL deviceManagementEnabled; 
+(void)_updateWebpageUsage:(id)arg1 withDigitalHealthManagerUsageState:(unsigned long long)arg2 ;
+(void)deleteUsageHistoryForURLs:(id)arg1 ;
+(void)deleteAllUsageHistory;
+(void)deleteUsageHistoryFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<WBSDigitalHealthManagerDelegate>)delegate;
-(void)setDelegate:(id<WBSDigitalHealthManagerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObserving;
-(void)stopObserving;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyWasCleared:(id)arg1 ;
-(void)updateUsageTrackingForURL:(id)arg1 withBundleIdentifier:(id)arg2 toState:(unsigned long long)arg3 ;
-(void)getOverlayStateForURLs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_requestPoliciesForWebsites:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isDeviceManagementEnabled;
-(void)stopUsageTrackingForURL:(id)arg1 ;
@end

