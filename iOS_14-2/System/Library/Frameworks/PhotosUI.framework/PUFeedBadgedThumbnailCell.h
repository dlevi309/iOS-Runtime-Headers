/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class PXBadgedThumbnailView;

@interface PUFeedBadgedThumbnailCell : PUFeedCell {

	PXBadgedThumbnailView* _badgedThumbnailView;

}

@property (nonatomic,readonly) PXBadgedThumbnailView * badgedThumbnailView;              //@synthesize badgedThumbnailView=_badgedThumbnailView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(PXBadgedThumbnailView *)badgedThumbnailView;
@end

