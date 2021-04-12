/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

@interface CKSimpleAcknowledgementGlyphView : CKAcknowledgmentGlyphView {

	CKAcknowledgmentGlyphImageView* _glyph;

}

@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * glyph;              //@synthesize glyph=_glyph - In the implementation block
-(CKAcknowledgmentGlyphImageView *)glyph;
-(void)layoutSubviews;
-(double)animationDuration;
-(void)setGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)setGlyphColor:(id)arg1 ;
-(CGPoint)glyphOffset;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
-(id)glyphImageForType:(long long)arg1 color:(char)arg2 ;
@end

