/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface GKGraph : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _nodes;
	GKCGraph* _cGraph;
	NSMutableDictionary* __info;

}

@property (nonatomic,retain) NSMutableDictionary * _info;              //@synthesize _info=__info - In the implementation block
@property (nonatomic,readonly) NSArray * nodes; 
+(BOOL)supportsSecureCoding;
+(id)graph;
+(id)graphWithNodes:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(NSMutableDictionary *)_info;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)nodes;
-(void)set_info:(NSMutableDictionary *)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(id)initWithNodes:(id)arg1 ;
-(GKCGraph*)makeCGraph;
-(GKCGraph*)cGraph;
-(id)nodesMut;
-(void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(BOOL)arg2 ;
-(void)addNodes:(id)arg1 ;
-(id)findPathFromNode:(id)arg1 toNode:(id)arg2 ;
@end

