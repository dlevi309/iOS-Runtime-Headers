/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


@class TLKGridLayoutManager, NSMapTable;

@interface SearchUIGridLayoutManager : NSObject {

	BOOL _isCompactTable;
	TLKGridLayoutManager* _gridManager;
	NSMapTable* _tableMapping;

}

@property (nonatomic,retain) NSMapTable * tableMapping;                       //@synthesize tableMapping=_tableMapping - In the implementation block
@property (nonatomic,retain) TLKGridLayoutManager * gridManager;              //@synthesize gridManager=_gridManager - In the implementation block
@property (assign,nonatomic) BOOL isCompactTable;                             //@synthesize isCompactTable=_isCompactTable - In the implementation block
+(id)alignmentsForSFHeaderRow:(id)arg1 ;
+(id)richTextForRichDataItems:(id)arg1 ;
+(id)richTextForDataItems:(id)arg1 ;
+(BOOL)shouldHideViewForRichData:(id)arg1 ;
-(id)initWithHeaderSection:(id)arg1 dataSections:(id)arg2 ;
-(void)setTableMapping:(NSMapTable *)arg1 ;
-(NSMapTable *)tableMapping;
-(BOOL)computeCompactTableForSections:(id)arg1 ;
-(void)setIsCompactTable:(BOOL)arg1 ;
-(void)setGridManager:(TLKGridLayoutManager *)arg1 ;
-(id)tableRowForTableRowCardSection:(id)arg1 ;
-(TLKGridLayoutManager *)gridManager;
-(BOOL)isCompactTable;
@end

