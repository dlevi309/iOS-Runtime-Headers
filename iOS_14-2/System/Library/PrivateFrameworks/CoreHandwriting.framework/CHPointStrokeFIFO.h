/*
* Generated on Thursday, January 14, 2021 at 2:26:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(void)flush;
-(void)addPoint:;
-(CHDrawing *)strokes;
-(CHDrawing *)drawing;
-(void)setStrokes:(CHDrawing *)arg1 ;
-(void)dealloc;
-(void)setDrawing:(CHDrawing *)arg1 ;
-(id)initWithFIFO:(id)arg1 ;
@end

