/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/GKExtensionProtocol.h>
#import <libobjc.A.dylib/GKExtensionHostProtocol.h>

@class GKGame, NSExtension, NSString;

@interface GKExtensionRemoteViewController : _UIRemoteViewController <GKExtensionProtocol, GKExtensionHostProtocol> {

	GKGame* _game;
	NSExtension* _extension;
	id _requestIdentifier;

}

@property (nonatomic,retain) NSExtension * extension;               //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id requestIdentifier;                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) GKGame * game;                         //@synthesize game=_game - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPropagateAppearanceCustomizations;
+(void)setupCallbackBlocksForExtension:(id)arg1 withParentViewController:(id)arg2 ;
+(void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)initialItemsForExtension;
+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
-(void)setRequestIdentifier:(id)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)requestIdentifier;
-(GKGame *)game;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)extensionIsCanceling;
-(id)extensionObjectProxy;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)_desiredStatusBarStyle;
-(void)messageFromExtension:(id)arg1 ;
-(void)viewDidLoad;
-(NSExtension *)extension;
-(void)cancelExtension;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)tearDownExtensionWithReply:(/*^block*/id)arg1 ;
-(void)messageFromClient:(id)arg1 ;
-(void)sendMessageToExtension:(id)arg1 ;
-(void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(/*^block*/id)arg3 ;
-(void)extensionIsFinishing;
-(void)dealloc;
@end

