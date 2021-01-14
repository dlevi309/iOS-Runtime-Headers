/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_IC18 _parameters;
	ICDrawingCommandID _commandID;
	SCD_Struct_IC20 _baseValues;

}

@property (assign,nonatomic) unsigned type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) CGColorRef color;                                   //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) SCD_Struct_IC21 baseValues;                         //@synthesize baseValues=_baseValues - In the implementation block
@property (assign,nonatomic) SCD_Struct_IC18 parameters;                         //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) unsigned randomSeed; 
@property (assign) BOOL isClipped;                                               //@synthesize isClipped=_isClipped - In the implementation block
@property (assign,nonatomic) CGPoint clipOrigin;                                 //@synthesize clipOrigin=_clipOrigin - In the implementation block
@property (assign,nonatomic) CGPoint clipNormal;                                 //@synthesize clipNormal=_clipNormal - In the implementation block
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) ICDrawingCommandID commandID;                       //@synthesize commandID=_commandID - In the implementation block
@property (nonatomic,readonly) vector<ICDrawingOutputPoint* points;              //@synthesize points=_points - In the implementation block
-(SCD_Struct_IC18)parameters;
-(void)setParameters:(SCD_Struct_IC18)arg1 ;
-(CGRect)bounds;
-(ICDrawingCommandID)commandID;
-(id)init;
-(CGColorRef)color;
-(void)setType:(unsigned)arg1 ;
-(SCD_Struct_IC21)readPointFromArchive:(const Point*)arg1 deltaFrom:(const SCD_Struct_IC21*)arg2 ;
-(void)setBaseValues:(SCD_Struct_IC21)arg1 ;
-(SCD_Struct_IC18)version1Parameters;
-(void)setIsClipped:(BOOL)arg1 ;
-(void)setClipOrigin:(CGPoint)arg1 ;
-(void)setClipNormal:(CGPoint)arg1 ;
-(unsigned)savePoint:(const SCD_Struct_IC21*)arg1 deltaFrom:(const SCD_Struct_IC21*)arg2 toArchive:(Point*)arg3 ;
-(BOOL)isClipped;
-(CGPoint)clipOrigin;
-(CGPoint)clipNormal;
-(id)initWithArchive:(const Command*)arg1 version:(unsigned)arg2 sortedUUIDs:(id)arg3 ;
-(unsigned)saveToArchive:(Command*)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3 isHidden:(BOOL)arg4 ;
-(unsigned)randomSeed;
-(id)description;
-(void)setColor:(CGColorRef)arg1 ;
-(unsigned)type;
-(unsigned long long)hash;
-(void)setCommandID:(ICDrawingCommandID)arg1 ;
-(void)invalidateBounds;
-(SCD_Struct_IC21)baseValues;
-(vector<ICDrawingOutputPoint*)points;
-(BOOL)isEqualDrawingCommandData:(id)arg1 ;
-(double)renderCost;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

