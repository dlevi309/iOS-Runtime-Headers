/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)strokes;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(void)setStrokes:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStrokesFrame:(CGRect)arg1 ;
-(void)setCanvasBounds:(CGRect)arg1 ;
-(long long)totalPoints;
-(CGRect)canvasBounds;
-(CGRect)strokesFrame;
-(id)mutableStrokes;
-(void)addBrushStroke:(id)arg1 ;
-(id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)arg1 ;
-(id)encodeBrushStrokesForArchiving;
-(void)removeLastBrushStroke;
@end

