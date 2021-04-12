/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithGalleryItem:(id)arg1 imageResource:(id)arg2 resourceDataSource:(id)arg3 reachabilityProvider:(id)arg4 ;
-(SXGalleryItem *)galleryItem;
@end

