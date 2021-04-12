/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSMutableArray, NSArray;

@interface REExportedTable : NSObject {

	NSMutableArray* _data;
	BOOL _sortable;
	NSArray* _header;

}

@property (nonatomic,retain) NSArray * header;                            //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) unsigned long long rowsCount; 
@property (assign,nonatomic) BOOL sortable;                               //@synthesize sortable=_sortable - In the implementation block
-(id)init;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(NSArray *)header;
-(void)setHeader:(NSArray *)arg1 ;
-(void)addRow:(id)arg1 ;
-(BOOL)sortable;
-(unsigned long long)rowsCount;
-(void)setSortable:(BOOL)arg1 ;
@end

