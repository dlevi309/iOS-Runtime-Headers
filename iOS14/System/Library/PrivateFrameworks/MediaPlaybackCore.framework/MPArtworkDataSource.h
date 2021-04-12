/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPArtworkDataSource <NSObject>
@optional
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(BOOL)areRepresentationsOfKind:(long long)arg1 availableForCatalog:(id)arg2;
-(id)existingRepresentationOfKind:(long long)arg1 forArtworkCatalog:(id)arg2;
-(BOOL)hasExistingRepresentationOnDiskForArtworkCatalog:(id)arg1;
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
-(void)loadRepresentationOfKind:(long long)arg1 forArtworkCatalog:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
-(id)existingRepresentationForArtworkCatalog:(id)arg1;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end

