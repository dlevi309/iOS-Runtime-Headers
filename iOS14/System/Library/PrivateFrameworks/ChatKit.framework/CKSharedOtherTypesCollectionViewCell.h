/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKSharedContentsCollectionViewCell.h>

@class UIImageView;

@interface CKSharedOtherTypesCollectionViewCell : CKSharedContentsCollectionViewCell {

	UIImageView* _thumbnailImageView;

}

@property (nonatomic,retain) UIImageView * thumbnailImageView;              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
+(id)reuseIdentifier;
-(UIImageView *)thumbnailImageView;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)configureWithThumbnail:(id)arg1 fileURL:(id)arg2 ;
-(void)layoutSubviews;
-(void)configureWithAttachmentItem:(id)arg1 ;
@end

