/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableDictionary, NSString, SKTileGroupRule, NSArray;

@interface SKTileDefinition : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _textures;
	NSMutableArray* _normals;
	unsigned long long _orientation;
	BOOL _frameDidChange;
	BOOL _nextFrameAffectsVertexBuffer;
	unsigned short _currentFrameIndex;
	float _currentFrameTime;
	NSMutableDictionary* _userData;
	NSString* _name;
	double _timePerFrame;
	unsigned long long _placementWeight;
	SKTileGroupRule* _parentRule;
	NSString* _uid;
	double _lastTargetTime;
	CGSize _size;

}

@property (assign,nonatomic,__weak) SKTileGroupRule * parentRule;              //@synthesize parentRule=_parentRule - In the implementation block
@property (nonatomic,retain) NSString * uid;                                   //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) unsigned short currentFrameIndex;                 //@synthesize currentFrameIndex=_currentFrameIndex - In the implementation block
@property (assign,nonatomic) double lastTargetTime;                            //@synthesize lastTargetTime=_lastTargetTime - In the implementation block
@property (assign,nonatomic) float currentFrameTime;                           //@synthesize currentFrameTime=_currentFrameTime - In the implementation block
@property (assign,nonatomic) BOOL frameDidChange;                              //@synthesize frameDidChange=_frameDidChange - In the implementation block
@property (assign,nonatomic) BOOL nextFrameAffectsVertexBuffer;                //@synthesize nextFrameAffectsVertexBuffer=_nextFrameAffectsVertexBuffer - In the implementation block
@property (nonatomic,copy) NSArray * textures; 
@property (nonatomic,copy) NSArray * normalTextures; 
@property (nonatomic,retain) NSMutableDictionary * userData;                   //@synthesize userData=_userData - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGSize size;                                      //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double timePerFrame;                              //@synthesize timePerFrame=_timePerFrame - In the implementation block
@property (assign,nonatomic) unsigned long long placementWeight;               //@synthesize placementWeight=_placementWeight - In the implementation block
@property (assign,nonatomic) unsigned long long rotation; 
@property (assign,nonatomic) BOOL flipVertically; 
@property (assign,nonatomic) BOOL flipHorizontally; 
+(BOOL)supportsSecureCoding;
+(id)tileDefinitionWithTexture:(id)arg1 ;
+(id)tileDefinitionWithTexture:(id)arg1 size:(CGSize)arg2 ;
+(id)tileDefinitionWithTexture:(id)arg1 normalTexture:(id)arg2 size:(CGSize)arg3 ;
+(id)tileDefinitionWithTextures:(id)arg1 size:(CGSize)arg2 timePerFrame:(double)arg3 ;
+(id)tileDefinitionWithTextures:(id)arg1 normalTextures:(id)arg2 size:(CGSize)arg3 timePerFrame:(double)arg4 ;
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGSize)size;
-(NSString *)uid;
-(void)setSize:(CGSize)arg1 ;
-(unsigned long long)rotation;
-(void)setRotation:(unsigned long long)arg1 ;
-(void)setUid:(NSString *)arg1 ;
-(NSMutableDictionary *)userData;
-(void)setUserData:(NSMutableDictionary *)arg1 ;
-(NSArray *)textures;
-(void)setTextures:(NSArray *)arg1 ;
-(BOOL)flipVertically;
-(BOOL)flipHorizontally;
-(SKTileGroupRule *)parentRule;
-(unsigned short)currentFrameIndex;
-(BOOL)isEqualToNode:(id)arg1 ;
-(double)timePerFrame;
-(void)setTimePerFrame:(double)arg1 ;
-(void)setParentRule:(SKTileGroupRule *)arg1 ;
-(unsigned long long)placementWeight;
-(id)initWithTexture:(id)arg1 ;
-(double)lastTargetTime;
-(BOOL)frameDidChange;
-(BOOL)nextFrameAffectsVertexBuffer;
-(void)setFrameDidChange:(BOOL)arg1 ;
-(void)setLastTargetTime:(double)arg1 ;
-(float)currentFrameTime;
-(void)setCurrentFrameTime:(float)arg1 ;
-(void)setCurrentFrameIndex:(unsigned short)arg1 ;
-(void)setNextFrameAffectsVertexBuffer:(BOOL)arg1 ;
-(NSArray *)normalTextures;
-(void)setPlacementWeight:(unsigned long long)arg1 ;
-(void)setNormalTextures:(NSArray *)arg1 ;
-(void)setDataWithTexture:(id)arg1 normalTexture:(id)arg2 tileName:(id)arg3 size:(CGSize)arg4 ;
-(void)setDataWithTextures:(id)arg1 normalTextures:(id)arg2 timePerFrame:(double)arg3 tileName:(id)arg4 size:(CGSize)arg5 ;
-(id)initWithTexture:(id)arg1 size:(CGSize)arg2 ;
-(id)initWithTexture:(id)arg1 normalTexture:(id)arg2 size:(CGSize)arg3 ;
-(id)initWithTextures:(id)arg1 size:(CGSize)arg2 timePerFrame:(double)arg3 ;
-(id)initWithTextures:(id)arg1 normalTextures:(id)arg2 size:(CGSize)arg3 timePerFrame:(double)arg4 ;
-(void)setFlipVertically:(BOOL)arg1 ;
-(void)setFlipHorizontally:(BOOL)arg1 ;
@end

