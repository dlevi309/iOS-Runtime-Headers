/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
*/


#import <EmojiKit/EmojiKit-Structs.h>
@class NSArray;

@interface EMKGlyphRippler : NSObject {

	NSArray* _colors;
	NSArray* _shadowColors;
	NSArray* _scales;
	NSArray* _offsets;
	double _startTime;
	unsigned long long _preFrames;
	unsigned long long _animateFrames;
	unsigned long long _postFrames;
	unsigned long long _delayFrames;
	BOOL _reduceMotion;

}
-(id)init;
-(void)start;
-(void)generateValues;
-(unsigned long long)currentIndexForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 isFinished:(BOOL*)arg4 ;
-(unsigned long long)currentTimeIndex;
-(id)currentColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(id)currentShadowColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(double)currentScaleForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(CGSize)currentOffsetForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(BOOL)finishedForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(void)setPreFrames:(unsigned long long)arg1 ;
-(void)setPostFrames:(unsigned long long)arg1 ;
-(void)setDelayFrames:(unsigned long long)arg1 ;
@end

