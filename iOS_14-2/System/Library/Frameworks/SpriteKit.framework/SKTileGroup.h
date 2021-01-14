/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, SKTileSet, NSArray;

@interface SKTileGroup : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _rules;
	unsigned long long _type;
	NSString* _name;
	SKTileSet* _parentSet;

}

@property (assign,nonatomic,__weak) SKTileSet * parentSet;              //@synthesize parentSet=_parentSet - In the implementation block
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,copy) NSArray * rules; 
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)emptyTileGroup;
+(id)tileGroupWithRules:(id)arg1 ;
+(id)tileGroupWithTileDefinition:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRules:(NSArray *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)copy;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(NSArray *)rules;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setRuleParentPointers;
-(id)initWithTileDefinition:(id)arg1 ;
-(id)initWithRules:(id)arg1 ;
-(unsigned long long)findTileDefinitionIndexForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2 ;
-(id)findTileDefinitionIDsForAdjacencyData:(unsigned long long)arg1 tileSetType:(unsigned long long)arg2 ;
-(SKTileSet *)parentSet;
-(void)setParentSet:(SKTileSet *)arg1 ;
@end

