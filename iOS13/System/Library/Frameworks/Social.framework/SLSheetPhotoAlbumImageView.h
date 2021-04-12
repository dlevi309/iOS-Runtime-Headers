/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setPreviewImage:(id)arg1 forAttachment:(id)arg2 ;
-(id)_itemCountString;
-(void)addPreviewImage:(id)arg1 ;
-(BOOL)_shouldDisplayImageCountLabel;
-(id)initWithPrincipalAttachments:(id)arg1 ;
-(void)setItemCountString:(id)arg1 ;
@end

