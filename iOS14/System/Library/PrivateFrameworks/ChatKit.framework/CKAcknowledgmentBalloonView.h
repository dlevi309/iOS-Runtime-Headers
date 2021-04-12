/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGlyphView:(CKAcknowledgmentGlyphView *)arg1 ;
-(void)setColoredPart:(long long)arg1 ;
-(void)setStackCount:(unsigned long long)arg1 ;
-(CKAcknowledgmentGlyphView *)glyphView;
-(void)configureForAggregateAcknowledgmentChatItem:(id)arg1 ;
-(unsigned long long)stackCount;
-(void)prepareForReuse;
-(long long)coloredPart;
@end

