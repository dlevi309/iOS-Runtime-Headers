/*
* Generated on Monday, March 1, 2021 at 2:31:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKBalloonView.h>

@class CKAcknowledgmentGlyphView;

@interface CKAcknowledgmentBalloonView : CKBalloonView {

	unsigned long long _stackCount;
	long long _coloredPart;
	CKAcknowledgmentGlyphView* _glyphView;

}

@property (assign,nonatomic) unsigned long long stackCount;                      //@synthesize stackCount=_stackCount - In the implementation block
@property (assign,nonatomic) long long coloredPart;                              //@synthesize coloredPart=_coloredPart - In the implementation block
@property (nonatomic,retain) CKAcknowledgmentGlyphView * glyphView;              //@synthesize glyphView=_glyphView - In the implementation block
-(void)prepareForReuse;
-(CKAcknowledgmentGlyphView *)glyphView;
-(void)setGlyphView:(CKAcknowledgmentGlyphView *)arg1 ;
-(unsigned long long)stackCount;
-(long long)coloredPart;
-(void)setColoredPart:(long long)arg1 ;
-(void)setStackCount:(unsigned long long)arg1 ;
-(void)configureForAggregateAcknowledgmentChatItem:(id)arg1 ;
@end

