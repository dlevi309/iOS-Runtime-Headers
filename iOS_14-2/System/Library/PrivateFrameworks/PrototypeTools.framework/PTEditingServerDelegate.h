/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

