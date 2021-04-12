/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <PodcastsKit/IMBaseDiskCache.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSRecursiveLock, NSMutableSet, NSMutableDictionary;

@interface IMImageDiskCache : IMBaseDiskCache {

	NSObject*<OS_dispatch_queue> _workQueue;
	double _maxImageDimensionInPixels;
	NSString* _onDiskFileType;
	double _saveCompressionQuality;
	NSRecursiveLock* _syncLock;
	NSMutableSet* _proccessingKeys;
	NSMutableDictionary* _completionHandlers;
	NSMutableDictionary* _pendingPerformWhenAvailableOnDiskBlocks;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                                     //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) double maxImageDimensionInPixels;                                           //@synthesize maxImageDimensionInPixels=_maxImageDimensionInPixels - In the implementation block
@property (nonatomic,readonly) NSString * onDiskFileType;                                                  //@synthesize onDiskFileType=_onDiskFileType - In the implementation block
@property (nonatomic,readonly) double saveCompressionQuality;                                              //@synthesize saveCompressionQuality=_saveCompressionQuality - In the implementation block
@property (nonatomic,readonly) NSRecursiveLock * syncLock;                                                 //@synthesize syncLock=_syncLock - In the implementation block
@property (nonatomic,readonly) NSMutableSet * proccessingKeys;                                             //@synthesize proccessingKeys=_proccessingKeys - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * completionHandlers;                                   //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * pendingPerformWhenAvailableOnDiskBlocks;              //@synthesize pendingPerformWhenAvailableOnDiskBlocks=_pendingPerformWhenAvailableOnDiskBlocks - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSMutableDictionary *)completionHandlers;
-(id)imageForKey:(id)arg1 ;
-(id)initWithBasePath:(id)arg1 ;
-(id)pathForKey:(id)arg1 ;
-(id)initWithBasePath:(id)arg1 maxImageDimensionInPixels:(double)arg2 ;
-(BOOL)addImage:(id)arg1 forKey:(id)arg2 ;
-(void)addImagesWithSourceUrl:(id)arg1 forKeys:(id)arg2 discardTransparency:(BOOL)arg3 enforceSquare:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(double)maxImageDimensionInPixels;
-(id)imageUrlForKey:(id)arg1 ;
-(void)addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 enforceSquare:(BOOL)arg3 maxDimensionInPixels:(double)arg4 completion:(/*^block*/id)arg5 ;
-(void)performWhenURLAvailableForImageForKey:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)copyImageFromSourceUrl:(id)arg1 to:(id)arg2 discardTransparency:(BOOL)arg3 enforceSquare:(BOOL)arg4 maxDimensionInPixels:(double)arg5 completion:(/*^block*/id)arg6 ;
-(void)addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 discardTransparency:(BOOL)arg3 enforceSquare:(BOOL)arg4 maxDimensionInPixels:(double)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_isProcessingKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_startProcessingKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_finishProcessingKey:(id)arg1 success:(BOOL)arg2 ;
-(void)_addImageWithSourceUrl:(id)arg1 forKey:(id)arg2 discardTransparency:(BOOL)arg3 enforceSquare:(BOOL)arg4 maxDimensionInPixels:(double)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)copyImageFromSourceUrl:(id)arg1 to:(id)arg2 discardTransparency:(BOOL)arg3 enforceSquare:(BOOL)arg4 maxDimensionInPixels:(double)arg5 ;
-(NSString *)onDiskFileType;
-(id)_defaultImageSavingOptions;
-(BOOL)_needsResizing:(CGImageSourceRef)arg1 maxDimensionInPixels:(double)arg2 ;
-(BOOL)_usesLessMemoryToConvertThenResizeImageSource:(CGImageSourceRef)arg1 destinationDimensionInPixels:(double)arg2 ;
-(CGImageSourceRef)_copyImageSourceByConvertingImage:(CGImageSourceRef)arg1 toFileType:(id)arg2 destinationUrl:(id)arg3 ;
-(id)_defaultImageSavingSourceOptions;
-(double)saveCompressionQuality;
-(BOOL)_addImage:(id)arg1 forKey:(id)arg2 resizeIfTooBig:(BOOL)arg3 manageProcessingState:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_startProcessingForAddingKey:(id)arg1 originalKey:(id)arg2 ;
-(id)_resizeImageForKey:(id)arg1 maxDimensionInPixels:(double)arg2 ;
-(id)_onDiskFileExtension;
-(NSMutableSet *)proccessingKeys;
-(NSMutableDictionary *)pendingPerformWhenAvailableOnDiskBlocks;
-(void)_performWithSyncLock:(/*^block*/id)arg1 ;
-(NSRecursiveLock *)syncLock;
@end

