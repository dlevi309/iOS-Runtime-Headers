/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPRegion : CPChunk {

	BOOL isTextRegion;
	BOOL isImageRegion;
	BOOL isCompoundShape;
	CPRegion* nextRegion;
	int order;
	id link;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)order;
-(id)link;
-(void)setLink:(id)arg1 ;
-(void)setOrder:(int)arg1 ;
-(BOOL)isRotated;
-(BOOL)isTextRegion;
-(void)accept:(id)arg1 ;
-(BOOL)isIndivisible;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(BOOL)isParagraphRegion;
-(BOOL)isListItemRegion;
-(void)setIsTextRegion:(BOOL)arg1 ;
-(BOOL)isTableCellRegion;
-(BOOL)isBodyZone;
-(BOOL)isCompoundShape;
-(void)setIsCompoundShape:(BOOL)arg1 ;
-(BOOL)isZone;
-(id)nextRegion;
-(void)setNextRegion:(id)arg1 ;
@end

