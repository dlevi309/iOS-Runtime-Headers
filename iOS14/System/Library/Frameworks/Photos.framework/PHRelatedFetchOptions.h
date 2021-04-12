/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@class NSArray, PHAsset, PHPhotoLibrary;

@interface PHRelatedFetchOptions : NSObject {

	BOOL _enableDiversity;
	BOOL _debugInfoEnabled;
	NSArray* _excludedAssetCollections;
	PHAsset* _referenceAsset;
	unsigned long long _fetchLimit;
	PHPhotoLibrary* _photoLibrary;

}

@property (assign,getter=isDebugInfoEnabled,nonatomic) BOOL debugInfoEnabled;              //@synthesize debugInfoEnabled=_debugInfoEnabled - In the implementation block
@property (nonatomic,retain) NSArray * excludedAssetCollections;                           //@synthesize excludedAssetCollections=_excludedAssetCollections - In the implementation block
@property (nonatomic,retain) PHAsset * referenceAsset;                                     //@synthesize referenceAsset=_referenceAsset - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;                                //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL enableDiversity;                                         //@synthesize enableDiversity=_enableDiversity - In the implementation block
@property (nonatomic,retain) PHPhotoLibrary * photoLibrary;                                //@synthesize photoLibrary=_photoLibrary - In the implementation block
-(unsigned long long)fetchLimit;
-(PHPhotoLibrary *)photoLibrary;
-(void)setReferenceAsset:(PHAsset *)arg1 ;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(void)setEnableDiversity:(BOOL)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(PHAsset *)referenceAsset;
-(BOOL)enableDiversity;
-(NSArray *)excludedAssetCollections;
-(void)setExcludedAssetCollections:(NSArray *)arg1 ;
-(BOOL)isDebugInfoEnabled;
-(void)setDebugInfoEnabled:(BOOL)arg1 ;
@end

