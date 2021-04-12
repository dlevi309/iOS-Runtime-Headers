/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKTextBalloonView.h>

@interface CKTextReplyPreviewBalloonView : CKTextBalloonView {

	BOOL _isFromMe;
	BOOL _shouldUseFilledBalloonStyle;

}

@property (assign,nonatomic) BOOL shouldUseFilledBalloonStyle;              //@synthesize shouldUseFilledBalloonStyle=_shouldUseFilledBalloonStyle - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                 //@synthesize isFromMe=_isFromMe - In the implementation block
-(void)clearFilters;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)hasBackground;
-(void)prepareForReuse;
-(void)addFilter:(id)arg1 ;
-(void)setIsFromMe:(BOOL)arg1 ;
-(id)description;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 isSingleLine:(BOOL*)arg3 ;
-(void)layoutSubviews;
-(UIEdgeInsets)targetTextContainerInsets;
-(BOOL)shouldUseFilledBalloonStyle;
-(void)setShouldUseFilledBalloonStyle:(BOOL)arg1 ;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(BOOL)isFromMe;
-(void)configureForMessagePart:(id)arg1 ;
@end

