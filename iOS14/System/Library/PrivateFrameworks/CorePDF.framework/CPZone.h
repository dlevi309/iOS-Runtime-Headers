/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>
#import <libobjc.A.dylib/CPGraphicUser.h>

@class NSMutableArray, CPZoneProfile, NSArray, CPCharSequence;

@interface CPZone : CPRegion <CPGraphicUser> {

	NSMutableArray* zoneBorders;
	CGPoint* outerVertices;
	CGPoint* swollenOuterVertices;
	double area;
	BOOL isStraddleZone;
	CPZoneProfile* zoneProfile;
	NSArray* leftGuides;
	NSArray* rightGuides;
	NSArray* gutters;
	NSArray* spacers;
	CPCharSequence* charactersInZone;
	NSMutableArray* textLinesInZone;
	NSArray* graphicsInZone;
	NSMutableArray* backgroundGraphics;
	unsigned usedGraphicCount;

}
-(unsigned)vertexCount;
-(id)init;
-(double)area;
-(BOOL)isZone;
-(BOOL)contains:(id)arg1 ;
-(unsigned)wordCount;
-(void)accept:(id)arg1 ;
-(id)gutters;
-(id)spacers;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isRectangular;
-(id)textLinesInZone;
-(CGPoint*)outerVertices;
-(void)incrementUsedGraphicCount;
-(unsigned)usedGraphicCount;
-(CGRect)zoneBounds;
-(CGColorRef)newBackgroundColor;
-(id)backgroundGraphics;
-(BOOL)mapToWordsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapToWords:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapToWordPairs:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)mapToWordPairsWithIndex:(/*function pointer*/void*)arg1 passing:(void*)arg2 ;
-(BOOL)bordersWindClockwise;
-(BOOL)hasNeighborShape:(id)arg1 ;
-(long long)borderZOrder;
-(long long)neighborZOrder;
-(CGRect)zoneBoundsFromVertices:(CGPoint*)arg1 ofCount:(unsigned)arg2 ;
-(CGPoint*)swollenOuterVertices;
-(BOOL)hasBorders;
-(id)zoneBorders;
-(id)graphicsInZone;
-(void)setZoneBorders:(id)arg1 ;
-(void)removeUnfilledNeighborShapes;
-(CGRect)swollenZoneBounds;
-(BOOL)rectangleBordersAtLeft:(id*)arg1 top:(id*)arg2 right:(id*)arg3 bottom:(id*)arg4 ;
-(BOOL)canContain:(CGRect)arg1 ;
-(void)addPDFChar:(void*)arg1 ;
-(void)setCharactersInZone:(id)arg1 ;
-(id)charactersInZone;
-(void)addContentFrom:(id)arg1 ;
-(long long)compareArea:(id)arg1 ;
-(BOOL)isStraddleZone;
-(void)setIsStraddleZone:(BOOL)arg1 ;
-(id)zoneProfile;
-(void)setZoneProfile:(id)arg1 ;
-(void)setLeftGuides:(id)arg1 ;
-(id)leftGuides;
-(void)setRightGuides:(id)arg1 ;
-(id)rightGuides;
-(void)setGutters:(id)arg1 ;
-(void)setSpacers:(id)arg1 ;
@end

