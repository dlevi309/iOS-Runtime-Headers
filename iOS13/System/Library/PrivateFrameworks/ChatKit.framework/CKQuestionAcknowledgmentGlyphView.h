/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

@interface CKQuestionAcknowledgmentGlyphView : CKAcknowledgmentGlyphView {

	CKAcknowledgmentGlyphImageView* _glyph;
	CKAcknowledgmentGlyphImageView* _dot;

}

@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * glyph;              //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * dot;                //@synthesize dot=_dot - In the implementation block
-(CKAcknowledgmentGlyphImageView *)glyph;
-(void)layoutSubviews;
-(double)animationDuration;
-(void)setGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)setGlyphColor:(id)arg1 ;
-(CGPoint)glyphOffset;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(long long)acknowledgmentType;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
-(void)setDot:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(CKAcknowledgmentGlyphImageView *)dot;
@end

