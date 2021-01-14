/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUIArtworkRequestDelegate.h>

@class NSMapTable, SKUIImageDataConsumer, SKUIResourceLoader, NSHashTable, UIImage, NSString;

@interface SKUICategoryArtworkLoader : NSObject <SKUIArtworkRequestDelegate> {

	NSMapTable* _artworkRequestIDs;
	SKUIImageDataConsumer* _imageDataConsumer;
	SKUIResourceLoader* _loader;
	NSHashTable* _observers;
	UIImage* _placeholderImage;

}

@property (nonatomic,readonly) SKUIResourceLoader * artworkLoader;                   //@synthesize loader=_loader - In the implementation block
@property (nonatomic,retain) SKUIImageDataConsumer * imageDataConsumer;              //@synthesize imageDataConsumer=_imageDataConsumer - In the implementation block
@property (nonatomic,readonly) UIImage * placeholderImage; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)imageSize;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(UIImage *)placeholderImage;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithArtworkLoader:(id)arg1 ;
-(SKUIResourceLoader *)artworkLoader;
-(SKUIImageDataConsumer *)imageDataConsumer;
-(void)setImageDataConsumer:(SKUIImageDataConsumer *)arg1 ;
-(id)cachedImageForCategory:(id)arg1 ;
-(void)loadImageForCategory:(id)arg1 reason:(long long)arg2 ;
@end

