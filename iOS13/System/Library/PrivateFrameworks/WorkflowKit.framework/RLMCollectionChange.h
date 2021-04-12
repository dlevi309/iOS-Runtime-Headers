/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


#import <WorkflowKit/WorkflowKit-Structs.h>
@class NSArray;

@interface RLMCollectionChange : NSObject {

	CollectionChangeSet* _indices;

}

@property (nonatomic,readonly) NSArray * deletions; 
@property (nonatomic,readonly) NSArray * insertions; 
@property (nonatomic,readonly) NSArray * modifications; 
-(id)initWithChanges:(CollectionChangeSet*)arg1 ;
-(NSArray *)insertions;
-(NSArray *)modifications;
-(NSArray *)deletions;
-(id)deletionsInSection:(unsigned long long)arg1 ;
-(id)insertionsInSection:(unsigned long long)arg1 ;
-(id)modificationsInSection:(unsigned long long)arg1 ;
@end

