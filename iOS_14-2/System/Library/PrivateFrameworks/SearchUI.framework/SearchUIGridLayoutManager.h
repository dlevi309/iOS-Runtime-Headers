/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)computeCompactTableForSections:(id)arg1 ;
-(void)setIsCompactTable:(BOOL)arg1 ;
-(void)setGridManager:(TLKGridLayoutManager *)arg1 ;
-(id)tableRowForTableRowCardSection:(id)arg1 ;
-(BOOL)isCompactTable;
-(TLKGridLayoutManager *)gridManager;
-(void)setTableMapping:(NSMapTable *)arg1 ;
-(id)initWithHeaderSection:(id)arg1 dataSections:(id)arg2 ;
-(NSMapTable *)tableMapping;
@end

