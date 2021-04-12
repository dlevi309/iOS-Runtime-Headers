/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@protocol MPArtworkDataSource <NSObject>
@optional
-(id)existingArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3;
-(void)loadArtworkEffectResultForEffectType:(long long)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5;
-(BOOL)hasExistingRepresentationOnDiskForArtworkCatalog:(id)arg1;
-(void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2;

@required
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
-(id)existingRepresentationForArtworkCatalog:(id)arg1;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end

