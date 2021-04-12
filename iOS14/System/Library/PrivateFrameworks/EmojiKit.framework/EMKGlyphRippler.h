/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
*/


#import <EmojiKit/EmojiKit-Structs.h>
@class NSArray;

@interface EMKGlyphRippler : NSObject {

	NSArray* _colors;
	NSArray* _darkModeColors;
	NSArray* _shadowColors;
	NSArray* _darkModeShadowColors;
	NSArray* _scales;
	NSArray* _offsets;
	double _startTime;
	unsigned long long _preFrames;
	unsigned long long _animateFrames;
	unsigned long long _postFrames;
	unsigned long long _delayFrames;
	BOOL _reduceMotion;
	BOOL _darkMode;

}
-(id)init;
-(void)start;
-(void)generateValues;
-(unsigned long long)currentIndexForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 isFinished:(BOOL*)arg4 ;
-(unsigned long long)currentTimeIndex;
-(id)currentColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(id)currentShadowColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(BOOL)finishedForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(double)currentScaleForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(CGSize)currentOffsetForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(void)startWithDarkMode:(BOOL)arg1 ;
-(void)setPreFrames:(unsigned long long)arg1 ;
-(void)setPostFrames:(unsigned long long)arg1 ;
-(void)setDelayFrames:(unsigned long long)arg1 ;
@end

