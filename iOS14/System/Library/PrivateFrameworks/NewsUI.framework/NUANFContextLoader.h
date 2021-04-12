/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/SXResourceDataSource.h>

@protocol SXHost, NUArticleResourceURLTranslator, FCHeadlineProviding;
@class SXContext, NUANFAssetLoader, FCFlintManifest, FCFlintResourceManager, FCAsyncOnceOperation, NSOperationQueue, NSString;

@interface NUANFContextLoader : NSObject <SXResourceDataSource> {

	BOOL _hasLoaded;
	SXContext* _context;
	NUANFAssetLoader* _assetLoader;
	FCFlintManifest* _flintManifest;
	FCFlintResourceManager* _flintResourceManager;
	id<SXHost> _host;
	id<NUArticleResourceURLTranslator> _resourceURLTranslator;
	FCAsyncOnceOperation* _asyncOnceOperation;
	NSOperationQueue* _imageDecodingQueue;
	id<FCHeadlineProviding> _headline;

}

@property (nonatomic,readonly) FCFlintManifest * flintManifest;                                       //@synthesize flintManifest=_flintManifest - In the implementation block
@property (nonatomic,readonly) FCFlintResourceManager * flintResourceManager;                         //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,readonly) id<SXHost> host;                                                       //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) id<NUArticleResourceURLTranslator> resourceURLTranslator;              //@synthesize resourceURLTranslator=_resourceURLTranslator - In the implementation block
@property (nonatomic,retain) SXContext * context;                                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NUANFAssetLoader * assetLoader;                                          //@synthesize assetLoader=_assetLoader - In the implementation block
@property (nonatomic,retain) FCAsyncOnceOperation * asyncOnceOperation;                               //@synthesize asyncOnceOperation=_asyncOnceOperation - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * imageDecodingQueue;                                 //@synthesize imageDecodingQueue=_imageDecodingQueue - In the implementation block
@property (nonatomic,readonly) id<FCHeadlineProviding> headline;                                      //@synthesize headline=_headline - In the implementation block
@property (nonatomic,readonly) BOOL hasLoaded;                                                        //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXHost>)host;
-(id<FCHeadlineProviding>)headline;
-(FCFlintResourceManager *)flintResourceManager;
-(SXContext *)context;
-(FCFlintManifest *)flintManifest;
-(void)setContext:(SXContext *)arg1 ;
-(BOOL)hasLoaded;
-(/*^block*/id)loadImagesForImageRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)translateURL:(id)arg1 ;
-(void)fileURLForURL:(id)arg1 onCompletion:(/*^block*/id)arg2 onError:(/*^block*/id)arg3 ;
-(NUANFAssetLoader *)assetLoader;
-(void)setAssetLoader:(NUANFAssetLoader *)arg1 ;
-(id)asyncLoadContextOnceWithCompletion:(/*^block*/id)arg1 ;
-(FCAsyncOnceOperation *)asyncOnceOperation;
-(NSOperationQueue *)imageDecodingQueue;
-(id<NUArticleResourceURLTranslator>)resourceURLTranslator;
-(id)initWithFlintManifest:(id)arg1 flintResourceManager:(id)arg2 host:(id)arg3 resourceURLTranslator:(id)arg4 headline:(id)arg5 ;
-(id)loadContextWithCompletion:(/*^block*/id)arg1 ;
-(void)setAsyncOnceOperation:(FCAsyncOnceOperation *)arg1 ;
@end

