/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


#import <GameplayKit/GameplayKit-Structs.h>
@class GKDecisionTree;

@interface GKDecisionNode : NSObject {

	GKCDecisionNode* _node;
	GKDecisionTree* _tree;

}
-(void)dealloc;
-(id)description;
-(id)attribute;
-(id)branches;
-(void)setAttribute:(id)arg1 ;
-(id)initWithNode:(GKCDecisionNode*)arg1 tree:(id)arg2 ;
-(id)createChildWithAttribute:(id)arg1 randomSource:(id)arg2 withBranch:(id)arg3 ;
-(id)createBranchWithValue:(id)arg1 attribute:(id)arg2 ;
-(id)createBranchWithPredicate:(id)arg1 attribute:(id)arg2 ;
-(id)createBranchWithWeight:(long long)arg1 attribute:(id)arg2 ;
-(id)getNodeAtBranch:(id)arg1 ;
@end

