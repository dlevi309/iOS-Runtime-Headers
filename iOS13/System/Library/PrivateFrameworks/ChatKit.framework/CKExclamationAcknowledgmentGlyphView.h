/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

@interface CKExclamationAcknowledgmentGlyphView : CKAcknowledgmentGlyphView {

	CKAcknowledgmentGlyphImageView* _leftExclamationGlyph;
	CKAcknowledgmentGlyphImageView* _rightExclamationGlyph;

}

@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * leftExclamationGlyph;               //@synthesize leftExclamationGlyph=_leftExclamationGlyph - In the implementation block
@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * rightExclamationGlyph;              //@synthesize rightExclamationGlyph=_rightExclamationGlyph - In the implementation block
-(void)layoutSubviews;
-(double)animationDuration;
-(void)setGlyphColor:(id)arg1 ;
-(CGPoint)glyphOffset;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(long long)acknowledgmentType;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
-(void)setLeftExclamationGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)setRightExclamationGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(CKAcknowledgmentGlyphImageView *)leftExclamationGlyph;
-(CKAcknowledgmentGlyphImageView *)rightExclamationGlyph;
@end

