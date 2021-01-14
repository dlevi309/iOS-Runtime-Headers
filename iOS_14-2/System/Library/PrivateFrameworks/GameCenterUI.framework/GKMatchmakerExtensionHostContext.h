/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKExtensionHostContext.h>
#import <libobjc.A.dylib/GKMatchmakerHostProtocol.h>

@class GKGame, NSString;

@interface GKMatchmakerExtensionHostContext : GKExtensionHostContext <GKMatchmakerHostProtocol>

@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)shareMatchWithRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

