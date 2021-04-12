/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraph.h>

@interface GKGridGraph : GKGraph {

	GKCGridGraph* _cGridGraph;
	BOOL _diagonalsAllowed;

}

@property (nonatomic,readonly)  gridOrigin; 
@property (nonatomic,readonly) unsigned long long gridWidth; 
@property (nonatomic,readonly) unsigned long long gridHeight; 
@property (nonatomic,readonly) BOOL diagonalsAllowed;                      //@synthesize diagonalsAllowed=_diagonalsAllowed - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 ;
+(id)graphFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed:(Class)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)gridWidth;
-(unsigned long long)gridHeight;
-(void)removeNodes:(id)arg1 ;
-(GKCGraph*)makeCGraph;
-(Class)classForGenericArgumentAtIndex:(unsigned long long)arg1 ;
-(id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 ;
-(id)initFromGridStartingAt:(int)arg1 width:(int)arg2 height:(BOOL)arg3 diagonalsAllowed:(Class)arg4 ;
-()gridOrigin;
-(GKCGridGraph*)cGridGraph;
-(id)nodeAtGridPosition:;
-(id)nodeAtGridPositionNoNilCheck:;
-(void)connectNodeToAdjacentNodes:(id)arg1 ;
-(BOOL)diagonalsAllowed;
@end

