/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


#import <NotesShared/NotesShared-Structs.h>
@interface ICDrawingCommandData : NSObject {

	CGRect _cachedBounds;
	vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint> >* _points;
	BOOL _isClipped;
	unsigned _type;
	CGColorRef _color;
	CGPoint _clipOrigin;
	CGPoint _clipNormal;
	SCD_Struct_IC19 _parameters;
	ICDrawingCommandID _commandID;
	SCD_Struct_IC21 _baseValues;

}

@property (assign,nonatomic) unsigned type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) CGColorRef color;                                   //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) SCD_Struct_IC22 baseValues;                         //@synthesize baseValues=_baseValues - In the implementation block
@property (assign,nonatomic) SCD_Struct_IC19 parameters;                         //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned randomSeed; 
@property (assign) BOOL isClipped;                                               //@synthesize isClipped=_isClipped - In the implementation block
@property (assign,nonatomic) CGPoint clipOrigin;                                 //@synthesize clipOrigin=_clipOrigin - In the implementation block
@property (assign,nonatomic) CGPoint clipNormal;                                 //@synthesize clipNormal=_clipNormal - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) ICDrawingCommandID commandID;                       //@synthesize commandID=_commandID - In the implementation block
@property (nonatomic,readonly) vector<ICDrawingOutputPoint* points;              //@synthesize points=_points - In the implementation block
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)type;
-(void)setType:(unsigned)arg1 ;
-(SCD_Struct_IC19)parameters;
-(CGRect)bounds;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setParameters:(SCD_Struct_IC19)arg1 ;
-(vector<ICDrawingOutputPoint*)points;
-(ICDrawingCommandID)commandID;
-(void)setCommandID:(ICDrawingCommandID)arg1 ;
-(double)renderCost;
-(void)invalidateBounds;
-(SCD_Struct_IC22)readPointFromArchive:(const Point*)arg1 deltaFrom:(const SCD_Struct_IC22*)arg2 ;
-(void)setBaseValues:(SCD_Struct_IC22)arg1 ;
-(SCD_Struct_IC19)version1Parameters;
-(SCD_Struct_IC22)baseValues;
-(void)setIsClipped:(BOOL)arg1 ;
-(void)setClipOrigin:(CGPoint)arg1 ;
-(void)setClipNormal:(CGPoint)arg1 ;
-(unsigned)savePoint:(const SCD_Struct_IC22*)arg1 deltaFrom:(const SCD_Struct_IC22*)arg2 toArchive:(Point*)arg3 ;
-(BOOL)isClipped;
-(CGPoint)clipOrigin;
-(CGPoint)clipNormal;
-(id)initWithArchive:(const Command*)arg1 version:(unsigned)arg2 sortedUUIDs:(id)arg3 ;
-(unsigned)saveToArchive:(Command*)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3 isHidden:(BOOL)arg4 ;
-(BOOL)isEqualDrawingCommandData:(id)arg1 ;
-(unsigned)randomSeed;
@end

