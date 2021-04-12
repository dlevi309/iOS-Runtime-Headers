/*
* Generated on Thursday, January 14, 2021 at 2:20:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)footerHeight;
-(void)_removePrintFormatter:(id)arg1 ;
-(BOOL)_numberOfPagesIsCached;
-(void)setPaperRect:(CGRect)arg1 ;
-(void)setPrintableRect:(CGRect)arg1 ;
-(void)addPrintFormatter:(id)arg1 startingAtPageAtIndex:(long long)arg2 ;
-(void)_endSaveContext;
-(void)_startSaveContext:(CGContextRef)arg1 ;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(BOOL)_startPrintContext:(id)arg1 printSettings:(id)arg2 ;
-(void)_endPrintContext:(id)arg1 success:(BOOL)arg2 ;
-(void)drawHeaderForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(long long)_maxFormatterPage;
-(NSArray *)printFormatters;
-(void)drawPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawContentForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)drawPrintFormatter:(id)arg1 forPageAtIndex:(long long)arg2 ;
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(void)setPrintFormatters:(NSArray *)arg1 ;
-(id)printFormattersForPageAtIndex:(long long)arg1 ;
-(void)setFooterHeight:(double)arg1 ;
-(CGRect)paperRect;
-(void)setHeaderHeight:(double)arg1 ;
-(long long)numberOfPages;
-(void)_drawPage:(long long)arg1 ;
-(double)headerHeight;
-(long long)_numberOfPages;
-(CGRect)printableRect;
-(void)dealloc;
@end

