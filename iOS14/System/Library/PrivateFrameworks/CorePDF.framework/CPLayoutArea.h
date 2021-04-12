/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPLayoutArea : CPRegion {

	BOOL isFirstLayout;

}
-(id)properties;
-(id)init;
-(BOOL)isFirstLayout;
-(void)setIsFirstLayout:(BOOL)arg1 ;
-(id)description;
-(void)accept:(id)arg1 ;
-(BOOL)isSimilarTo:(id)arg1 ;
-(double)selectionBottom;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(CGRect)layoutAreaBounds;
-(void)addColumnBreaks;
@end

