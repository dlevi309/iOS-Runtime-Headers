/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <EmojiKit/EMKLayoutManager.h>

@protocol CKTextEntryLayoutManagerMentionsDelegate;
@class NSMutableAttributedString, UIColor, NSMutableDictionary, NSTimer;

@interface CKTextEntryLayoutManager : EMKLayoutManager {

	id<CKTextEntryLayoutManagerMentionsDelegate> _mentionsDelegate;
	NSMutableAttributedString* _mentionAttributes;
	UIColor* _currentMentionColor;
	double _currentMentionScale;
	UIColor* _currentMentionShadowColor;
	NSMutableDictionary* _animationsByIdentifier;
	NSTimer* _mentionTimer;
	CGSize _currentMentionOffset;

}

@property (nonatomic,retain) NSMutableAttributedString * mentionAttributes;                                     //@synthesize mentionAttributes=_mentionAttributes - In the implementation block
@property (nonatomic,retain) UIColor * currentMentionColor;                                                     //@synthesize currentMentionColor=_currentMentionColor - In the implementation block
@property (assign,nonatomic) double currentMentionScale;                                                        //@synthesize currentMentionScale=_currentMentionScale - In the implementation block
@property (assign,nonatomic) CGSize currentMentionOffset;                                                       //@synthesize currentMentionOffset=_currentMentionOffset - In the implementation block
@property (nonatomic,retain) UIColor * currentMentionShadowColor;                                               //@synthesize currentMentionShadowColor=_currentMentionShadowColor - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * animationsByIdentifier;                                      //@synthesize animationsByIdentifier=_animationsByIdentifier - In the implementation block
@property (nonatomic,retain) NSTimer * mentionTimer;                                                            //@synthesize mentionTimer=_mentionTimer - In the implementation block
@property (assign,nonatomic,__weak) id<CKTextEntryLayoutManagerMentionsDelegate> mentionsDelegate;              //@synthesize mentionsDelegate=_mentionsDelegate - In the implementation block
-(id)init;
-(NSTimer *)mentionTimer;
-(NSMutableAttributedString *)mentionAttributes;
-(NSMutableDictionary *)animationsByIdentifier;
-(void)startTimerIfNeeded;
-(void)updateMentionDisplay;
-(void)setMentionTimer:(NSTimer *)arg1 ;
-(BOOL)isAnyMentionAnimationActive;
-(id<CKTextEntryLayoutManagerMentionsDelegate>)mentionsDelegate;
-(void)updateDisplayForMentionGlyphRangeRemovingAttribute:(BOOL)arg1 ;
-(void)stopTimerRemovingAttribute:(BOOL)arg1 ;
-(void)setCurrentMentionColor:(UIColor *)arg1 ;
-(void)drawAttributedMentionGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)setCurrentMentionScale:(double)arg1 ;
-(void)setCurrentMentionOffset:(CGSize)arg1 ;
-(void)setCurrentMentionShadowColor:(UIColor *)arg1 ;
-(UIColor *)currentMentionShadowColor;
-(double)currentMentionScale;
-(CGSize)currentMentionOffset;
-(UIColor *)currentMentionColor;
-(void)setMentionAttributes:(NSMutableAttributedString *)arg1 ;
-(void)setAnimationsByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)showCGGlyphs:(const unsigned short*)arg1 positions:(const CGPoint*)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(CGAffineTransform)arg5 attributes:(id)arg6 inContext:(CGContextRef)arg7 ;
-(void)updateMentionAttributes:(id)arg1 ;
-(void)drawGlyphsForGlyphRange:(NSRange)arg1 atPoint:(CGPoint)arg2 ;
-(void)setMentionsDelegate:(id<CKTextEntryLayoutManagerMentionsDelegate>)arg1 ;
@end

