/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BFFCapabilities : NSObject {

	NSObject*<OS_dispatch_queue> _fetchQueue;
	BOOL _shouldShowWalletInitialized;
	BOOL _shouldShowWallet;

}
+(id)sharedCapabilities;
-(id)init;
-(void)dealloc;
-(BOOL)supportsApplePay;
-(BOOL)isAppleTV;
-(void)localeChanged:(id)arg1 ;
-(void)shouldShowWallet:(/*^block*/id)arg1 ;
@end

