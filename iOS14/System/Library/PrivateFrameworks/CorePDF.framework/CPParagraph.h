/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)index;
-(id)init;
-(unsigned long long)alignment;
-(BOOL)below;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setListItem:(CPParagraphListItem *)arg1 ;
-(BOOL)isTextRegion;
-(CPParagraphListItem *)listItem;
-(void)accept:(id)arg1 ;
-(void)explode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
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
-(CGRect)reducedBounds;
-(void)setBelow:(BOOL)arg1 ;
-(BOOL)isPreformattedWithUnitWidth:(double*)arg1 ;
@end

