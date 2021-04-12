/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface GKGraphNode : NSObject <NSSecureCoding> {

	NSMutableArray* _connectedNodes;
	GKCGraphNode* _cGraphNode;

}

@property (nonatomic,readonly) NSArray * connectedNodes; 
+(BOOL)supportsSecureCoding;
+(id)node;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(NSArray *)connectedNodes;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(GKCGraphNode*)cGraphNode;
-(id)findPathToNode:(id)arg1 ;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(id)findPathFromNode:(id)arg1 ;
-(void)addConnectionsToNodes:(id)arg1 bidirectional:(BOOL)arg2 ;
-(id)mutConnectedNodes;
-(void)addConnection:(id)arg1 bidirectional:(BOOL)arg2 ;
-(void)removeConnectionsToNodes:(id)arg1 bidirectional:(BOOL)arg2 ;
@end

