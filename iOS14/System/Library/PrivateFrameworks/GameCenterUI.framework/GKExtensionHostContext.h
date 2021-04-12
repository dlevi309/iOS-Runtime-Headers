/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/GKExtensionHostProtocol.h>

@class GKGame, GKExtensionRemoteViewController, NSString;

@interface GKExtensionHostContext : NSExtensionContext <GKExtensionHostProtocol> {

	GKGame* _game;
	GKExtensionRemoteViewController* _remoteViewController;

}

@property (assign,nonatomic,__weak) GKExtensionRemoteViewController * remoteViewController;              //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) GKGame * game;                                                              //@synthesize game=_game - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GKExtensionRemoteViewController *)remoteViewController;
-(GKGame *)game;
-(void)setRemoteViewController:(GKExtensionRemoteViewController *)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
@end

