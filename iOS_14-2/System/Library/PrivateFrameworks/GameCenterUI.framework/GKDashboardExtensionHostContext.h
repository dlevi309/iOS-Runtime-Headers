/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKExtensionHostContext.h>
#import <libobjc.A.dylib/GKGameCenterDashboardHostProtocol.h>

@class GKGame, NSString;

@interface GKDashboardExtensionHostContext : GKExtensionHostContext <GKGameCenterDashboardHostProtocol>

@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)requestImagesForLeaderboardsInSet:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)requestImagesForLeaderboardSetsWithHandler:(/*^block*/id)arg1 ;
-(void)requestDashboardLogoImageWithHandler:(/*^block*/id)arg1 ;
-(void)getMethodsImplementedByChallengeEventHandlerDelegate:(/*^block*/id)arg1 ;
@end

