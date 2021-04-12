/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CKRecord *)record;
-(id)init;
-(NSMutableSet *)indegrees;
-(unsigned long long)indegree;
-(void)setRecord:(CKRecord *)arg1 ;
-(id)CKPropertiesDescription;
-(NSMutableSet *)edges;
-(id)description;
-(unsigned long long)hash;
-(void)setEdges:(NSMutableSet *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

