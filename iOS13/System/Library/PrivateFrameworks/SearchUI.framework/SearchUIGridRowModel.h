/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)shouldHide;
-(id)initWithResult:(id)arg1 cardSection:(id)arg2 gridLayoutManager:(id)arg3 queryId:(unsigned long long)arg4 ;
-(SearchUIGridLayoutManager *)gridLayoutManager;
-(void)setGridLayoutManager:(SearchUIGridLayoutManager *)arg1 ;
-(void)setShouldHide:(BOOL)arg1 ;
@end

