/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIDeferredActivityItemProvider.h>

@class SKUIResourceLoader;

@interface SKUIURLActivityItemProvider : SKUIDeferredActivityItemProvider {

	SKUIResourceLoader* _resourceLoader;

}
+(id)placeholderItem;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2 ;
-(id)item;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)initWithProductPageItem:(id)arg1 clientContext:(id)arg2 ;
-(id)initWithProductPageItemProvider:(/*^block*/id)arg1 clientContext:(id)arg2 ;
-(id)linkPresentationImageFor:(id)arg1 ;
@end

