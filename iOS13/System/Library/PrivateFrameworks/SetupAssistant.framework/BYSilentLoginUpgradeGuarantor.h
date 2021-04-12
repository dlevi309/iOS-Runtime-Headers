/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BYSilentLoginUpgradeGuarantor : NSObject {

	BOOL _didEnsureQueuesAndStartSilentLoginUpgrade;
	NSObject*<OS_dispatch_queue> _silentLoginUpgradeCompletionQueue;
	NSObject*<OS_dispatch_queue> _shortLivedTokenUpgradeCompletionQueue;

}

@property (assign,nonatomic) BOOL didEnsureQueuesAndStartSilentLoginUpgrade;                                  //@synthesize didEnsureQueuesAndStartSilentLoginUpgrade=_didEnsureQueuesAndStartSilentLoginUpgrade - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> silentLoginUpgradeCompletionQueue;                  //@synthesize silentLoginUpgradeCompletionQueue=_silentLoginUpgradeCompletionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> shortLivedTokenUpgradeCompletionQueue;              //@synthesize shortLivedTokenUpgradeCompletionQueue=_shortLivedTokenUpgradeCompletionQueue - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setDidEnsureQueuesAndStartSilentLoginUpgrade:(BOOL)arg1 ;
-(BOOL)didEnsureQueuesAndStartSilentLoginUpgrade;
-(void)setSilentLoginUpgradeCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)silentLoginUpgradeCompletionQueue;
-(void)setShortLivedTokenUpgradeCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)shortLivedTokenUpgradeCompletionQueue;
-(void)_ensureQueuesAndStartSilentLoginUpgrade;
-(void)blockUntilSilentLoginUpgradeCompletesForNonLoginUser;
-(void)didShortCircuitSilentLoginUpgrade;
-(void)didShortCircuitShortLivedTokenUpgrade;
-(void)blockUntilSilentLoginUpgradeCompletes;
-(void)blockUntilShortLivedTokenUpgradeCompletes;
@end

