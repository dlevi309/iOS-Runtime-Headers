/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@protocol CPGraphicUser;
@class CPTextLine, CPParagraph, CPChunk;

@interface CPGraphicObject : CPChunk {

	unsigned clipIndex;
	CGRect renderedBounds;
	BOOL isInZoneBorder;
	int zoneGraphicType;
	CPTextLine* anchoringTextLine;
	CPParagraph* anchoringParagraph;
	CPChunk*<CPGraphicUser> user;

}

@property (assign,nonatomic) unsigned clipIndex; 
@property (nonatomic,retain) CPParagraph * anchoringParagraph; 
-(id)init;
-(void)dealloc;
-(id)user;
-(void)setUser:(id)arg1 ;
-(BOOL)isVisible;
-(void)setClipIndex:(unsigned)arg1 ;
-(CGRect)renderedBounds;
-(unsigned short)unicode;
-(BOOL)isNarrow;
-(BOOL)canBeContainer;
-(BOOL)isIndivisible;
-(BOOL)isInZoneBorder;
-(void)setIsInZoneBorder:(BOOL)arg1 ;
-(int)zoneGraphicType;
-(void)setZoneGraphicType:(int)arg1 ;
-(void)setAnchoringTextLine:(id)arg1 ;
-(id)anchoringTextLine;
-(unsigned)clipIndex;
-(CPParagraph *)anchoringParagraph;
-(void)setAnchoringParagraph:(CPParagraph *)arg1 ;
@end

