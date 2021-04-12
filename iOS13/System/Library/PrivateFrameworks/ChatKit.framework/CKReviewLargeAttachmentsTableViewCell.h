/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)prepareForReuse;
-(UIImageView *)previewView;
-(void)setPreviewView:(UIImageView *)arg1 ;
-(void)setModelObject:(id)arg1 ;
-(id)leftHandSideView;
-(CKAttachmentItem *)attachmentItem;
-(void)setAttachmentItem:(CKAttachmentItem *)arg1 ;
-(void)_updateImageViewForAttachmentItem;
@end

