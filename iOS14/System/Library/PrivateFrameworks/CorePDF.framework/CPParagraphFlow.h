/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class CPParagraph, NSMutableArray;

@interface CPParagraphFlow : NSObject {

	CPParagraph* paragraph;
	double fLeft;
	double fRight;
	double fTop;
	double fBottom;
	NSMutableArray* paragraphsAbove;
	NSMutableArray* paragraphsBelow;
	NSMutableArray* paragraphsLeft;
	NSMutableArray* paragraphsRight;
	BOOL placed;
	BOOL adjacentToCallout;
	int calloutType;
	CPParagraph* nextInColumn;

}

@property (nonatomic,retain) CPParagraph * paragraph; 
@property (assign,nonatomic) CPParagraph * nextInColumn; 
@property (assign) double fLeft; 
@property (assign) double fRight; 
@property (assign) double fBottom; 
@property (assign) BOOL placed; 
@property (assign) int calloutType; 
-(double)area;
-(double)fLeft;
-(id)description;
-(double)dBelow;
-(double)dAbove;
-(BOOL)placed;
-(double)fRight;
-(int)leftOrder;
-(int)rightOrder;
-(CPParagraph *)paragraph;
-(void)setParagraph:(CPParagraph *)arg1 ;
-(int)inOrder;
-(double)fBottom;
-(void)dealloc;
-(int)outOrder;
-(void)setCalloutType:(int)arg1 ;
-(id)paragraphsAbove;
-(int)calloutType;
-(CGRect)belowBounds;
-(id)initWithParagraph:(id)arg1 ;
-(void)setParagraphsAboveIn:(id)arg1 ;
-(void)setParagraphsBelowIn:(id)arg1 ;
-(void)setParagraphsLeftIn:(id)arg1 ;
-(void)setParagraphsRightIn:(id)arg1 ;
-(long long)topDescending:(id)arg1 ;
-(void)setPlaced:(BOOL)arg1 ;
-(id)nextParagraphInColumn:(id)arg1 ;
-(BOOL)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3 ;
-(id)paragraphsLeft;
-(id)paragraphsRight;
-(BOOL)intervalOverlapLeft:(double)arg1 right:(double)arg2 rects:(id)arg3 ;
-(BOOL)intervalOverlapTop:(double)arg1 bottom:(double)arg2 paragraphs:(id)arg3 ;
-(int)inOrder:(BOOL)arg1 ;
-(id)paragraphsBelow;
-(void)setNextInColumn:(CPParagraph *)arg1 ;
-(id)simpleRule:(unsigned)arg1 ;
-(id)ignoreCallouts:(unsigned)arg1 ;
-(id)twoSides:(unsigned)arg1 ;
-(id)belowTwoSides:(unsigned)arg1 ;
-(void)removeFromBelow:(id)arg1 ;
-(void)removeFromAbove:(id)arg1 ;
-(void)replaceBelow:(id)arg1 withOneOf:(id)arg2 ;
-(void)replaceAbove:(id)arg1 withOneOf:(id)arg2 ;
-(void)setFLeft:(double)arg1 ;
-(void)setFRight:(double)arg1 ;
-(void)setFBottom:(double)arg1 ;
-(CPParagraph *)nextInColumn;
@end

