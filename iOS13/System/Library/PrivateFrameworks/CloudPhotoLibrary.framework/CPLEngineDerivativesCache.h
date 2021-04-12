/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol OS_dispatch_queue;
@class NSURL, NSObject;

@interface CPLEngineDerivativesCache : NSObject {

	NSURL* _cacheMappingURL;
	BOOL _tryCreatingCacheFolder;
	NSObject*<OS_dispatch_queue> _queue;
	NSURL* _cacheURL;
	Class _derivativeGeneratorClass;

}

@property (nonatomic,copy,readonly) NSURL * cacheURL;                     //@synthesize cacheURL=_cacheURL - In the implementation block
@property (nonatomic,retain) Class derivativeGeneratorClass;              //@synthesize derivativeGeneratorClass=_derivativeGeneratorClass - In the implementation block
-(id)initWithCacheURL:(id)arg1 ;
-(NSURL *)cacheURL;
-(void)discardCache;
-(id)_cacheKeyForReferenceResource:(id)arg1 adjustments:(id)arg2 ;
-(id)_folderNameForReferenceResource:(id)arg1 adjustment:(id)arg2 ;
-(void)_createCacheFolderIfNecessary;
-(id)_tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2 ;
-(id)_finalFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2 ;
-(id)tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1 adjustment:(id)arg2 ;
-(void)noteGeneratedResouces:(id)arg1 haveBeenGeneratedForReferenceResource:(id)arg2 adjustment:(id)arg3 ;
-(id)cachedResourcesForReferenceResource:(id)arg1 adjustment:(id)arg2 ;
-(BOOL)_isUnsupportedFormatError:(id)arg1 ;
-(void)_updateChange:(id*)arg1 fromOldChange:(id)arg2 withResources:(id)arg3 includeThumbnail:(BOOL)arg4 ;
-(BOOL)_checkResource:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(BOOL)_checkGeneratedResources:(id)arg1 error:(id*)arg2 ;
-(void)generateDerivativesForChange:(id)arg1 derivativesFilter:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(Class)derivativeGeneratorClass;
-(void)setDerivativeGeneratorClass:(Class)arg1 ;
@end

