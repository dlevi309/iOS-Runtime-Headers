/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeader:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)header;
-(id)rowAtIndex:(unsigned long long)arg1 ;
-(void)addRow:(id)arg1 ;
-(BOOL)sortable;
-(void)setSortable:(BOOL)arg1 ;
-(unsigned long long)rowsCount;
@end

