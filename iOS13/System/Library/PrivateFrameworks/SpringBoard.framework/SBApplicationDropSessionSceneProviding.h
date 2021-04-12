/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol SBApplicationDropSessionSceneProviding <NSObject>
@required
-(id)newSceneIdentityForApplication:(id)arg1;
-(id)preferredSceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 preferNewScene:(BOOL)arg3;
-(id)mostRecentSceneIdentityExcludingLiveScenesForApplication:(id)arg1;
-(BOOL)isApplicationActiveAndVisible:(id)arg1;

@end

