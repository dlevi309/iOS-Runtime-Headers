/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol GKSceneRootNodeType;
@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface GKScene : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _entities;
	NSMutableDictionary* _graphs;
	id<GKSceneRootNodeType> _rootNode;

}

@property (nonatomic,readonly) NSArray * entities;                          //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) id<GKSceneRootNodeType> rootNode;              //@synthesize rootNode=_rootNode - In the implementation block
@property (nonatomic,readonly) NSDictionary * graphs;                       //@synthesize graphs=_graphs - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_sceneWithFileNamed:(id)arg1 rootNode:(id)arg2 ;
+(id)sceneWithFileNamed:(id)arg1 rootNode:(id)arg2 ;
+(id)sceneWithFileNamed:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<GKSceneRootNodeType>)rootNode;
-(NSArray *)entities;
-(void)setRootNode:(id<GKSceneRootNodeType>)arg1 ;
-(void)addEntity:(id)arg1 ;
-(void)removeEntity:(id)arg1 ;
-(void)addGraph:(id)arg1 name:(id)arg2 ;
-(void)removeGraph:(id)arg1 ;
-(NSDictionary *)graphs;
@end

