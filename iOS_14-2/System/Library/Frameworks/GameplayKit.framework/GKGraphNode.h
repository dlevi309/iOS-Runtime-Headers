/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)removeConnection:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
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

