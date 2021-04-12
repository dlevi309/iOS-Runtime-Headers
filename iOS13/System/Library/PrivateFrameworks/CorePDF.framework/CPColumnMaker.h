/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, CPZone;

@interface CPColumnMaker : NSObject {

	NSMutableArray* columns;
	CPZone* currentZone;
	NSMutableArray* allParagraphs;
	NSMutableArray* thinHorizontalShapes;
	NSMutableArray* otherShapes;
	NSMutableArray* images;
	NSMutableArray* paragraphWrappers;
	CGRect pageBounds;
	double maxParagraphDistance;

}

@property (assign) CGRect pageBounds; 
-(id)init;
-(void)dealloc;
-(id)columns;
-(CGRect)pageBounds;
-(void)setPageBounds:(CGRect)arg1 ;
-(void)makeColumnsFrom:(id)arg1 zone:(id)arg2 ;
-(BOOL)paragraph:(id)arg1 isAbove:(id)arg2 ;
-(BOOL)paragraph:(id)arg1 isBelow:(id)arg2 ;
-(id)paragraphAbove:(id)arg1 in:(id)arg2 ;
-(BOOL)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2 ;
-(void)intersectionCallout:(id)arg1 ;
-(double)averageSpacing:(id)arg1 ;
-(BOOL)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(CGRect)arg3 ;
-(void)partitionShapes:(id)arg1 ;
-(void)callOuts;
-(BOOL)canSafelyAdd:(id)arg1 to:(id)arg2 ;
-(void)splitColumns:(id)arg1 ;
-(void)anchorImages;
-(BOOL)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3 ;
-(BOOL)cuttingShapeBetween:(id)arg1 and:(id)arg2 ;
-(BOOL)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2 ;
-(id)paragraphBelow:(id)arg1 in:(id)arg2 ;
-(id)chunkAbove:(id)arg1 in:(id)arg2 ;
-(BOOL)column:(id)arg1 isLinkedBelowTo:(id)arg2 ;
@end

