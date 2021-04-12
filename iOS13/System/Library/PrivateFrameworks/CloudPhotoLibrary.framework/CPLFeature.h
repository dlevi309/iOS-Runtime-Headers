/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@interface CPLFeature : NSObject
+(id)featureWithName:(id)arg1 ;
-(BOOL)disableFeatureInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)enableFeatureInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)handleScopeWhenFeatureIsDisabled:(id)arg1 scopeType:(long long)arg2 store:(id)arg3 error:(id*)arg4 ;
-(BOOL)shouldDisableScopeWhenFeatureIsDisabled:(id)arg1 ;
@end

