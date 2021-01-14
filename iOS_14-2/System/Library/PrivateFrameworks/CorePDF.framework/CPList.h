/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPParagraphListItem;

@interface CPList : NSObject <CPDisposable> {

	CGRect spacer;
	int type;
	unsigned ordinalPrefixLength;
	unsigned ordinalSuffixLength;
	CPParagraphListItem* parentItem;
	CFArrayRef items;

}

@property (assign,nonatomic) CGRect spacer; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) unsigned ordinalPrefixLength; 
@property (assign,nonatomic) unsigned ordinalSuffixLength; 
@property (nonatomic,retain) CPParagraphListItem * parentItem; 
-(void)addItem:(id)arg1 ;
-(id)itemAtIndex:(unsigned)arg1 ;
-(void)finalize;
-(id)init;
-(CPParagraphListItem *)parentItem;
-(void)setType:(int)arg1 ;
-(void)dispose;
-(unsigned)itemCount;
-(CGRect)spacer;
-(int)type;
-(void)setParentItem:(CPParagraphListItem *)arg1 ;
-(void)dealloc;
-(BOOL)containsParagraph:(id)arg1 ;
-(BOOL)isMultilevel;
-(void)setSpacer:(CGRect)arg1 ;
-(unsigned)ordinalPrefixLength;
-(void)setOrdinalPrefixLength:(unsigned)arg1 ;
-(unsigned)ordinalSuffixLength;
-(void)setOrdinalSuffixLength:(unsigned)arg1 ;
@end

