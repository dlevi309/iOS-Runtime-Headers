/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

@class GKTournamentViewRequest;


@protocol GKTournamentExtensionInterface <GKSocialGamingExtensionInterface>
@property (nonatomic,readonly) GKTournamentViewRequest * viewRequest; 
@required
-(GKTournamentViewRequest *)viewRequest;
-(oneway void)setupWithViewRequest:(id)arg1;
-(oneway void)initializeWithLocalPlayer:(id)arg1 hostPID:(int)arg2 reply:(/*^block*/id)arg3;

@end

