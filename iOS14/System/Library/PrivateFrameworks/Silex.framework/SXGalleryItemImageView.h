/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXImageView.h>

@class SXGalleryItem;

@interface SXGalleryItemImageView : SXImageView {

	SXGalleryItem* _galleryItem;

}

@property (nonatomic,readonly) SXGalleryItem * galleryItem;              //@synthesize galleryItem=_galleryItem - In the implementation block
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(SXGalleryItem *)galleryItem;
-(id)initWithGalleryItem:(id)arg1 imageResource:(id)arg2 resourceDataSource:(id)arg3 reachabilityProvider:(id)arg4 ;
@end

