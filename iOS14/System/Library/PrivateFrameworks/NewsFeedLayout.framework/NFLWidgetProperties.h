/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NFLWidgetProperties : NSObject <NSCopying> {

	BOOL _insetMargins;
	BOOL _defaultForYou;
	double _containerHeight;
	double _itemSpacing;
	double _topMarginInset;
	CGSize _gridSize;
	CGSize _itemSize;

}

@property (assign,nonatomic) double containerHeight;              //@synthesize containerHeight=_containerHeight - In the implementation block
@property (assign,nonatomic) CGSize gridSize;                     //@synthesize gridSize=_gridSize - In the implementation block
@property (assign,nonatomic) CGSize itemSize;                     //@synthesize itemSize=_itemSize - In the implementation block
@property (assign,nonatomic) double itemSpacing;                  //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign,nonatomic) BOOL insetMargins;                   //@synthesize insetMargins=_insetMargins - In the implementation block
@property (assign,nonatomic) double topMarginInset;               //@synthesize topMarginInset=_topMarginInset - In the implementation block
@property (assign,nonatomic) BOOL defaultForYou;                  //@synthesize defaultForYou=_defaultForYou - In the implementation block
-(void)setContainerHeight:(double)arg1 ;
-(CGSize)itemSize;
-(double)itemSpacing;
-(void)setGridSize:(CGSize)arg1 ;
-(void)setItemSpacing:(double)arg1 ;
-(BOOL)insetMargins;
-(CGSize)gridSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setItemSize:(CGSize)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(double)containerHeight;
-(void)setInsetMargins:(BOOL)arg1 ;
-(void)setTopMarginInset:(double)arg1 ;
-(double)topMarginInset;
-(void)setDefaultForYou:(BOOL)arg1 ;
-(BOOL)defaultForYou;
@end

