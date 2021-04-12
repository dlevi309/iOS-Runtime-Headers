/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSArray;

@interface UIPrintPageRenderer : NSObject {

	double _headerHeight;
	double _footerHeight;
	CGRect _paperRect;
	CGRect _printableRect;
	NSMutableArray* _printFormatters;
	CGContextRef _printContext;
	long long _cachedPageCount;

}

@property (assign,nonatomic) CGRect paperRect;                       //@synthesize paperRect=_paperRect - In the implementation block
@property (assign,nonatomic) CGRect printableRect;                   //@synthesize printableRect=_printableRect - In the implementation block
@property (assign,nonatomic) double headerHeight;                    //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign,nonatomic) double footerHeight;                    //@synthesize footerHeight=_footerHeight - In the implementation block
@property (nonatomic,readonly) long long numberOfPages; 
@property (copy) NSArray * printFormatters; 
-(void)dealloc;
-(long long)numberOfPages;
-(long long)_numberOfPages;
-(CGRect)printableRect;
-(void)_removePrintFormatter:(id)arg1 ;
-(double)headerHeight;
-(double)footerHeight;
-(CGRect)paperRect;
-(BOOL)_numberOfPagesIsCached;
-(void)setPaperRect:(CGRect)arg1 ;
-(void)setPrintableRect:(CGRect)arg1 ;
-(void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(long long)arg2 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)_startSaveContext:(CGContextRef)arg1 ;
-(void)_drawPage:(long long)arg1 ;
-(void)_endSaveContext;
-(BOOL)_startPrintContext:(id)arg1 printSettings:(id)arg2 ;
-(void)_endPrintContext:(id)arg1 success:(BOOL)arg2 ;
-(NSArray *)printFormatters;
-(long long)_maxFormatterPage;
-(void)drawHeaderForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawContentForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawPrintFormatter:(id)arg1 forPageAtIndex:(long long)arg2 ;
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)setPrintFormatters:(NSArray *)arg1 ;
-(id)printFormattersForPageAtIndex:(long long)arg1 ;
-(void)setHeaderHeight:(double)arg1 ;
-(void)setFooterHeight:(double)arg1 ;
@end

