/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSArray;

@interface CKMentionRippler : NSObject {

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
-(unsigned long long)finishedTimeIndex;
-(id)currentColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(id)currentShadowColorForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(BOOL)finishedForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(double)currentScaleForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
-(CGSize)currentOffsetForGlyphIndex:(unsigned long long)arg1 numberOfGlyphs:(unsigned long long)arg2 timeIndex:(unsigned long long)arg3 ;
@end

