/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDataAccessor.h>

@class PKDirectoryCoordinator, PKRemoteAssetManager, NSArray, NSURL;

@interface PKFileDataAccessor : PKDataAccessor {

	PKDirectoryCoordinator* _coordinator;
	BOOL _remoteAssetManagerAccessed;
	PKRemoteAssetManager* _remoteAssetManager;
	NSArray* _seids;
	BOOL _ownsFileURL;
	NSURL* _fileURL;

}

@property (assign,nonatomic) BOOL ownsFileURL;               //@synthesize ownsFileURL=_ownsFileURL - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
-(id)bundle;
-(id)content;
-(id)init;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(id)dictionary;
-(id)passLocalizedStringForKey:(id)arg1 ;
-(id)archiveData;
-(void)dealloc;
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 coordinator:(id)arg3 ;
-(id)remoteAssetManagerForSEIDs:(id)arg1 ;
-(id)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 ;
-(id)manifestHash;
-(BOOL)remoteAssetsDownloadedForScreenScale:(double)arg1 seids:(id)arg2 suffix:(id)arg3 ;
-(void)downloadRemoteAssetsWithScreenScale:(double)arg1 suffix:(id)arg2 cloudStoreCoordinatorDelegate:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)revocationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)dictionaryWithCompletion:(/*^block*/id)arg1 ;
-(void)contentWithCompletion:(/*^block*/id)arg1 ;
-(void)imageSetForType:(long long)arg1 screenScale:(double)arg2 suffix:(id)arg3 displayProfile:(id)arg4 preheat:(BOOL)arg5 withCompletion:(/*^block*/id)arg6 ;
-(id)resourceValueForKey:(id)arg1 ;
-(id)remoteAssetManager;
-(id)dataForBundleResource:(id)arg1 ;
-(id)dataForBundleResources:(id)arg1 ;
-(id)serializedFileWrapper;
-(BOOL)remoteAssetsDownloadedForSEIDs:(id)arg1 ;
-(BOOL)ownsFileURL;
-(id)displayProfileOfType:(long long)arg1 ;
-(void)setOwnsFileURL:(BOOL)arg1 ;
@end

