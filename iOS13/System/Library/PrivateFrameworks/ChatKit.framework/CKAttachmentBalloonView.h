/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@protocol CKAttachmentView;
@class UIView;

@interface CKAttachmentBalloonView : CKColoredBalloonView {

	UIView*<CKAttachmentView> _attachmentView;

}

@property (nonatomic,retain) UIView*<CKAttachmentView> attachmentView;              //@synthesize attachmentView=_attachmentView - In the implementation block
-(void)dealloc;
-(id)description;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)alignmentRectInsets;
-(void)prepareForDisplay;
-(UIView*<CKAttachmentView>)attachmentView;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(id)arg1 ;
-(void)configureForComposition:(id)arg1 ;
-(void)setAttachmentView:(UIView*<CKAttachmentView>)arg1 ;
-(void)transferUpdated:(id)arg1 ;
-(void)richIconDidChange:(id)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
@end

