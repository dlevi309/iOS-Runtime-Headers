/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionRowModel.h>

@class SearchUIGridLayoutManager;

@interface SearchUIGridRowModel : SearchUICardSectionRowModel {

	BOOL _shouldHide;
	SearchUIGridLayoutManager* _gridLayoutManager;

}

@property (nonatomic,retain) SearchUIGridLayoutManager * gridLayoutManager;              //@synthesize gridLayoutManager=_gridLayoutManager - In the implementation block
@property (assign,nonatomic) BOOL shouldHide;                                            //@synthesize shouldHide=_shouldHide - In the implementation block
-(SearchUIGridLayoutManager *)gridLayoutManager;
-(void)setGridLayoutManager:(SearchUIGridLayoutManager *)arg1 ;
-(void)setShouldHide:(BOOL)arg1 ;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 gridLayoutManager:(id)arg3 queryId:(unsigned long long)arg4 ;
-(BOOL)shouldHide;
-(BOOL)prefersNoSeparatorAbove;
-(BOOL)hasLeadingImage;
@end

