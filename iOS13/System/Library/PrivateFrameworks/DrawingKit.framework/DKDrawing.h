/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface DKDrawing : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _strokes;
	CGRect _canvasBounds;
	CGRect _strokesFrame;

}

@property (assign,nonatomic) CGRect canvasBounds;                  //@synthesize canvasBounds=_canvasBounds - In the implementation block
@property (assign,nonatomic) CGRect strokesFrame;                  //@synthesize strokesFrame=_strokesFrame - In the implementation block
@property (nonatomic,retain) NSArray * strokes;                    //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) long long totalPoints; 
+(BOOL)supportsSecureCoding;
+(id)copyOfDrawing:(id)arg1 toFitInBounds:(CGRect)arg2 ;
+(void)resizeDrawing:(id)arg1 toFitInBounds:(CGRect)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(void)setStrokes:(NSArray *)arg1 ;
-(NSArray *)strokes;
-(CGRect)canvasBounds;
-(CGRect)strokesFrame;
-(void)setStrokesFrame:(CGRect)arg1 ;
-(long long)totalPoints;
-(id)mutableStrokes;
-(void)addBrushStroke:(id)arg1 ;
-(id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)arg1 ;
-(id)encodeBrushStrokesForArchiving;
-(void)removeLastBrushStroke;
-(void)setCanvasBounds:(CGRect)arg1 ;
@end

