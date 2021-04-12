/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setParentGroup:(SKTileGroup *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)copy;
-(id)initWithCoder:(id)arg1 ;
-(SKTileGroup *)parentGroup;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)adjacency;
-(void)setAdjacency:(unsigned long long)arg1 ;
-(void)setTileDefinitionParentPointers;
-(NSArray *)tileDefinitions;
-(void)setTileDefinitions:(NSArray *)arg1 ;
-(NSArray *)tileDefinitionIDs;
-(void)setTileDefinitionIDs:(NSArray *)arg1 ;
-(id)initWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2 ;
-(void)calcTileDefinitionIDsWithTileSet:(id)arg1 ;
-(void)setTileDefinitionsFromIDsWithTileSet:(id)arg1 ;
@end

