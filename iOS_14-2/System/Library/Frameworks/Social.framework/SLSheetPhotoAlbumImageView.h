/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/Social-Structs.h>
#import <Social/SLSheetImagePreviewView.h>

@class CALayer, NSMutableArray, UILabel;

@interface SLSheetPhotoAlbumImageView : SLSheetImagePreviewView {

	CALayer* _frameLayer;
	CALayer* _glossLayer;
	NSMutableArray* _frameViews;
	long long _imageQuantity;
	long long _numPreviewImagesAdded;
	UILabel* _imageCountLabel;
	BOOL _allAttachmentsAreImages;

}
+(unsigned long long)displayedFrameMaximum;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)alignmentRectInsets;
-(id)_itemCountString;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setItemCountString:(id)arg1 ;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(void)addPreviewImage:(id)arg1 ;
-(BOOL)_shouldDisplayImageCountLabel;
-(id)initWithPrincipalAttachments:(id)arg1 ;
@end

