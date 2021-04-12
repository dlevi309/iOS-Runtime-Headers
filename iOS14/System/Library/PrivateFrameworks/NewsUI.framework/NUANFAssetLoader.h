/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class SXContext, FCFlintResourceManager, NSArray, NSMutableDictionary, FCAsyncOnceOperation;

@interface NUANFAssetLoader : NSObject {

	long long _relativePriority;
	SXContext* _context;
	FCFlintResourceManager* _flintResourceManager;
	NSArray* _resourceIDs;
	NSMutableDictionary* _fetchedResourceIDs;
	FCAsyncOnceOperation* _assetURLsOperation;
	FCAsyncOnceOperation* _assetsOperation;

}

@property (nonatomic,retain) SXContext * context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) FCFlintResourceManager * flintResourceManager;              //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,retain) NSArray * resourceIDs;                                      //@synthesize resourceIDs=_resourceIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fetchedResourceIDs;                   //@synthesize fetchedResourceIDs=_fetchedResourceIDs - In the implementation block
@property (nonatomic,retain) FCAsyncOnceOperation * assetURLsOperation;                  //@synthesize assetURLsOperation=_assetURLsOperation - In the implementation block
@property (nonatomic,readonly) FCAsyncOnceOperation * assetsOperation;                   //@synthesize assetsOperation=_assetsOperation - In the implementation block
@property (assign,nonatomic) long long relativePriority;                                 //@synthesize relativePriority=_relativePriority - In the implementation block
-(FCFlintResourceManager *)flintResourceManager;
-(SXContext *)context;
-(void)setRelativePriority:(long long)arg1 ;
-(long long)relativePriority;
-(NSArray *)resourceIDs;
-(void)setContext:(SXContext *)arg1 ;
-(id)loadAssetWithURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)loadAssetURLsWithCompletion:(/*^block*/id)arg1 ;
-(id)resourceIDForResourceURL:(id)arg1 ;
-(id)resourceForID:(id)arg1 ;
-(id)initWithContext:(id)arg1 flintResourceManager:(id)arg2 ;
-(void)setFlintResourceManager:(FCFlintResourceManager *)arg1 ;
-(id)loadAssetsWithCompletion:(/*^block*/id)arg1 ;
-(id)asyncLoadAssetURLsOnceWithCompletion:(/*^block*/id)arg1 ;
-(id)asyncLoadAssetsOnceWithCompletion:(/*^block*/id)arg1 ;
-(FCAsyncOnceOperation *)assetURLsOperation;
-(FCAsyncOnceOperation *)assetsOperation;
-(id)assetDownloadOperationForResource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)fetchedResourceIDs;
-(void)setResourceIDs:(NSArray *)arg1 ;
-(void)setFetchedResourceIDs:(NSMutableDictionary *)arg1 ;
-(void)setAssetURLsOperation:(FCAsyncOnceOperation *)arg1 ;
@end

