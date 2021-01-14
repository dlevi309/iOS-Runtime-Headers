/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <libobjc.A.dylib/GKAuthenticateHostProtocol.h>

@class GKHostedAuthenticateViewController, GKGame, NSString;

@interface GKAuthenticateHostViewController : GKExtensionRemoteViewController <GKAuthenticateHostProtocol> {

	GKHostedAuthenticateViewController* _delegate;

}

@property (assign,nonatomic,__weak) GKHostedAuthenticateViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)authenticateExtension;
+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
-(GKHostedAuthenticateViewController *)delegate;
-(void)extensionIsCanceling;
-(void)setDelegate:(GKHostedAuthenticateViewController *)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)viewDidLoad;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)extensionIsFinishing;
@end

