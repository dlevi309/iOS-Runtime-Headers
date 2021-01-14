/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-()position;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setPosition:;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPoint:;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(GKCGraphNode3D*)cGraphNode3D;
@end

