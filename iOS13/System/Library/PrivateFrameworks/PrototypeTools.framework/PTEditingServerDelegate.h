/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/


@protocol PTEditingServerDelegate <NSObject>
@required
-(void)applyArchiveValue:(id)arg1 forRootSettingsKeyPath:(id)arg2 domainID:(id)arg3;
-(void)restoreDefaultValuesForDomainID:(id)arg1;
-(void)invokeOutletAtKeyPath:(id)arg1 domainID:(id)arg2;
-(void)sendEvent:(long long)arg1 forTestRecipeID:(id)arg2;
-(void)setActiveTestRecipeID:(id)arg1;

@end

