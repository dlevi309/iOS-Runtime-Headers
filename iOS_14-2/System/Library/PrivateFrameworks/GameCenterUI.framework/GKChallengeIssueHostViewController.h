/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <libobjc.A.dylib/GKChallengeIssueHostProtocol.h>

@class GKHostedChallengeIssueController, GKGame, NSString;

@interface GKChallengeIssueHostViewController : GKExtensionRemoteViewController <GKChallengeIssueHostProtocol> {

	GKHostedChallengeIssueController* _delegateWeak;

}

@property (assign,nonatomic,__weak) GKHostedChallengeIssueController * delegate;              //@synthesize delegateWeak=_delegateWeak - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)challengeExtension;
-(GKHostedChallengeIssueController *)delegate;
-(void)extensionIsCanceling;
-(id)extensionObjectProxy;
-(void)setDelegate:(GKHostedChallengeIssueController *)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
@end

