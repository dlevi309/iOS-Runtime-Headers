/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class NSMutableSet, CKRecord;

@interface CKRecordGraphNode : NSObject {

	NSMutableSet* _edges;
	NSMutableSet* _indegrees;
	CKRecord* _record;

}

@property (nonatomic,retain) NSMutableSet * edges;                       //@synthesize edges=_edges - In the implementation block
@property (nonatomic,readonly) NSMutableSet * indegrees;                 //@synthesize indegrees=_indegrees - In the implementation block
@property (nonatomic,readonly) unsigned long long indegree; 
@property (nonatomic,retain) CKRecord * record;                          //@synthesize record=_record - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSMutableSet *)edges;
-(void)setEdges:(NSMutableSet *)arg1 ;
-(id)CKPropertiesDescription;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(NSMutableSet *)indegrees;
-(unsigned long long)indegree;
@end

