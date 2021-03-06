/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(PHAsset *)referenceAsset;
-(NSArray *)excludedAssetCollections;
-(BOOL)enableDiversity;
-(void)setExcludedAssetCollections:(NSArray *)arg1 ;
-(void)setReferenceAsset:(PHAsset *)arg1 ;
-(void)setEnableDiversity:(BOOL)arg1 ;
-(BOOL)isDebugInfoEnabled;
-(void)setDebugInfoEnabled:(BOOL)arg1 ;
@end

