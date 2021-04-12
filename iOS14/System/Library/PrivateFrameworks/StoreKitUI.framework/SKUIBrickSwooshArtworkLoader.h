/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIBrickSwooshViewController;

@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader {

	long long _artworkSize;

}

@property (nonatomic,readonly) SKUIBrickSwooshViewController * swooshViewController; 
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(BOOL)loadImageForBrick:(id)arg1 reason:(long long)arg2 ;
-(id)cachedImageForBrick:(id)arg1 ;
-(void)loadImagesForNextPageWithReason:(long long)arg1 ;
@end

