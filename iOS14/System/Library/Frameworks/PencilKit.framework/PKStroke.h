/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKInk, NSUUID, PKStrokePath, NSArray, _PKStrokeClipPlane, PKStrokeRenderMask, UIBezierPath;

@interface PKStroke : NSObject <NSCopying> {

	shared_ptr<PKProtobufUnknownFields>* _unknownFields;
	CGRect _cachedBounds;
	double _cachedMaxWidthForStroke;
	PKInk* _ink;
	SCD_Struct_PK29 _flags;
	NSUUID* _strokeUUID;
	PKStrokePath* _strokeData;
	NSArray* _substrokes;
	_PKStrokeClipPlane* _clipPlane;
	PKStrokeRenderMask* _renderMask;
	NSUUID* _groupID;
	long long _shapeType;
	PKStrokeID _version;
	PKStrokeID _sortID;
	PKStrokeID _substrokesVersion;
	CGAffineTransform _transform;

}

@property (nonatomic,copy) _PKStrokeClipPlane * _clipPlane;                                        //@synthesize clipPlane=_clipPlane - In the implementation block
@property (nonatomic,copy) PKStrokeRenderMask * _renderMask;                                       //@synthesize renderMask=_renderMask - In the implementation block
@property (nonatomic,copy) NSUUID * _groupID;                                                      //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) SCD_Struct_PK30 _flags;                                               //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long _shapeType;                                                 //@synthesize shapeType=_shapeType - In the implementation block
@property (assign,setter=_setHidden:,getter=_isHidden,nonatomic) BOOL _hidden; 
@property (nonatomic,readonly) BOOL _isFullyHidden; 
@property (assign,setter=_setIsNewCopy:,getter=_isNewCopy,nonatomic) BOOL _isNewCopy; 
@property (nonatomic,retain) PKStrokePath * _strokeData; 
@property (nonatomic,readonly) NSUUID * _strokeDataUUID; 
@property (assign,setter=_setBounds:,nonatomic) CGRect _bounds; 
@property (nonatomic,readonly) CGRect _untransformedBounds; 
@property (nonatomic,readonly) unsigned _randomSeed; 
@property (nonatomic,retain) PKInk * ink;                                                          //@synthesize ink=_ink - In the implementation block
@property (setter=_setStrokeUUID:,nonatomic,retain) NSUUID * _strokeUUID;                          //@synthesize strokeUUID=_strokeUUID - In the implementation block
@property (nonatomic,readonly) BOOL _isInternal; 
@property (assign,nonatomic) PKStrokeID _sortID;                                                   //@synthesize sortID=_sortID - In the implementation block
@property (assign,nonatomic) PKStrokeID _version;                                                  //@synthesize version=_version - In the implementation block
@property (assign,setter=_setTransform:,nonatomic) CGAffineTransform _transform;                   //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) PKStrokeID _substrokesVersion;                                        //@synthesize substrokesVersion=_substrokesVersion - In the implementation block
@property (nonatomic,retain) NSArray * _substrokes;                                                //@synthesize substrokes=_substrokes - In the implementation block
@property (nonatomic,readonly) CGAffineTransform transform; 
@property (nonatomic,readonly) PKStrokePath * path;                                                //@synthesize strokeData=_strokeData - In the implementation block
@property (nonatomic,readonly) UIBezierPath * mask; 
@property (nonatomic,readonly) CGRect renderBounds; 
@property (nonatomic,readonly) NSArray * maskedPathRanges; 
+(id)copyStrokes:(id)arg1 hidden:(BOOL)arg2 ;
+(long long)_asciiDimensionForBoundsDimension:(double)arg1 ;
+(long long)_asciiBitfieldIndexForX:(long long)arg1 y:(long long)arg2 width:(long long)arg3 ;
+(id)_testStrokeFromPoints:(PKCompressedStrokePoint*)arg1 length:(long long)arg2 ink:(id)arg3 ;
+(PKCompressedStrokePoint)_compressStrokePoint:(PKStrokePoint)arg1 withTimestamp:(double)arg2 ;
+(PKStrokePoint)_decompressStrokePoint:(PKCompressedStrokePoint)arg1 withTimestamp:(double)arg2 ;
-(SCD_Struct_PK30)_flags;
-(id)debugQuickLookObject;
-(CGAffineTransform)_transform;
-(double)_timestamp;
-(CGRect)bounds;
-(PKInk *)ink;
-(UIBezierPath *)mask;
-(void)_setTransform:(CGAffineTransform)arg1 ;
-(id)dataRepresentation;
-(CGRect)_bounds;
-(void)saveToArchive:(StrokeDelta*)arg1 ;
-(id)_ink;
-(id)init;
-(PKStrokeID)_version;
-(void)_setHidden:(BOOL)arg1 ;
-(double)timestamp;
-(double)timestampAtIndex:(unsigned long long)arg1 ;
-(double)startTimestamp;
-(PKStrokePath *)path;
-(id)_ascii;
-(PKStrokeID)_sortID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)_pointsCount;
-(CGAffineTransform)transform;
-(id)description;
-(NSUUID *)_groupID;
-(BOOL)_isHidden;
-(unsigned)_randomSeed;
-(double)endTimestamp;
-(void)setInk:(PKInk *)arg1 ;
-(void)_setBounds:(CGRect)arg1 ;
-(CGRect)_calculateBounds;
-(long long)_inputType;
-(unsigned long long)hash;
-(id)initWithArchive:(const StrokeDelta*)arg1 error:(id*)arg2 ;
-(CGRect)renderBounds;
-(CGPoint)locationAtIndex:(unsigned long long)arg1 ;
-(BOOL)_isInternal;
-(void)_setInk:(id)arg1 ;
-(id)deltaTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(_PKStrokeClipPlane *)_clipPlane;
-(CGRect)_untransformedBounds;
-(void)generateClipPaths:(vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg1 transform:(CGAffineTransform)arg2 ;
-(BOOL)_shouldBeClippedAgainstLegacyCanvas;
-(id)copyForMutation;
-(void)set_version:(PKStrokeID)arg1 ;
-(void)set_clipPlane:(_PKStrokeClipPlane *)arg1 ;
-(void)set_renderMask:(PKStrokeRenderMask *)arg1 ;
-(id)initWithStroke:(id)arg1 ;
-(NSUUID *)_strokeUUID;
-(id)_sliceWithSlicingBlock:(/*^block*/id)arg1 replica:(id)arg2 ;
-(NSArray *)_substrokes;
-(id)copyForMutationWithSubstrokes:(id)arg1 ;
-(void)set_substrokes:(NSArray *)arg1 ;
-(PKStrokeID)_substrokesVersion;
-(void)set_substrokesVersion:(PKStrokeID)arg1 ;
-(BOOL)intersectsPoint:(CGPoint)arg1 boundsOutset:(double)arg2 minimumStrokeThreshold:(double)arg3 ;
-(long long)_shapeType;
-(PKStrokeRenderMask *)_renderMask;
-(void)set_groupID:(NSUUID *)arg1 ;
-(double)_maxWidthForStroke;
-(CGPathRef)selectionPathRepresentationWithPointsCount:(int*)arg1 ;
-(void)enumeratePointsWithDistanceStep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(PKStrokePath *)_strokeData;
-(long long)compareToStroke:(id)arg1 ;
-(void)enumeratePointsWithTimestep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithArchive:(const Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 transientArchiveDictionary:(id)arg4 ;
-(unsigned)saveToArchive:(Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(BOOL)arg4 transient:(BOOL)arg5 ;
-(void)set_strokeData:(PKStrokePath *)arg1 ;
-(id)strokeApplying:(id)arg1 ;
-(CGPathRef)_newPathRepresentation;
-(NSUUID *)_strokeDataUUID;
-(CGPoint)_locationAtIndex:(unsigned long long)arg1 ;
-(long long)_visibleSubstrokeCount;
-(void)_addVisibleSubstrokesTo:(id)arg1 ;
-(void)set_sortID:(PKStrokeID)arg1 ;
-(id)initWithStroke:(id)arg1 hidden:(BOOL)arg2 version:(PKStrokeID)arg3 ink:(id)arg4 transform:(CGAffineTransform)arg5 ;
-(void)_setStrokeUUID:(id)arg1 ;
-(void)set_flags:(SCD_Struct_PK30)arg1 ;
-(id)initWithData:(id)arg1 id:(id)arg2 sortID:(PKStrokeID)arg3 timestamp:(double)arg4 flags:(SCD_Struct_PK30)arg5 version:(PKStrokeID)arg6 ink:(id)arg7 transform:(CGAffineTransform)arg8 substrokes:(id)arg9 substrokesVersion:(PKStrokeID)arg10 ;
-(id)_updateStroke:(/*^block*/id)arg1 ;
-(id)_mergeWithStroke:(id)arg1 ;
-(BOOL*)_newAsciiBitfield;
-(void)_addTestDataToUnknownFields;
-(id)_dataInUnknownFields;
-(id)_initWithPath:(CGPathRef)arg1 ink:(id)arg2 maxSegmentLength:(double)arg3 inputScale:(double)arg4 velocityForDistanceFunction:(/*^block*/id)arg5 ;
-(id)initWithStroke:(id)arg1 hidden:(BOOL)arg2 version:(PKStrokeID)arg3 ;
-(void)set_shapeType:(long long)arg1 ;
-(id)initWithInk:(id)arg1 strokePath:(id)arg2 transform:(CGAffineTransform)arg3 mask:(id)arg4 ;
-(id)initWithInk:(id)arg1 strokePath:(id)arg2 transform:(CGAffineTransform)arg3 ;
-(void)_consumeRenderVertexes:(/*^block*/id)arg1 ;
-(void)interpolatePointDataWithStep:(double)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)descriptionAtDepth:(long long)arg1 ;
-(BOOL*)_newAsciiBitfieldWithWidth:(long long)arg1 height:(long long)arg2 ;
-(id)_substrokeWithRange:(NSRange)arg1 ;
-(id)_initWithStroke:(id)arg1 strokeData:(id)arg2 ;
-(CGPoint)_locationAtIndex:(unsigned long long)arg1 applyStrokeTransform:(BOOL)arg2 ;
-(id)_initWithPath:(CGPathRef)arg1 ink:(id)arg2 inputScale:(double)arg3 ;
-(id)initWithStroke:(id)arg1 hidden:(BOOL)arg2 version:(PKStrokeID)arg3 transform:(CGAffineTransform)arg4 ;
-(id)initWithData:(id)arg1 id:(id)arg2 sortID:(PKStrokeID)arg3 timestamp:(double)arg4 hidden:(BOOL)arg5 version:(PKStrokeID)arg6 ink:(id)arg7 transform:(CGAffineTransform)arg8 substrokes:(id)arg9 substrokesVersion:(PKStrokeID)arg10 ;
-(BOOL)_isFullyHidden;
-(BOOL)_isNewCopy;
-(void)_setIsNewCopy:(BOOL)arg1 ;
-(CGPathRef)newPathRepresentation;
-(void)_invalidateBounds;
-(void)_appendPointsOfInterestForSelection:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 ;
-(id)substrokeWithRange:(NSRange)arg1 ;
-(double)_timestampAtIndex:(unsigned long long)arg1 ;
-(BOOL)_containsSamePointsAsStroke:(id)arg1 ;
-(NSArray *)maskedPathRanges;
-(CGPoint)intersectionFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
-(unique_ptr<std::__1::vector<PKCompressedStrokePoint, std::__1::allocator<PKCompressedStrokePoint> >, std::__1::default_delete<std::__1::vector<PKCompressedStrokePoint, std::__1::allocator<PKCompressedStrokePoint> > > >*)_compressedStrokePoints;
-(BOOL)_visitVisibleSubstrokes:(/*^block*/id)arg1 ;
-(void)interpolatePointDataWithStep:(double)arg1 from:(double)arg2 to:(double)arg3 usingBlock:(/*^block*/id)arg4 ;
-(double)_thresholdForPoint:(PKStrokePoint)arg1 ;
-(id)_mergeUnparentedWithStroke:(id)arg1 ;
-(id)_updateWithParent:(id)arg1 ;
-(id)mergeArrayOfStrokes:(id)arg1 with:(id)arg2 ;
-(void)debugRender:(CGContextRef)arg1 ;
-(vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)newOutlinePaths;
-(BOOL)intersectsPoint:(CGPoint)arg1 ;
-(BOOL)intersectsLineFrom:(CGPoint)arg1 to:(CGPoint)arg2 minThreshold:(double)arg3 ;
-(BOOL)intersectsClosedStroke:(id)arg1 ;
-(id)initWithV1Archive:(const Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 ;
-(id)initWithLegacyArchive:(const Command*)arg1 sortedUUIDs:(id)arg2 ;
-(void)saveUUIDsTo:(id)arg1 ;
-(void)saveInksTo:(id)arg1 ;
-(unsigned)saveToV1Archive:(Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(BOOL)arg4 transient:(BOOL)arg5 ;
-(id)initWithArchive:(const Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 parent:(id)arg4 isHidden:(BOOL)arg5 transientArchiveDictionary:(id)arg6 ;
-(PKStrokeID)readStrokeIDFromArchive:(const StrokeID*)arg1 withSortedUUIDs:(id)arg2 ;
-(unsigned)saveToArchive:(Stroke*)arg1 sortedUUIDs:(id)arg2 inks:(id)arg3 withPathData:(BOOL)arg4 parent:(id)arg5 transient:(BOOL)arg6 ;
-(void)saveStrokeID:(const PKStrokeID*)arg1 toArchive:(StrokeID*)arg2 withSortedUUIDs:(id)arg3 ;
-(PKStrokeID)readV1StrokeIDFromArchive:(const StrokeID*)arg1 withSortedUUIDs:(id)arg2 ;
-(PKStrokePoint)readPointFromLegacyArchive:(const Point*)arg1 deltaFrom:(const PKStrokePoint*)arg2 ;
-(void)saveV1StrokeID:(const PKStrokeID*)arg1 toArchive:(StrokeID*)arg2 withSortedUUIDs:(id)arg3 ;
-(CGPoint)readPointFromArchive:(const Point*)arg1 ;
@end

