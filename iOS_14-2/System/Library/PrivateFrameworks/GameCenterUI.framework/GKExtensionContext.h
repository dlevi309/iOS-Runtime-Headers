/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/GKExtensionProtocol.h>

@class GKGame, NSString;

@interface GKExtensionContext : NSExtensionContext <GKExtensionProtocol> {

	GKGame* _game;
	long long _sandboxToken;

}

@property (assign,nonatomic) long long sandboxToken;                //@synthesize sandboxToken=_sandboxToken - In the implementation block
@property (nonatomic,retain) GKGame * game;                         //@synthesize game=_game - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(GKGame *)game;
-(void)setInitialState:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(long long)sandboxToken;
-(void)setSandboxToken:(long long)arg1 ;
-(void)setGame:(GKGame *)arg1 ;
-(void)tearDownExtensionWithReply:(/*^block*/id)arg1 ;
-(void)messageFromClient:(id)arg1 ;
-(void)hostApp:(id)arg1 grantingAccessExtensionSandbox:(id)arg2 replyWithEndpoint:(/*^block*/id)arg3 ;
-(void)dealloc;
@end

