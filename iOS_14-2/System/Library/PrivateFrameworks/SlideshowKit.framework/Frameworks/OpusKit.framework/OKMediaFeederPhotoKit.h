/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)mediaFeederWithFetchResult:(id)arg1 ;
+(BOOL)isRemote;
+(id)mediaFeederWithAssetCollection:(id)arg1 andOptions:(id)arg2 ;
+(id)supportedSettings;
+(BOOL)supportLiveUpdates;
+(id)mediaFeederWithAllAssetsWithOptions:(id)arg1 ;
-(PHFetchResult *)fetchResult;
-(id)initWithSettings:(id)arg1 ;
-(id)init;
-(id)photoLibrary;
-(PHFetchOptions *)options;
-(void)setOptions:(PHFetchOptions *)arg1 ;
-(id)initWithFetchResult:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(PHAssetCollection *)assetCollection;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(void)dealloc;
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

