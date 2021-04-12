/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying> {

	BOOL _needsRecalc;
	UIPrintPageRenderer* _printPageRenderer;
	double _maximumContentHeight;
	double _maximumContentWidth;
	long long _startPage;
	long long _pageCount;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _perPageContentInsets;

}

@property (assign,nonatomic,__weak) UIPrintPageRenderer * printPageRenderer;              //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (assign,nonatomic) double maximumContentHeight;                                 //@synthesize maximumContentHeight=_maximumContentHeight - In the implementation block
@property (assign,nonatomic) double maximumContentWidth;                                  //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets perPageContentInsets;                           //@synthesize perPageContentInsets=_perPageContentInsets - In the implementation block
@property (assign,nonatomic) long long startPage;                                         //@synthesize startPage=_startPage - In the implementation block
@property (nonatomic,readonly) long long pageCount;                                       //@synthesize pageCount=_pageCount - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(long long)pageCount;
-(void)_setNeedsRecalc;
-(void)removeFromPrintPageRenderer;
-(CGRect)_pageContentRect:(BOOL)arg1 ;
-(long long)startPage;
-(void)_recalcIfNecessary;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(void)setStartPage:(long long)arg1 ;
-(void)setMaximumContentWidth:(double)arg1 ;
-(void)setMaximumContentHeight:(double)arg1 ;
-(void)setPerPageContentInsets:(UIEdgeInsets)arg1 ;
-(void)setPrintPageRenderer:(UIPrintPageRenderer *)arg1 ;
-(UIPrintPageRenderer *)printPageRenderer;
-(double)maximumContentHeight;
-(double)maximumContentWidth;
-(UIEdgeInsets)perPageContentInsets;
@end

