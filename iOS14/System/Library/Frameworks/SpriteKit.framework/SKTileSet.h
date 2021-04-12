/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray, SKTileGroup, NSString;

@interface SKTileSet : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _definitions;
	NSMutableArray* _groups;
	NSArray* _stamps;
	unsigned long long _type;
	CGSize _defaultTileSize;
	SKTileGroup* _defaultTileGroup;
	NSString* _name;

}

@property (nonatomic,readonly) NSArray * tileDefinitions; 
@property (nonatomic,retain) NSArray * stamps; 
@property (nonatomic,copy) NSArray * tileGroups; 
@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long type; 
@property (nonatomic,retain) SKTileGroup * defaultTileGroup; 
@property (assign,nonatomic) CGSize defaultTileSize; 
+(BOOL)supportsSecureCoding;
+(id)recursivePathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
+(id)findTileSetInBundleNamed:(id)arg1 ;
+(id)tileSetWithTileGroups:(id)arg1 ;
+(id)tileSetWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2 ;
+(id)tileSetNamed:(id)arg1 ;
+(id)tileSetFromURL:(id)arg1 ;
+(void)clearTileSetTableCache;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(void)commonInit;
-(NSString *)name;
-(NSArray *)stamps;
-(id)copy;
-(void)setTileGroups:(NSArray *)arg1 ;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqualToNode:(id)arg1 ;
-(CGSize)defaultTileSize;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)tileGroups;
-(void)dealloc;
-(NSArray *)tileDefinitions;
-(void)unobserveAllTileDefinitions;
-(void)lookForMissingDefinitionsInGroups;
-(void)updateTileDefinitionIDsInGroupRules;
-(void)setGroupParentPointers;
-(SKTileGroup *)defaultTileGroup;
-(void)observeTileDefinition:(id)arg1 ;
-(void)removeTileDefinitionObservers:(id)arg1 ;
-(void)calcDefaultTileSize;
-(id)initWithTileGroups:(id)arg1 ;
-(id)initWithTileGroups:(id)arg1 tileSetType:(unsigned long long)arg2 ;
-(void)setDefaultTileGroup:(SKTileGroup *)arg1 ;
-(void)setDefaultTileSize:(CGSize)arg1 ;
-(void)setStamps:(NSArray *)arg1 ;
-(void)observeAllTileDefinitions;
-(id)findTileDefinitionForGroup:(id)arg1 withGroupAdjacency:(unsigned long long*)arg2 ;
-(id)findTileDefinitionsForGroup:(id)arg1 withGroupAdjacency:(unsigned long long*)arg2 ;
-(id)getCenterTileDefinitionForGroup:(id)arg1 withRequiredOutputGroupAdjacency:(unsigned long long*)arg2 ;
@end

