/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPColumn : CPRegion {

	BOOL hasCentredParagraph;
	BOOL hasColumnBreak;
	double maxLeftPad;
	double maxRightPad;
	double maxRight;
	double minLeft;
	BOOL complete;

}

@property (assign) BOOL complete; 
-(id)init;
-(id)description;
-(BOOL)complete;
-(void)setComplete:(BOOL)arg1 ;
-(void)accept:(id)arg1 ;
-(double)leftPad;
-(int)inOrder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(CGRect)columnBounds;
-(double)rightPad;
-(double)selectionBottom;
-(void)setHasColumnBreak:(BOOL)arg1 ;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(double)bottomBaseline;
-(BOOL)hasCentredParagraph;
-(void)setHasCentredParagraph:(BOOL)arg1 ;
-(double)maxLeftPad;
-(void)setMaxLeftPad:(double)arg1 ;
-(double)maxRightPad;
-(void)setMaxRightPad:(double)arg1 ;
-(CGRect)paddedBounds;
-(int)outOrder;
@end

