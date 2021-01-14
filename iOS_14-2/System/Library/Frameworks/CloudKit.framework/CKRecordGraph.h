/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNodes:(NSMutableArray *)arg1 ;
-(NSArray *)sortedRecords;
-(void)setSortedRecords:(NSArray *)arg1 ;
-(BOOL)addRecords:(id)arg1 error:(id*)arg2 ;
-(id)recordsByTopologicalSortWithError:(id*)arg1 ;
-(id)description;
-(NSMutableArray *)nodes;
@end

