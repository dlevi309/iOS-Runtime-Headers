/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
*/

#import <AssetExplorer/AEAssetPackage.h>

@interface AEMutableAssetPackage : AEAssetPackage
-(id)initWithAssetIdentifier:(id)arg1 ;
-(void)storeURL:(id)arg1 forType:(id)arg2 ;
-(void)removeURLForType:(id)arg1 ;
-(void)setSidecarObject:(id)arg1 forKey:(id)arg2 ;
-(void)addSidecarEntriesFromDictionary:(id)arg1 ;
-(void)removeSidecarObjectForKey:(id)arg1 ;
-(void)suppressURLForType:(id)arg1 ;
-(void)expressURLForType:(id)arg1 ;
-(id)_copyMetadataFromDisplayAsset:(id)arg1 ;
-(void)storeMetadataFromReviewAsset:(id)arg1 ;
-(void)storeMetadataFromPHAsset:(id)arg1 imageURL:(id)arg2 adjustmentURL:(id)arg3 ;
-(void)endSuppressingLivePhoto;
-(void)beginSupressingLivePhoto;
-(void)setMediaOrigin:(long long)arg1 ;
@end

