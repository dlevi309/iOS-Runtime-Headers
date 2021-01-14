/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)animationDuration;
-(void)setGlyphColor:(id)arg1 ;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(CGPoint)glyphOffset;
-(long long)acknowledgmentType;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
-(void)setLeftExclamationGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)setRightExclamationGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(CKAcknowledgmentGlyphImageView *)leftExclamationGlyph;
-(CKAcknowledgmentGlyphImageView *)rightExclamationGlyph;
-(void)layoutSubviews;
@end

