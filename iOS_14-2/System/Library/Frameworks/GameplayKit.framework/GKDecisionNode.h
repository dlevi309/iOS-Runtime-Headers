/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


#import <GameplayKit/GameplayKit-Structs.h>
@class GKDecisionTree;

@interface GKDecisionNode : NSObject {

	GKCDecisionNode* _node;
	GKDecisionTree* _tree;

}
-(id)attribute;
-(void)setAttribute:(id)arg1 ;
-(id)description;
-(id)branches;
-(void)dealloc;
-(id)initWithNode:(GKCDecisionNode*)arg1 tree:(id)arg2 ;
-(id)createChildWithAttribute:(id)arg1 randomSource:(id)arg2 withBranch:(id)arg3 ;
-(id)createBranchWithValue:(id)arg1 attribute:(id)arg2 ;
-(id)createBranchWithPredicate:(id)arg1 attribute:(id)arg2 ;
-(id)createBranchWithWeight:(long long)arg1 attribute:(id)arg2 ;
-(id)getNodeAtBranch:(id)arg1 ;
@end

