/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)graph;
+(BOOL)supportsSecureCoding;
+(id)graphWithNodes:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)set_info:(NSMutableDictionary *)arg1 ;
-(GKCGraph*)cGraph;
-(id)initWithNodes:(id)arg1 ;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(void)removeNodes:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)nodes;
-(void)dealloc;
-(NSMutableDictionary *)_info;
-(void)addNodes:(id)arg1 ;
-(GKCGraph*)makeCGraph;
-(id)nodesMut;
-(void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(BOOL)arg2 ;
-(id)findPathFromNode:(id)arg1 toNode:(id)arg2 ;
@end

