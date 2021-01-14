/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAbstractReviewTableViewCell.h>

@class UIImageView, CKAttachmentItem;

@interface CKReviewLargeAttachmentsTableViewCell : CKAbstractReviewTableViewCell {

	UIImageView* _previewView;
	CKAttachmentItem* _attachmentItem;

}

@property (nonatomic,retain) UIImageView * previewView;                      //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) CKAttachmentItem * attachmentItem;              //@synthesize attachmentItem=_attachmentItem - In the implementation block
+(double)requestedHeight;
+(CGSize)leftHandSideViewSize;
-(void)setModelObject:(id)arg1 ;
-(UIImageView *)previewView;
-(void)prepareForReuse;
-(id)leftHandSideView;
-(CKAttachmentItem *)attachmentItem;
-(void)setAttachmentItem:(CKAttachmentItem *)arg1 ;
-(void)_updateImageViewForAttachmentItem;
-(void)setPreviewView:(UIImageView *)arg1 ;
@end

