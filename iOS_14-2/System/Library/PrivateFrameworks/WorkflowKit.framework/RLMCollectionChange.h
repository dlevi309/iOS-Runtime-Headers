/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)insertions;
-(NSArray *)modifications;
-(id)initWithChanges:(CollectionChangeSet*)arg1 ;
-(NSArray *)deletions;
-(id)deletionsInSection:(unsigned long long)arg1 ;
-(id)insertionsInSection:(unsigned long long)arg1 ;
-(id)modificationsInSection:(unsigned long long)arg1 ;
@end

