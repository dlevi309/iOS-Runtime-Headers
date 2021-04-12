/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIItemArtworkContext, SKUIVideoImageDataConsumer, UIImage, SKUILockupSwooshViewController;

@interface SKUILockupSwooshArtworkLoader : SKUISwooshArtworkLoader {

	SKUIItemArtworkContext* _context;
	SKUIVideoImageDataConsumer* _videoImageConsumer;
	UIImage* _videoPlaceholderImage;

}

@property (nonatomic,readonly) SKUILockupSwooshViewController * swooshViewController; 
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(id)placeholderImageForItem:(id)arg1 ;
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(void)loadImagesForNextPageWithReason:(long long)arg1 ;
-(BOOL)loadImageForItem:(id)arg1 reason:(long long)arg2 ;
-(BOOL)loadImageForVideo:(id)arg1 reason:(long long)arg2 ;
-(id)cachedImageForItem:(id)arg1 ;
-(id)cachedImageForVideo:(id)arg1 ;
-(id)placeholderImageForVideo:(id)arg1 ;
@end

