/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSMutableArray, NSArray;

@interface CKRecordGraph : NSObject {

	NSMutableArray* _nodes;
	NSArray* _sortedRecords;

}

@property (nonatomic,retain) NSMutableArray * nodes;               //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,retain) NSArray * sortedRecords;              //@synthesize sortedRecords=_sortedRecords - In the implementation block
+(id)topologicallySortRecords:(id)arg1 withError:(id*)arg2 ;
-(id)init;
-(id)description;
-(NSMutableArray *)nodes;
-(void)setNodes:(NSMutableArray *)arg1 ;
-(void)setSortedRecords:(NSArray *)arg1 ;
-(NSArray *)sortedRecords;
-(BOOL)addRecords:(id)arg1 error:(id*)arg2 ;
-(id)recordsByTopologicalSortWithError:(id*)arg1 ;
@end

