/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <Foundation/NSItemProvider.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class NSURL, SKUIResourceLoader, NSProgress, NSData, NSMutableArray, NSString;

@interface SKUIArtworkItemProvider : NSItemProvider <SKUIArtworkRequestDelegate> {

	NSURL* _url;
	SKUIResourceLoader* _resourceLoader;
	NSProgress* _progress;
	NSData* _imageData;
	NSMutableArray* _completionHandlers;

}

@property (nonatomic,retain) NSURL * url;                                      //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) SKUIResourceLoader * resourceLoader;              //@synthesize resourceLoader=_resourceLoader - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSData * imageData;                               //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,retain) NSMutableArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loadDataRepresentationForTypeIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSProgress *)progress;
-(void)setCompletionHandlers:(NSMutableArray *)arg1 ;
-(NSURL *)url;
-(NSData *)imageData;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSMutableArray *)completionHandlers;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setResourceLoader:(SKUIResourceLoader *)arg1 ;
-(SKUIResourceLoader *)resourceLoader;
-(void)setImageData:(NSData *)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithURL:(id)arg1 usingResourceLoader:(id)arg2 ;
@end

