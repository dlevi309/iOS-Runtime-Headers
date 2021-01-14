/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GKExtensionHostViewController.h>
#import <libobjc.A.dylib/GKTournamentExtensionInterface.h>
#import <libobjc.A.dylib/GKTournamentHostInterface.h>

@class GKTournamentViewRequest, NSString;

@interface GKTournamentExtensionHostViewController : GKExtensionHostViewController <GKTournamentExtensionInterface, GKTournamentHostInterface>

@property (nonatomic,readonly) GKTournamentViewRequest * viewRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(oneway void)setupWithViewRequest:(id)arg1 ;
-(oneway void)initializeWithLocalPlayer:(id)arg1 hostPID:(int)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)playTournament:(id)arg1 withTryToken:(id)arg2 ;
-(id)tournamentHostViewController;
@end

