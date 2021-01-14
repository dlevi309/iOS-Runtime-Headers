/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)gridWidth;
-(unsigned long long)gridHeight;
-(id)initWithCoder:(id)arg1 ;
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

