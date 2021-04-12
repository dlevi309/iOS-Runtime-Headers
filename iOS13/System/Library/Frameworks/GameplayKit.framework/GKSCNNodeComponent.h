/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKComponent.h>
#import <libobjc.A.dylib/GKSerializedNodeContaining.h>
#import <libobjc.A.dylib/GKAgentDelegate.h>

@class NSIndexPath, SCNNode, NSString;

@interface GKSCNNodeComponent : GKComponent <GKSerializedNodeContaining, GKAgentDelegate> {

	NSIndexPath* _serializableNodeIndexPath;
	SCNNode* _node;

}

@property (nonatomic,readonly) SCNNode * node;                                     //@synthesize node=_node - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSIndexPath * serializableNodeIndexPath;              //@synthesize serializableNodeIndexPath=_serializableNodeIndexPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)componentWithNode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCNNode *)node;
-(void)setEntity:(id)arg1 ;
-(void)setNode:(SCNNode *)arg1 ;
-(id)initWithNode:(id)arg1 ;
-(NSIndexPath *)serializableNodeIndexPath;
-(void)setSerializableNodeIndexPath:(NSIndexPath *)arg1 ;
-(void)agentWillUpdate:(id)arg1 ;
-(void)agentDidUpdate:(id)arg1 ;
@end

