/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class UIImageView;

@interface CKSharedOtherTypesCollectionViewCell : CKSharedContentsCollectionViewCell {

	UIImageView* _thumbnailImageView;

}

@property (nonatomic,retain) UIImageView * thumbnailImageView;              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
+(id)reuseIdentifier;
-(void)layoutSubviews;
-(void)configureWithAttachmentItem:(id)arg1 ;
-(UIImageView *)thumbnailImageView;
-(void)configureWithThumbnail:(id)arg1 fileURL:(id)arg2 ;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
@end

