/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

@interface CKEnglishHaAcknowledgmentGlyphView : CKAcknowledgmentGlyphView {

	CKAcknowledgmentGlyphImageView* _h1;
	CKAcknowledgmentGlyphImageView* _a1;
	CKAcknowledgmentGlyphImageView* _h2;
	CKAcknowledgmentGlyphImageView* _a2;

}

@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * h1;              //@synthesize h1=_h1 - In the implementation block
@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * a1;              //@synthesize a1=_a1 - In the implementation block
@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * h2;              //@synthesize h2=_h2 - In the implementation block
@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * a2;              //@synthesize a2=_a2 - In the implementation block
-(void)layoutSubviews;
-(double)animationDuration;
-(void)setGlyphColor:(id)arg1 ;
-(CGPoint)glyphOffset;
-(void)animateWithBeginTime:(double)arg1 completionDelay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(long long)acknowledgmentType;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
-(void)setH1:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)setA1:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)setH2:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)setA2:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(CKAcknowledgmentGlyphImageView *)h1;
-(CKAcknowledgmentGlyphImageView *)a1;
-(CKAcknowledgmentGlyphImageView *)h2;
-(CKAcknowledgmentGlyphImageView *)a2;
@end

