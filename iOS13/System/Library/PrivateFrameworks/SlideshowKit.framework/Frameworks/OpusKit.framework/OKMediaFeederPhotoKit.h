/*
* Generated on Monday, March 1, 2021 at 2:35:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKMediaFeeder.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class PHFetchResult, PHAssetCollection, PHFetchOptions, NSString, NSDictionary, NSArray;

@interface OKMediaFeederPhotoKit : OKMediaFeeder <PHPhotoLibraryChangeObserver> {

	unsigned long long _type;
	PHFetchResult* _fetchResult;
	PHAssetCollection* _assetCollection;
	PHFetchOptions* _options;
	NSString* _collectionIdentifier;
	NSDictionary* _predicate;
	NSArray* _sortDescriptors;

}

@property (retain) PHFetchResult * fetchResult;                      //@synthesize fetchResult=_fetchResult - In the implementation block
@property (retain) PHAssetCollection * assetCollection;              //@synthesize assetCollection=_assetCollection - In the implementation block
@property (retain) PHFetchOptions * options;                         //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isRemote;
+(id)mediaFeederWithAssetCollection:(id)arg1 andOptions:(id)arg2 ;
+(id)mediaFeederWithFetchResult:(id)arg1 ;
+(id)supportedSettings;
+(BOOL)supportLiveUpdates;
+(id)mediaFeederWithAllAssetsWithOptions:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(PHFetchOptions *)options;
-(void)setOptions:(PHFetchOptions *)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(PHFetchResult *)fetchResult;
-(void)photoLibraryDidChange:(id)arg1 ;
-(PHAssetCollection *)assetCollection;
-(id)initWithFetchResult:(id)arg1 ;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(id)feederSettings;
-(BOOL)canBePersisted;
-(id)reloadMediaObjectsWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)numberOfMediaObjects;
-(id)mediaObjectsAtIndexes:(id)arg1 ;
-(id)mediaObjectURLsAtIndexes:(id)arg1 ;
-(id)indexesForMediaObjects:(id)arg1 ;
-(id)initWithAssetCollection:(id)arg1 andOptions:(id)arg2 ;
-(id)initWithAllAssetsWithOptions:(id)arg1 ;
@end

