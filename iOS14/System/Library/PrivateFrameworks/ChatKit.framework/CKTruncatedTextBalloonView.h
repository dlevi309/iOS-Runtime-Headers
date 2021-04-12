/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKHyperlinkBalloonView.h>
#import <libobjc.A.dylib/NSLayoutManagerDelegate.h>

@class UIImageView, NSString;

@interface CKTruncatedTextBalloonView : CKHyperlinkBalloonView <NSLayoutManagerDelegate> {

	BOOL _avoidTextLineBreaks;
	BOOL _wantsChevron;
	UIImageView* _chevron;

}

@property (nonatomic,retain) UIImageView * chevron;                 //@synthesize chevron=_chevron - In the implementation block
@property (assign,nonatomic) BOOL avoidTextLineBreaks;              //@synthesize avoidTextLineBreaks=_avoidTextLineBreaks - In the implementation block
@property (assign,nonatomic) BOOL wantsChevron;                     //@synthesize wantsChevron=_wantsChevron - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)prepareForDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)chevron;
-(BOOL)avoidTextLineBreaks;
-(void)setWantsChevron:(BOOL)arg1 ;
-(void)setAvoidTextLineBreaks:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)wantsChevron;
-(void)configureForMessagePart:(id)arg1 ;
-(void)setChevron:(UIImageView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 textAlignmentInsets:(UIEdgeInsets*)arg2 ;
@end

