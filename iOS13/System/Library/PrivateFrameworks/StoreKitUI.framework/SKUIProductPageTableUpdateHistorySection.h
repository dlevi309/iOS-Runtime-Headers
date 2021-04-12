/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/SKUIProductPageTableSection.h>

@class SKUIClientContext, NSMutableIndexSet, SKUIProductPageTableExpandableHeaderView, NSArray, SKUILayoutCache, SKUIColorScheme, NSDateFormatter;

@interface SKUIProductPageTableUpdateHistorySection : SKUIProductPageTableSection {

	SKUIClientContext* _clientContext;
	NSMutableIndexSet* _expandedIndexSet;
	long long _firstStringIndex;
	SKUIProductPageTableExpandableHeaderView* _headerView;
	NSArray* _releaseNotes;
	SKUILayoutCache* _textLayoutCache;
	SKUIColorScheme* _colorScheme;
	NSDateFormatter* _dateFormatter;

}

@property (assign,nonatomic) long long firstStringIndex;                     //@synthesize firstStringIndex=_firstStringIndex - In the implementation block
@property (nonatomic,copy) NSArray * releaseNotes;                           //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;              //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
@property (nonatomic,retain) SKUIColorScheme * colorScheme;                  //@synthesize colorScheme=_colorScheme - In the implementation block
-(void)setExpanded:(BOOL)arg1 ;
-(void)setReleaseNotes:(NSArray *)arg1 ;
-(NSArray *)releaseNotes;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)numberOfRowsInSection;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(SKUILayoutCache *)textLayoutCache;
-(id)headerViewForTableView:(id)arg1 ;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
-(void)setFirstStringIndex:(long long)arg1 ;
-(void)_reloadHeaderView;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)firstStringIndex;
@end

