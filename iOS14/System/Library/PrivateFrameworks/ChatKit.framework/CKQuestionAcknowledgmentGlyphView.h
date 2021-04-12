/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKAcknowledgmentGlyphImageView *)dot;
-(double)animationDuration;
-(CKAcknowledgmentGlyphImageView *)glyph;
-(void)setDot:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)setGlyphColor:(id)arg1 ;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(CGPoint)glyphOffset;
-(long long)acknowledgmentType;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
-(void)setGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)layoutSubviews;
@end

