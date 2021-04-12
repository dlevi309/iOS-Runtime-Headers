/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class SKTileSet, NSString, UIColor, SKShader, NSDictionary;

@interface SKTileMapNode : SKNode <NSCopying, NSSecureCoding> {

	SKCTileMapNode* _skcTileMapNode;
	SKTileSet* _tileSet;
	CGSize _tileSize;
	 _isoOrigin;
	 _isoColumnVector;
	 _isoRowVector;
	float _isoColumnWidth;
	float _isoRowHeight;
	float _isoHeightScalar;
	float _hexRadius;
	BOOL _enableAutomapping;
	NSString* _tileSetName;

}

@property (nonatomic,retain) NSString * tileSetName;                          //@synthesize tileSetName=_tileSetName - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns; 
@property (assign,nonatomic) unsigned long long numberOfRows; 
@property (assign,nonatomic) CGSize tileSize; 
@property (nonatomic,readonly) CGSize mapSize; 
@property (nonatomic,retain) SKTileSet * tileSet; 
@property (assign,nonatomic) double colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) long long blendMode; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (nonatomic,retain) SKShader * shader; 
@property (nonatomic,copy) NSDictionary * attributeValues; 
@property (assign,nonatomic) unsigned lightingBitMask; 
@property (assign,nonatomic) BOOL enableAutomapping; 
+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4 ;
+(id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 ;
+(id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 fillWithTileGroup:(id)arg5 ;
+(id)tileMapNodeWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 tileGroupLayout:(id)arg5 ;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
-(double)alpha;
-(void)setColor:(UIColor *)arg1 ;
-(void)commonInit;
-(unsigned long long)numberOfColumns;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRows;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(void)removeAllTiles;
-(void)setTileSize:(CGSize)arg1 ;
-(CGSize)tileSize;
-(void)setTileSet:(SKTileSet *)arg1 ;
-(SKTileSet *)tileSet;
-(CGSize)mapSize;
-(BOOL)isEqualToNode:(id)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(id)tileDefinitionForTileID:(unsigned)arg1 ;
-(void)setColorBlendFactor:(double)arg1 ;
-(void)setColumns:(unsigned long long)arg1 andRows:(long long)arg2 ;
-(void)calculateSize;
-(void)rebuildTileSprites;
-(BOOL)shouldUnarchiveTileSet;
-(void)setTileSetName:(NSString *)arg1 ;
-(NSString *)tileSetName;
-(void)setShader:(SKShader *)arg1 ;
-(void)setLightingBitMask:(unsigned)arg1 ;
-(double)colorBlendFactor;
-(SKShader *)shader;
-(unsigned)lightingBitMask;
-(BOOL)enableAutomapping;
-(void)setStartData:(unsigned long long)arg1 rows:(unsigned long long)arg2 tileSize:(CGSize)arg3 tileSet:(id)arg4 ;
-(void)fillWithTileGroup:(id)arg1 ;
-(id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 ;
-(id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 fillWithTileGroup:(id)arg5 ;
-(id)initWithTileSet:(id)arg1 columns:(unsigned long long)arg2 rows:(unsigned long long)arg3 tileSize:(CGSize)arg4 tileGroupLayout:(id)arg5 ;
-(void)updateTileGroupsAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 ;
-(void)updateTileDefinitionWithoutAutomappingAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 ;
-(unsigned)getTileIDWithTileGroup:(id)arg1 andTileDefinition:(id)arg2 ;
-(id)valueForAttributeNamed:(id)arg1 ;
-(void)setValue:(id)arg1 forAttributeNamed:(id)arg2 ;
-(void)setEnableAutomapping:(BOOL)arg1 ;
-(void)setRawTiles:(unsigned*)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3 ;
-(void)fillWithTileDefinition:(id)arg1 ;
-(id)tileDefinitionAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 ;
-(id)tileGroupAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 ;
-(void)setTileGroup:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 ;
-(void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4 ;
-(void)setTileGroupWithoutUpdate:(id)arg1 forColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 ;
-(void)setTileGroupWithoutUpdate:(id)arg1 tileDefinition:(id)arg2 forColumn:(unsigned long long)arg3 row:(unsigned long long)arg4 ;
-(void)setTileGroup:(id)arg1 forTileIndicies:(id)arg2 ;
-(void)setTileGroup:(id)arg1 andTileDefinition:(id)arg2 forTileIndicies:(id)arg3 ;
-(void)validateAllTiles;
-(void)fillArrayWithTiles:(unsigned*)arg1 ;
-(void)fillArray:(unsigned*)arg1 withTilesFromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5 ;
-(void)setTilesFromArray:(unsigned*)arg1 ;
-(void)setTilesFromArray:(unsigned*)arg1 fromColumn:(unsigned long long)arg2 row:(unsigned long long)arg3 forWidth:(unsigned long long)arg4 height:(unsigned long long)arg5 ;
-(void)clearModifiedTileTracking;
-(void)getTileModifiedData:(long long*)arg1 outMinRowModified:(long long*)arg2 outMaxColumnModified:(long long*)arg3 outmaxRowModified:(long long*)arg4 ;
-(unsigned long long)tileColumnIndexFromPosition:(CGPoint)arg1 ;
-(unsigned long long)tileRowIndexFromPosition:(CGPoint)arg1 ;
-(CGPoint)centerOfTileAtColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 ;
-(id)createTileStampFromColumn:(unsigned long long)arg1 row:(unsigned long long)arg2 withWidth:(unsigned long long)arg3 height:(unsigned long long)arg4 addToTileSet:(BOOL)arg5 ;
-(void)applyTileStamp:(id)arg1 inColumn:(long long)arg2 row:(long long)arg3 ;
-(void)forceRedraw;
@end

