/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(CGSize)imageSize;
-(UIImage *)placeholderImage;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)initWithArtworkLoader:(id)arg1 ;
-(SKUIResourceLoader *)artworkLoader;
-(SKUIImageDataConsumer *)imageDataConsumer;
-(void)setImageDataConsumer:(SKUIImageDataConsumer *)arg1 ;
-(id)cachedImageForCategory:(id)arg1 ;
-(void)loadImageForCategory:(id)arg1 reason:(long long)arg2 ;
@end

