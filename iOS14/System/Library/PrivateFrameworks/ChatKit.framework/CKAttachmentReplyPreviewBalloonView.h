/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKColoredBalloonView.h>

@class CKMediaObject, UILabel;

@interface CKAttachmentReplyPreviewBalloonView : CKColoredBalloonView {

	CKMediaObject* _mediaObject;
	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                     //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObject;              //@synthesize mediaObject=_mediaObject - In the implementation block
-(UILabel *)titleLabel;
-(void)prepareForDisplay;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)configureForMediaObject:(id)arg1 previewWidth:(double)arg2 orientation:(char)arg3 ;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)configureForComposition:(id)arg1 ;
-(void)prepareForReuse;
-(id)description;
-(id)attachmentTitleForMediaObject:(id)arg1 ;
-(CKMediaObject *)mediaObject;
-(void)configureForMessagePart:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
@end

