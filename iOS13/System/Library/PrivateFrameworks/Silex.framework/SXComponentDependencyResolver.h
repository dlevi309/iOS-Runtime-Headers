/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSArray, NSMutableArray, NSDictionary;

@interface SXComponentDependencyResolver : NSObject {

	NSArray* _solvedComponentNodes;
	NSMutableArray* _componentNodes;
	NSDictionary* _mappedComponentNodes;

}

@property (nonatomic,readonly) NSArray * solvedComponentNodes;                   //@synthesize solvedComponentNodes=_solvedComponentNodes - In the implementation block
@property (nonatomic,readonly) NSMutableArray * componentNodes;                  //@synthesize componentNodes=_componentNodes - In the implementation block
@property (nonatomic,readonly) NSDictionary * mappedComponentNodes;              //@synthesize mappedComponentNodes=_mappedComponentNodes - In the implementation block
-(id)debugDescription;
-(void)addDependency:(id)arg1 ;
-(void)reset;
-(id)initWithComponentIdentifiers:(id)arg1 ;
-(id)solvableOrder;
-(id)componentNodeForComponentIdentifier:(id)arg1 andAttribute:(long long)arg2 ;
-(id)componentNodesDependentOnComponentNode:(id)arg1 ;
-(id)createComponentNodesForComponentIdentifiers:(id)arg1 ;
-(void)addComponentNode:(id)arg1 ;
-(NSMutableArray *)componentNodes;
-(NSArray *)solvedComponentNodes;
-(id)solvedOrderForComponentNodes:(id)arg1 ;
-(void)resolveStack:(id)arg1 withSolvedNodes:(id)arg2 ;
-(NSDictionary *)mappedComponentNodes;
@end

