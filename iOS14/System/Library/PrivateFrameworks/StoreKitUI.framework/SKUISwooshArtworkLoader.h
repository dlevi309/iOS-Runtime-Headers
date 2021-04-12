/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class SKUIResourceLoader, NSMapTable, SKUIImageDataConsumer, NSMutableIndexSet, UIImage, SKUISwooshViewController, NSString;

@interface SKUISwooshArtworkLoader : NSObject <SKUIArtworkRequestDelegate> {

	SKUIResourceLoader* _artworkLoader;
	NSMapTable* _artworkRequestIDs;
	SKUIImageDataConsumer* _imageDataConsumer;
	NSMutableIndexSet* _outstandingRequestIDs;
	UIImage* _placeholderImage;
	SKUISwooshViewController* _swooshViewController;

}

@property (nonatomic,readonly) SKUIResourceLoader * artworkLoader;                           //@synthesize artworkLoader=_artworkLoader - In the implementation block
@property (nonatomic,readonly) SKUISwooshViewController * swooshViewController;              //@synthesize swooshViewController=_swooshViewController - In the implementation block
@property (nonatomic,retain) SKUIImageDataConsumer * imageDataConsumer;                      //@synthesize imageDataConsumer=_imageDataConsumer - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(UIImage *)placeholderImage;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(SKUIResourceLoader *)artworkLoader;
-(SKUIImageDataConsumer *)imageDataConsumer;
-(void)setImageDataConsumer:(SKUIImageDataConsumer *)arg1 ;
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(id)cachedImageForObject:(id)arg1 ;
-(BOOL)loadImageForObject:(id)arg1 URL:(id)arg2 reason:(long long)arg3 ;
-(SKUISwooshViewController *)swooshViewController;
-(unsigned long long)artworkRequestIdentifierForObject:(id)arg1 ;
-(void)loadImagesForNextPageWithReason:(long long)arg1 ;
-(void)deprioritizePendingImageLoads;
-(void)setPlaceholderColorWithColorScheme:(id)arg1 ;
-(BOOL)loadImageForObject:(id)arg1 artworkRequest:(id)arg2 reason:(long long)arg3 ;
-(void)cancelImageLoading;
@end

