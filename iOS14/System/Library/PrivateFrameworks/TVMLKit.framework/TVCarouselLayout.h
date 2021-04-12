/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class NSNumber;

@interface TVCarouselLayout : TVViewLayout {

	BOOL _parallaxEnabled;
	BOOL _showsPageControl;
	double _interitemSpacing;
	long long _layoutType;
	unsigned long long _scrollMode;
	double _focusedEdgeExpansion;
	double _revealDistance;
	double _shearAngle;
	NSNumber* _pageControlMarginNumber;
	CGSize _cellSize;
	UIEdgeInsets _cellPadding;

}

@property (assign,nonatomic) double interitemSpacing;                                    //@synthesize interitemSpacing=_interitemSpacing - In the implementation block
@property (assign,nonatomic) long long layoutType;                                       //@synthesize layoutType=_layoutType - In the implementation block
@property (assign,nonatomic) CGSize cellSize;                                            //@synthesize cellSize=_cellSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets cellPadding;                                   //@synthesize cellPadding=_cellPadding - In the implementation block
@property (assign,nonatomic) unsigned long long scrollMode;                              //@synthesize scrollMode=_scrollMode - In the implementation block
@property (assign,nonatomic) double focusedEdgeExpansion;                                //@synthesize focusedEdgeExpansion=_focusedEdgeExpansion - In the implementation block
@property (assign,nonatomic) double revealDistance;                                      //@synthesize revealDistance=_revealDistance - In the implementation block
@property (assign,getter=isParallaxEnabled,nonatomic) BOOL parallaxEnabled;              //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
@property (assign,nonatomic) double shearAngle;                                          //@synthesize shearAngle=_shearAngle - In the implementation block
@property (assign,nonatomic) BOOL showsPageControl;                                      //@synthesize showsPageControl=_showsPageControl - In the implementation block
@property (assign,nonatomic) NSNumber * pageControlMarginNumber;                         //@synthesize pageControlMarginNumber=_pageControlMarginNumber - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
+(long long)layoutTypeForString:(id)arg1 ;
+(long long)layoutTypeForElement:(id)arg1 ;
+(unsigned long long)scrollModeForString:(id)arg1 ;
-(long long)layoutType;
-(void)setParallaxEnabled:(BOOL)arg1 ;
-(double)interitemSpacing;
-(CGSize)cellSize;
-(void)setCellSize:(CGSize)arg1 ;
-(void)setScrollMode:(unsigned long long)arg1 ;
-(void)setLayoutType:(long long)arg1 ;
-(BOOL)isParallaxEnabled;
-(UIEdgeInsets)cellPadding;
-(unsigned long long)scrollMode;
-(void)setInteritemSpacing:(double)arg1 ;
-(void)setCellPadding:(UIEdgeInsets)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setShowsPageControl:(BOOL)arg1 ;
-(BOOL)showsPageControl;
-(void)setPageControlMarginNumber:(NSNumber *)arg1 ;
-(NSNumber *)pageControlMarginNumber;
-(void)setRevealDistance:(double)arg1 ;
-(void)setFocusedEdgeExpansion:(double)arg1 ;
-(void)setShearAngle:(double)arg1 ;
-(double)focusedEdgeExpansion;
-(double)revealDistance;
-(double)shearAngle;
@end

