/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDataAccessor.h>

@protocol OS_dispatch_queue;
@class NSLock, PKRemoteAssetManager, NSArray, NSObject, NSURL;

@interface PKFileDataAccessor : PKDataAccessor {

	NSLock* _remoteAssetManagerLock;
	BOOL _remoteAssetManagerAccessed;
	PKRemoteAssetManager* _remoteAssetManager;
	NSArray* _seids;
	BOOL _ownsFileURL;
	NSObject*<OS_dispatch_queue> _processingQueue;
	NSURL* _fileURL;

}

@property (assign,nonatomic) BOOL ownsFileURL;                                            //@synthesize ownsFileURL=_ownsFileURL - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                                           //@synthesize fileURL=_fileURL - In the implementation block
-(id)init;
-(void)dealloc;
-(id)dictionary;
-(id)bundle;
-(NSURL *)fileURL;
-(id)content;
-(id)archiveData;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 processingQueue:(id)arg3 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(BOOL)remoteAssetsDownloadedForScreenScale:(double)arg1 seids:(id)arg2 suffix:(id)arg3 ;
-(id)remoteAssetManagerForSEIDs:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(id)manifestHash;
-(id)serializedFileWrapper;
-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg1 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)remoteAssetManager;
-(id)displayProfileOfType:(long long)arg1 ;
-(BOOL)ownsFileURL;
-(void)setOwnsFileURL:(BOOL)arg1 ;
@end

