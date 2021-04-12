/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class NSString, PHAsset, PHAssetCollection, NSIndexPath;

@interface _PUPhotosGridProgressInfo : NSObject {

	NSString* _identifier;
	PHAsset* _asset;
	PHAssetCollection* _collection;
	NSIndexPath* _cachedIndexPath;
	double _progress;

}

@property (nonatomic,retain) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) PHAsset * asset;                             //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) PHAssetCollection * collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,retain) NSIndexPath * cachedIndexPath;               //@synthesize cachedIndexPath=_cachedIndexPath - In the implementation block
@property (assign,nonatomic) double progress;                             //@synthesize progress=_progress - In the implementation block
-(void)setAsset:(PHAsset *)arg1 ;
-(PHAssetCollection *)collection;
-(double)progress;
-(void)setCollection:(PHAssetCollection *)arg1 ;
-(PHAsset *)asset;
-(void)setProgress:(double)arg1 ;
-(NSIndexPath *)cachedIndexPath;
-(void)setCachedIndexPath:(NSIndexPath *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
@end

