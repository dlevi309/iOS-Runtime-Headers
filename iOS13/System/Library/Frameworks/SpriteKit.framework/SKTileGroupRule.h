/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, SKTileGroup, NSArray;

@interface SKTileGroupRule : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _tileDefinitions;
	NSMutableArray* _tileDefinitionIDs;
	unsigned char _adjacency;
	NSString* _name;
	SKTileGroup* _parentGroup;

}

@property (nonatomic,readonly) NSArray * tileDefinitionIDs; 
@property (assign,nonatomic,__weak) SKTileGroup * parentGroup;              //@synthesize parentGroup=_parentGroup - In the implementation block
@property (assign,nonatomic) unsigned long long adjacency; 
@property (nonatomic,copy) NSArray * tileDefinitions; 
@property (nonatomic,copy) NSString * name;                                 //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)tileGroupRuleWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(SKTileGroup *)parentGroup;
-(void)setParentGroup:(SKTileGroup *)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)setTileDefinitionParentPointers;
-(unsigned long long)adjacency;
-(void)setAdjacency:(unsigned long long)arg1 ;
-(NSArray *)tileDefinitions;
-(void)setTileDefinitions:(NSArray *)arg1 ;
-(NSArray *)tileDefinitionIDs;
-(void)setTileDefinitionIDs:(NSArray *)arg1 ;
-(id)initWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2 ;
-(void)calcTileDefinitionIDsWithTileSet:(id)arg1 ;
-(void)setTileDefinitionsFromIDsWithTileSet:(id)arg1 ;
@end

