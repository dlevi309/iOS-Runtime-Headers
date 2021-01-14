/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)prepareForDisplay;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)configureForComposition:(id)arg1 ;
-(id)overlayImage;
-(UIView*<CKAttachmentView>)attachmentView;
-(void)setAttachmentView:(UIView*<CKAttachmentView>)arg1 ;
-(void)transferUpdated:(id)arg1 ;
-(void)richIconDidChange:(id)arg1 ;
-(void)prepareForReuse;
-(id)description;
-(void)layoutSubviews;
-(void)configureForMessagePart:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(void)dealloc;
@end

