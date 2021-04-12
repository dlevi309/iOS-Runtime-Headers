/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol IKNetworkRequestLoader;
@class VUIImageDecorator, _VUIDecoratorRequest;

@interface VUIImageProxy : NSObject <NSCopying> {

	BOOL _cacheOnLoad;
	BOOL _allowsSubstitutionForOriginal;
	BOOL _isLoading;
	BOOL _loadSynchronouslyIfCached;
	BOOL _writeToAssetLibrary;
	id _object;
	id _imageLoader;
	VUIImageDecorator* _decorator;
	/*^block*/id _completionHandler;
	/*^block*/id _writeCompletionHandler;
	long long _imageDirection;
	id<IKNetworkRequestLoader> _requestLoader;
	long long _groupType;
	id _requestToken;
	_VUIDecoratorRequest* _decoratorRequestToken;
	id _imageDidWriteObserver;

}

@property (nonatomic,retain) id imageLoader;                                               //@synthesize imageLoader=_imageLoader - In the implementation block
@property (assign,nonatomic) long long groupType;                                          //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,retain) id requestToken;                                              //@synthesize requestToken=_requestToken - In the implementation block
@property (nonatomic,retain) _VUIDecoratorRequest * decoratorRequestToken;                 //@synthesize decoratorRequestToken=_decoratorRequestToken - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                               //@synthesize isLoading=_isLoading - In the implementation block
@property (nonatomic,retain) id imageDidWriteObserver;                                     //@synthesize imageDidWriteObserver=_imageDidWriteObserver - In the implementation block
@property (nonatomic,readonly) id object;                                                  //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) CGSize expectedSize; 
@property (assign,nonatomic) BOOL cacheOnLoad;                                             //@synthesize cacheOnLoad=_cacheOnLoad - In the implementation block
@property (assign,nonatomic) BOOL allowsSubstitutionForOriginal;                           //@synthesize allowsSubstitutionForOriginal=_allowsSubstitutionForOriginal - In the implementation block
@property (nonatomic,retain) VUIImageDecorator * decorator;                                //@synthesize decorator=_decorator - In the implementation block
@property (copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (copy) id writeCompletionHandler;                                                //@synthesize writeCompletionHandler=_writeCompletionHandler - In the implementation block
@property (assign,nonatomic) long long imageDirection;                                     //@synthesize imageDirection=_imageDirection - In the implementation block
@property (assign,nonatomic,__weak) id<IKNetworkRequestLoader> requestLoader;              //@synthesize requestLoader=_requestLoader - In the implementation block
@property (assign,nonatomic) BOOL loadSynchronouslyIfCached;                               //@synthesize loadSynchronouslyIfCached=_loadSynchronouslyIfCached - In the implementation block
@property (assign,nonatomic) BOOL writeToAssetLibrary;                                     //@synthesize writeToAssetLibrary=_writeToAssetLibrary - In the implementation block
+(id)_imageDecoratorQueue;
-(void)load;
-(void)setGroupType:(long long)arg1 ;
-(id)requestToken;
-(void)setRequestToken:(id)arg1 ;
-(BOOL)isLoading;
-(void)setCompletionHandler:(id)arg1 ;
-(id)object;
-(id)completionHandler;
-(id)imageLoader;
-(void)setImageDirection:(long long)arg1 ;
-(long long)imageDirection;
-(id)description;
-(VUIImageDecorator *)decorator;
-(long long)groupType;
-(unsigned long long)hash;
-(void)cancel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setIsLoading:(BOOL)arg1 ;
-(id)initWithObject:(id)arg1 imageLoader:(id)arg2 groupType:(long long)arg3 ;
-(void)setDecorator:(VUIImageDecorator *)arg1 ;
-(id<IKNetworkRequestLoader>)requestLoader;
-(void)setRequestLoader:(id<IKNetworkRequestLoader>)arg1 ;
-(void)setLoadSynchronouslyIfCached:(BOOL)arg1 ;
-(void)setAllowsSubstitutionForOriginal:(BOOL)arg1 ;
-(void)setCacheOnLoad:(BOOL)arg1 ;
-(BOOL)isImageAvailable;
-(BOOL)loadSynchronouslyIfCached;
-(CGSize)expectedSize;
-(BOOL)cacheOnLoad;
-(BOOL)writeToAssetLibrary;
-(void)setWriteToAssetLibrary:(BOOL)arg1 ;
-(void)setDecoratorRequestToken:(_VUIDecoratorRequest *)arg1 ;
-(id)_decoratedImageAssetPath;
-(id)_imageLoaderKey;
-(id)_originalImageAssetPath;
-(void)_callCompletionHandlerWithImage:(id)arg1 error:(id)arg2 finished:(BOOL)arg3 ;
-(void)_callWriteCompletionHandlerWithPath:(id)arg1 error:(id)arg2 finished:(BOOL)arg3 ;
-(void)_completeImageLoadWithImage:(id)arg1 imagePath:(id)arg2 error:(id)arg3 assetKey:(id)arg4 expiryDate:(id)arg5 tags:(id)arg6 requestRecord:(id)arg7 ;
-(id)_originalImageAssetKey;
-(id)_decoratedImageAssetKey;
-(void)_decorateAndWriteImage:(id)arg1 imagePath:(id)arg2 scaleToSize:(CGSize)arg3 cropToFit:(BOOL)arg4 scalingResult:(unsigned long long)arg5 assetKey:(id)arg6 expiryDate:(id)arg7 tags:(id)arg8 requestRecord:(id)arg9 ;
-(id)writeCompletionHandler;
-(void)_imageDidWriteHandler:(id)arg1 ;
-(id)_assetKeyWithImageLoaderKey:(id)arg1 decoratorIdentifier:(id)arg2 ;
-(BOOL)allowsSubstitutionForOriginal;
-(id)_imageAssetPathWithAssetKey:(id)arg1 ;
-(id)_decoratorIdentifier;
-(_VUIDecoratorRequest *)decoratorRequestToken;
-(BOOL)isOfSameOriginAs:(id)arg1 ;
-(void)setImageLoader:(id)arg1 ;
-(void)setWriteCompletionHandler:(id)arg1 ;
-(id)imageDidWriteObserver;
-(void)setImageDidWriteObserver:(id)arg1 ;
@end

