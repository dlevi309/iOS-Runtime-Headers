/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@interface MNLPRRuleHelper : NSObject
-(id)workQueue;
-(void)fetchRulesForWaypoints:(id)arg1 forceUpdateManifest:(BOOL)arg2 forceUpdateRules:(BOOL)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_findTileKeysForRegions:(id)arg1 forceUpdate:(BOOL)arg2 asyncCompletion:(/*^block*/id)arg3 ;
-(void)_loadRules:(id)arg1 asyncCompletion:(/*^block*/id)arg2 ;
-(void)_loadTileKeys:(id)arg1 forceUpdate:(BOOL)arg2 asyncCompletion:(/*^block*/id)arg3 ;
-(void)prefetchRulesForWaypoints:(id)arg1 ;
@end

