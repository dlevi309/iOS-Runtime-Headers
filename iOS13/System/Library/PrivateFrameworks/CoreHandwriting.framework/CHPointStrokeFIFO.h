/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CHPointFIFO.h>

@class CHDrawing;

@interface CHPointStrokeFIFO : CHPointFIFO {

	CHDrawing* _strokes;
	CHDrawing* _drawing;

}

@property (nonatomic,retain) CHDrawing * strokes;              //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,retain) CHDrawing * drawing;              //@synthesize drawing=_drawing - In the implementation block
-(void)dealloc;
-(void)clear;
-(void)flush;
-(void)addPoint:;
-(id)initWithFIFO:(id)arg1 ;
-(void)setStrokes:(CHDrawing *)arg1 ;
-(CHDrawing *)strokes;
-(CHDrawing *)drawing;
-(void)setDrawing:(CHDrawing *)arg1 ;
@end

