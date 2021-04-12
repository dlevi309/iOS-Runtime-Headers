/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGridGraphNode : GKGraphNode {

	GKCGridGraphNode* _cGridGraphNode;

}

@property (nonatomic,readonly)  gridPosition; 
+(BOOL)supportsSecureCoding;
+(id)nodeWithGridPosition:;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(GKCGridGraphNode*)cGridGraphNode;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(id)initWithGridPosition:;
-()gridPosition;
@end

