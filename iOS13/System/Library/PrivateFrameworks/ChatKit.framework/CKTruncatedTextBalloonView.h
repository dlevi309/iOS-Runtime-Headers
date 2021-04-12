/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKHyperlinkBalloonView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@class UIImageView, NSString;

@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView <NSLayoutManagerDelegate> {

	BOOL _avoidTextLineBreaks;
	UIImageView* _chevron;

}

@property (nonatomic,retain) UIImageView * chevron;                 //@synthesize chevron=_chevron - In the implementation block
@property (assign,nonatomic) BOOL avoidTextLineBreaks;              //@synthesize avoidTextLineBreaks=_avoidTextLineBreaks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)setChevron:(UIImageView *)arg1 ;
-(UIImageView *)chevron;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
-(BOOL)avoidTextLineBreaks;
-(void)setAvoidTextLineBreaks:(BOOL)arg1 ;
-(void)configureForMessagePart:(id)arg1 ;
@end

