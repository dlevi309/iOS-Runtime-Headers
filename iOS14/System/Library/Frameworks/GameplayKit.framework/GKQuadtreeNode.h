/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadtreeNode : NSObject {

	GKCQuadTreeNode<NSObject>* _cQuadTreeNode;
	GKQuad _quad;

}

@property (nonatomic,readonly) GKQuadRef quad;              //@synthesize quad=_quad - In the implementation block
-(GKQuadRef)quad;
-(1)min;
-(1)max;
-(void*)cQuadTreeNode;
-(void)setCQuadTreeNode:(void*)arg1 ;
@end

