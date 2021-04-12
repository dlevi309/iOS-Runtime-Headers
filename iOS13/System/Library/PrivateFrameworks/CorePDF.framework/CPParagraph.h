/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@class CPParagraphListItem;

@interface CPParagraph : CPRegion {

	BOOL noIndentation;
	BOOL below;
	unsigned long long alignment;
	BOOL hasDropCap;
	id flowProperties;
	CPParagraphListItem* listItem;
	double preformatWidth;

}

@property (nonatomic,retain) CPParagraphListItem * listItem; 
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)index;
-(unsigned long long)alignment;
-(void)setAlignment:(unsigned long long)arg1 ;
-(BOOL)isTextRegion;
-(void)accept:(id)arg1 ;
-(CPParagraphListItem *)listItem;
-(void)setListItem:(CPParagraphListItem *)arg1 ;
-(double)selectionBottom;
-(BOOL)isBoxRegion;
-(BOOL)isGraphicalRegion;
-(BOOL)isRowRegion;
-(void)setIsImageRegion:(BOOL)arg1 ;
-(BOOL)isImageRegion;
-(BOOL)isShapeRegion;
-(id)flowProperties;
-(void)setFlowProperties:(id)arg1 ;
-(BOOL)isParagraphRegion;
-(BOOL)isListItemRegion;
-(void)setIsTextRegion:(BOOL)arg1 ;
-(void)setNoIndentation:(BOOL)arg1 ;
-(BOOL)noIndentation;
-(BOOL)hasDropCap;
-(void)setHasDropCap:(BOOL)arg1 ;
-(void)explode;
-(CGRect)reducedBounds;
-(void)setBelow:(BOOL)arg1 ;
-(BOOL)below;
-(BOOL)isPreformattedWithUnitWidth:(double*)arg1 ;
@end

