/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAcknowledgmentGlyphView.h>

@class CKAcknowledgmentGlyphImageView;

@interface CKSimpleAcknowledgementGlyphView : CKAcknowledgmentGlyphView {

	CKAcknowledgmentGlyphImageView* _glyph;

}

@property (nonatomic,retain) CKAcknowledgmentGlyphImageView * glyph;              //@synthesize glyph=_glyph - In the implementation block
-(double)animationDuration;
-(CKAcknowledgmentGlyphImageView *)glyph;
-(void)setGlyphColor:(id)arg1 ;
-(CGPoint)glyphOffset;
-(id)initWithFrame:(CGRect)arg1 color:(char)arg2 ;
-(id)glyphImageForType:(long long)arg1 color:(char)arg2 ;
-(void)setGlyph:(CKAcknowledgmentGlyphImageView *)arg1 ;
-(void)layoutSubviews;
@end

