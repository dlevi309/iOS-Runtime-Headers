/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-()gridPosition;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(GKCGridGraphNode*)cGridGraphNode;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(id)initWithGridPosition:;
@end

