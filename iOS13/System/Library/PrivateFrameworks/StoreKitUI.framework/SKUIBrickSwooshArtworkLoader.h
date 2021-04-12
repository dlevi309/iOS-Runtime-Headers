/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUISwooshArtworkLoader.h>

@class SKUIBrickSwooshViewController;

@interface SKUIBrickSwooshArtworkLoader : SKUISwooshArtworkLoader {

	long long _artworkSize;

}

@property (nonatomic,readonly) SKUIBrickSwooshViewController * swooshViewController; 
-(id)initWithArtworkLoader:(id)arg1 swoosh:(id)arg2 ;
-(BOOL)loadImageForBrick:(id)arg1 reason:(long long)arg2 ;
-(void)setImage:(id)arg1 forRequest:(id)arg2 ;
-(id)cachedImageForBrick:(id)arg1 ;
-(void)loadImagesForNextPageWithReason:(long long)arg1 ;
@end

