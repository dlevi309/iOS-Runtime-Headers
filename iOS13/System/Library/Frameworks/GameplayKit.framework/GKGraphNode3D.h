/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGraphNode3D : GKGraphNode {

	GKCGraphNode3D* _cGraphNode3D;

}

@property (assign,nonatomic)  position; 
+(BOOL)supportsSecureCoding;
+(id)nodeWithPoint:;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-()position;
-(void)setPosition:;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(id)initWithPoint:;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(GKCGraphNode3D*)cGraphNode3D;
@end

