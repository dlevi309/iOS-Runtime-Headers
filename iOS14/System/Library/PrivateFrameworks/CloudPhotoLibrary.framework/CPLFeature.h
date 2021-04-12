/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@interface CPLFeature : NSObject
+(id)featureWithName:(id)arg1 ;
-(BOOL)disableFeatureInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)enableFeatureInStore:(id)arg1 error:(id*)arg2 ;
-(BOOL)handleScopeWhenFeatureIsDisabled:(id)arg1 scopeType:(long long)arg2 store:(id)arg3 error:(id*)arg4 ;
-(BOOL)shouldDisableScopeWhenFeatureIsDisabled:(id)arg1 ;
@end

