/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BFFCapabilities : NSObject {

	BOOL _shouldShowWalletInitialized;
	BOOL _shouldShowWallet;
	NSObject*<OS_dispatch_queue> _fetchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> fetchQueue;              //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (assign,nonatomic) BOOL shouldShowWalletInitialized;                     //@synthesize shouldShowWalletInitialized=_shouldShowWalletInitialized - In the implementation block
@property (assign,nonatomic) BOOL shouldShowWallet;                                //@synthesize shouldShowWallet=_shouldShowWallet - In the implementation block
+(id)sharedCapabilities;
-(id)init;
-(void)_localeChanged:(id)arg1 ;
-(BOOL)isAppleTV;
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(void)setFetchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(BOOL)hasSecureElement;
-(void)setShouldShowWallet:(BOOL)arg1 ;
-(void)shouldShowWallet:(/*^block*/id)arg1 ;
-(BOOL)shouldShowWallet;
-(BOOL)shouldShowWalletInitialized;
-(void)setShouldShowWalletInitialized:(BOOL)arg1 ;
@end

