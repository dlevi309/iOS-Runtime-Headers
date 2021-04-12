/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/MBClipsLoader.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class PHAssetCollection, NSMutableDictionary, NSSet, PHFetchResult, NSRecursiveLock, NSString;

@interface MBLibraryClipsLoader : MBClipsLoader <PHPhotoLibraryChangeObserver> {

	PHAssetCollection* _assetCollection;
	NSMutableDictionary* _identifierURLsToClipsMap;
	NSSet* _insertedAssetURLs;
	NSSet* _assetURLs;
	PHFetchResult* _fetchResult;
	NSRecursiveLock* _updateLock;

}

@property (retain) NSMutableDictionary * identifierURLsToClipsMap;              //@synthesize identifierURLsToClipsMap=_identifierURLsToClipsMap - In the implementation block
@property (retain) NSSet * insertedAssetURLs;                                   //@synthesize insertedAssetURLs=_insertedAssetURLs - In the implementation block
@property (retain) NSSet * assetURLs;                                           //@synthesize assetURLs=_assetURLs - In the implementation block
@property (nonatomic,retain) PHAssetCollection * assetCollection;               //@synthesize assetCollection=_assetCollection - In the implementation block
@property (nonatomic,retain) PHFetchResult * fetchResult;                       //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * updateLock;                      //@synthesize updateLock=_updateLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)load;
-(PHFetchResult *)fetchResult;
-(id)clips;
-(void)photoLibraryDidChange:(id)arg1 ;
-(void)setAssetCollection:(PHAssetCollection *)arg1 ;
-(NSRecursiveLock *)updateLock;
-(PHAssetCollection *)assetCollection;
-(void)setFetchResult:(PHFetchResult *)arg1 ;
-(void)dealloc;
-(NSSet *)assetURLs;
-(void)setIdentifierURLsToClipsMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)identifierURLsToClipsMap;
-(void)setAssetURLs:(NSSet *)arg1 ;
-(long long)countForAllClips;
-(id)fetchAssets;
-(id)initWithAssetCollection:(id)arg1 showOnlyFavorites:(BOOL)arg2 ;
-(void)addClipWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setInsertedAssetURLs:(NSSet *)arg1 ;
-(id)fetchAssetURLs;
-(NSSet *)insertedAssetURLs;
-(void)loadClipsFromURLs:(id)arg1 ;
-(void)setUpdateLock:(NSRecursiveLock *)arg1 ;
@end

