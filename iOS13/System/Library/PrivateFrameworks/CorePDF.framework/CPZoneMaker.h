/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


@class CPCharSequence;

@interface CPZoneMaker : NSObject {

	CPCharSequence* charactersOnPage;

}
-(void)dealloc;
-(void)makeZonesIn:(id)arg1 ;
-(unsigned)categorizeGraphicsIn:(id)arg1 ;
-(void)mergeQualifyingRectanglesIn:(id)arg1 ;
-(void)makeZonesWithBoundaryIn:(id)arg1 ;
-(void)cutHorizontalBorders:(id)arg1 whereObscuredByShape:(id)arg2 ;
-(void)cutVerticalBorders:(id)arg1 whereObscuredByShape:(id)arg2 ;
-(void)addZonesWithBoundaryIn:(id)arg1 withBorder:(id)arg2 ;
-(id)newZoneForStraddlersFrom:(id)arg1 ;
-(void)addObjectsToStraddler:(id)arg1 from:(id)arg2 ;
-(BOOL)overlap:(id)arg1 with:(id)arg2 ;
@end

