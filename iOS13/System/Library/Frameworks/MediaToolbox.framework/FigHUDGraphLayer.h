/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
*/

#import <MediaToolbox/MediaToolbox-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSMutableArray;

@interface FigHUDGraphLayer : CALayer {

	float* _Values;
	NSMutableArray* _valueLabels;
	float* _Mins;
	float* _Maxes;
	int* _StartIndex;
	int* _NumValues;
	int _NumGraphs;
	CGPoint* _Lines;
	int _MaxLength;
	CTFontRef _Font;
	CFDictionaryRef _TextAttributes;

}
-(id)init;
-(void)dealloc;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)updateValue:(int)arg1 value:(float)arg2 label:(id)arg3 ;
-(void)setUpGraphs:(int)arg1 ;
-(void)setUpGraph:(int)arg1 min:(float)arg2 max:(float)arg3 numValues:(int)arg4 ;
-(void)updateValue:(int)arg1 value:(float)arg2 ;
@end

