/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/TVImageLoader.h>

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface VUIImageLoader : NSObject <TVImageLoader> {

	NSMutableDictionary* _imageLoadContextsByImageIdentifier;
	NSOperationQueue* _imageLoadOperationQueue;

}

@property (nonatomic,retain) NSMutableDictionary * imageLoadContextsByImageIdentifier;              //@synthesize imageLoadContextsByImageIdentifier=_imageLoadContextsByImageIdentifier - In the implementation block
@property (nonatomic,retain) NSOperationQueue * imageLoadOperationQueue;                            //@synthesize imageLoadOperationQueue=_imageLoadOperationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_scaledImageIdentifierWithImageIdentifier:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)init;
-(void)dealloc;
-(id)imageKeyForObject:(id)arg1 ;
-(id)loadImageForObject:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cancelLoad:(id)arg1 ;
-(void)_cancelAllImageLoads;
-(id)_imageLoaderIdentifier;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)_imageIdentifierWithImageLoadParams:(id)arg1 ;
-(NSMutableDictionary *)imageLoadContextsByImageIdentifier;
-(NSOperationQueue *)imageLoadOperationQueue;
-(void)setImageLoadContextsByImageIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setImageLoadOperationQueue:(NSOperationQueue *)arg1 ;
@end

