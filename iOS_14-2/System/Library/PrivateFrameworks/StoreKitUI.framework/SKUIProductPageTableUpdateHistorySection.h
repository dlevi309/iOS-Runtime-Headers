/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithClientContext:(id)arg1 ;
-(void)_reloadHeaderView;
-(long long)numberOfRowsInSection;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2 ;
-(SKUILayoutCache *)textLayoutCache;
-(id)headerViewForTableView:(id)arg1 ;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
-(void)setFirstStringIndex:(long long)arg1 ;
-(id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2 ;
-(long long)firstStringIndex;
@end

