/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/CHQueryDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSUUID, PKRecognitionSessionManager, PKVectorTimestamp, CHRecognitionSession, NSMapTable, PKVisualizationManager, NSString;

@interface PKDrawing : NSObject <CHQueryDelegate, NSCopying, NSSecureCoding> {

	CGRect __canvasBounds;
	CGRect __bounds;
	shared_ptr<PKProtobufUnknownFields>* _unknownFields;
	NSMutableArray* _visibleStrokes;
	NSMutableDictionary* _visibleStrokesIdentifierMap;
	BOOL _recognitionEnabled;
	NSArray* _forcedRecognitionLocales;
	NSUUID* _listenerID;
	NSUUID* _uuid;
	NSUUID* _replicaUUID;
	NSMutableArray* _allStrokes;
	PKRecognitionSessionManager* _recognitionManager;
	PKVectorTimestamp* _version;
	CHRecognitionSession* _recognitionSession;
	NSMapTable* _ongoingQueries;
	PKVisualizationManager* _visualizationManager;
	PKStrokeID _boundsVersion;

}

@property (assign,nonatomic) long long _orientation; 
@property (nonatomic,retain) PKRecognitionSessionManager * recognitionManager;              //@synthesize recognitionManager=_recognitionManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * _allStrokes;                                  //@synthesize allStrokes=_allStrokes - In the implementation block
@property (setter=_setUUID:,nonatomic,retain) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSUUID * replicaUUID;                                        //@synthesize replicaUUID=_replicaUUID - In the implementation block
@property (nonatomic,readonly) BOOL _hasReplicaUUID; 
@property (nonatomic,retain) PKVectorTimestamp * version;                                   //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) PKStrokeID boundsVersion;                                      //@synthesize boundsVersion=_boundsVersion - In the implementation block
@property (nonatomic,retain) CHRecognitionSession * recognitionSession;                     //@synthesize recognitionSession=_recognitionSession - In the implementation block
@property (nonatomic,retain) NSMapTable * ongoingQueries;                                   //@synthesize ongoingQueries=_ongoingQueries - In the implementation block
@property (nonatomic,retain) PKVisualizationManager * visualizationManager;                 //@synthesize visualizationManager=_visualizationManager - In the implementation block
@property (nonatomic,readonly) NSArray * strokes; 
@property (nonatomic,readonly) CGRect bounds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(PKStrokeID)newStrokeIDGreaterThan:(PKStrokeID)arg1 forUUID:(id)arg2 ;
+(CGRect)_boundingBoxForStrokeArray:(id)arg1 ;
+(id)_findLeftmostStrokes:(id)arg1 ;
+(id)_findRightmostStrokes:(id)arg1 ;
+(void)sortStrokes:(id)arg1 ;
+(long long)_currentSerializationVersion;
+(id)_uuidDescriptionForStrokes:(id)arg1 ;
+(id)visibleStrokesFromStrokes:(id)arg1 inDrawing:(id)arg2 ;
+(CGAffineTransform)_orientationTransform:(long long)arg1 size:(CGSize)arg2 ;
+(id)_defaultConversionQueue;
+(id)_upgradeDrawingData:(id)arg1 queue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(CGRect)_boundingBoxForStrokes:(id)arg1 ;
+(id)_otherStrokesCloseToLeft:(BOOL)arg1 forStrokes:(id)arg2 withClosestStroke:(id)arg3 ;
+(id)drawingWithData:(id)arg1 ;
-(id)debugQuickLookObject;
-(CGRect)bounds;
-(id)serialize;
-(long long)_orientation;
-(id)dataRepresentation;
-(NSUUID *)uuid;
-(CGRect)_bounds;
-(NSArray *)strokes;
-(id)init;
-(void)_setUUID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_ascii;
-(id)_strokes;
-(id)_data;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(NSString *)description;
-(void)saveToArchive:(Drawing*)arg1 withPathData:(BOOL)arg2 ;
-(id)data;
-(unsigned long long)hash;
-(NSUUID *)replicaUUID;
-(id)initWithDrawing:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(PKVectorTimestamp *)arg1 ;
-(PKVectorTimestamp *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)mergeWithDrawing:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)_unclippedStroke:(id)arg1 ;
-(id)_clipAgainstLegacyCanvas:(id)arg1 ;
-(id)_clipStroke:(id)arg1 againstPaths:(const vector<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> >, std::__1::allocator<std::__1::vector<ClipperLib::IntPoint, std::__1::allocator<ClipperLib::IntPoint> > > >*)arg2 ;
-(id)_clipStroke:(id)arg1 ;
-(id)_visibleStrokeForIdentifier:(id)arg1 ;
-(void)queryDidUpdateResult:(id)arg1 ;
-(id)_visibleStrokes;
-(void)setStrokes:(id)arg1 hidden:(BOOL)arg2 ;
-(id)visibleStrokeForInsertingStroke:(id)arg1 ;
-(void)addNewStroke:(id)arg1 ;
-(id)sliceWithEraseStroke:(id)arg1 ;
-(id)setStroke:(id)arg1 hidden:(BOOL)arg2 ;
-(NSMutableArray *)_allStrokes;
-(void)invalidateVisibleStrokes;
-(void)set_canvasBounds:(CGRect)arg1 ;
-(CGRect)_canvasBounds;
-(id)strokesIntersectedByPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2 onscreenVisibleStrokes:(id)arg3 ;
-(CHRecognitionSession *)recognitionSession;
-(PKRecognitionSessionManager *)recognitionManager;
-(void)setRecognitionManager:(PKRecognitionSessionManager *)arg1 ;
-(id)initWithStrokes:(id)arg1 fromDrawing:(id)arg2 ;
-(PKStrokeID)boundsVersion;
-(void)_copyAndAddStrokes:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(void)_teardownRecognitionObjects;
-(id)_copyAndAddStroke:(id)arg1 transform:(CGAffineTransform)arg2 ink:(id)arg3 newParent:(id*)arg4 ;
-(CGRect)calculateStrokeBounds;
-(PKStrokeID)newStrokeIDGreaterThan:(PKStrokeID)arg1 ;
-(id)visibleStrokeForInsertingStroke:(id)arg1 ink:(id)arg2 ;
-(id)visibleStrokeForInsertingStroke:(id)arg1 transform:(CGAffineTransform)arg2 ink:(id)arg3 ;
-(void)setStrokeSortIDForInsertion:(id)arg1 ;
-(void)invalidateStrokeBounds;
-(void)setNeedsRecognitionUpdate;
-(id)_copyAndAddStroke:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(PKStrokeID)strokeVersionForUpdatedStroke:(id)arg1 ;
-(void)updateStrokes:(/*^block*/id)arg1 ;
-(void)_updateStrokes:(id)arg1 updateBlock:(/*^block*/id)arg2 ;
-(id)_stroke:(id)arg1 transformed:(CGAffineTransform)arg2 concat:(BOOL)arg3 ;
-(id)_newStroke:(id)arg1 withInk:(id)arg2 ;
-(id)updateStroke:(id)arg1 updater:(/*^block*/id)arg2 ;
-(void)willMergeWithDrawing:(id)arg1 ;
-(void)didMergeWithDrawing:(id)arg1 ;
-(id)imageFromRect:(CGRect)arg1 scale:(double)arg2 ;
-(id)_initWithData:(id)arg1 loadNonInkingStrokes:(BOOL)arg2 error:(id*)arg3 ;
-(void)_updateRecognitionSession;
-(BOOL)recognitionEnabled;
-(void)setRecognitionSession:(CHRecognitionSession *)arg1 ;
-(void)setVisualizationManager:(PKVisualizationManager *)arg1 ;
-(void)setOngoingQueries:(NSMapTable *)arg1 ;
-(id)forcedRecognitionLocales;
-(id)_visibleStrokesIdentifierMap;
-(id)indexableContent;
-(NSMapTable *)ongoingQueries;
-(BOOL*)_newAsciiBitfield;
-(BOOL)_hasReplicaUUID;
-(id)initWithStrokes:(id)arg1 ;
-(BOOL)containsInternalStrokes;
-(id)copyWithoutInternalStrokes;
-(void)_imageInRect:(CGRect)arg1 scale:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)drawingByApplyingTransform:(CGAffineTransform)arg1 ;
-(id)drawingByAppendingDrawing:(id)arg1 ;
-(id)drawingByAppendingStrokes:(id)arg1 ;
-(id)visibleStrokes;
-(CGRect)strokeBounds;
-(void)sortStrokes;
-(id)insertNewTestStroke;
-(id)_addStroke:(id)arg1 ;
-(void)_removeStroke:(id)arg1 ;
-(id)copyAndAddStroke:(id)arg1 transform:(CGAffineTransform)arg2 ;
-(void)setStrokes:(id)arg1 transform:(CGAffineTransform)arg2 concat:(BOOL)arg3 ;
-(void)setStrokes:(id)arg1 inks:(id)arg2 ;
-(id)setStroke:(id)arg1 ink:(id)arg2 ;
-(void)_transformAllStrokes:(CGAffineTransform)arg1 ;
-(id)setStroke:(id)arg1 transform:(CGAffineTransform)arg2 concat:(BOOL)arg3 ;
-(void)setStrokeSubstrokes:(id)arg1 ;
-(void)_mergeStroke:(id)arg1 ;
-(id)CHDrawing;
-(void)_addTestDataToUnknownFields;
-(id)_dataInUnknownFields;
-(void)setRecognitionEnabled:(BOOL)arg1 ;
-(void)setForcedRecognitionLocales:(id)arg1 ;
-(void)cancelOngoingRecognitionRequests;
-(void)performSearchQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)set_allStrokes:(NSMutableArray *)arg1 ;
-(void)setBoundsVersion:(PKStrokeID)arg1 ;
-(PKVisualizationManager *)visualizationManager;
-(id)serializeWithVersion:(long long)arg1 ;
-(id)serializeTransiently;
-(long long)_minimumSerializationVersion;
-(id)initWithLegacyData:(id)arg1 ;
-(id)_upgradeOnQueue:(id)arg1 isLegacyDrawing:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(SCD_Struct_PK19)_drawingStrokeInfoIsLegacyDrawing:(BOOL)arg1 ;
-(CGSize)_unscaledOrientedDrawingSize;
-(double)_conversionScaleFactor;
-(void)_removeInvisibleStrokes;
-(void)_removeHiddenAndEraserStrokes;
-(void)set_orientation:(long long)arg1 ;
-(CGAffineTransform)_transformForImageWithSize:(CGSize)arg1 ;
-(CGSize)_orientedDrawingSize;
-(void)_upgradeLegacyPenInks;
-(void)fetchIntersectedStrokesBetweenPoint:(CGPoint)arg1 otherPoint:(CGPoint)arg2 visibleOnscreenStrokes:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)intersectedStrokesFromStroke:(id)arg1 visibleOnscreenStrokes:(id)arg2 ;
-(CGRect)_eraserStrokeBounds;
-(id)strokesIntersectedByPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2 minThreshold:(double)arg3 transform:(CGAffineTransform)arg4 onscreenVisibleStrokes:(id)arg5 ;
-(id)_strokesIntersectedByPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2 transform:(CGAffineTransform)arg3 ;
-(id)intersectedStrokesAtPoint:(CGPoint)arg1 selectionType:(long long)arg2 inputType:(long long)arg3 visibleOnscreenStrokes:(id)arg4 ;
-(id)initWithV1Data:(id)arg1 loadNonInkingStrokes:(BOOL)arg2 ;
-(id)v1SerializeWithPathData:(BOOL)arg1 toVersion:(unsigned*)arg2 ;
-(id)_initWithUnzippedData:(id)arg1 loadNonInkingStrokes:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithArchive:(const Drawing*)arg1 loadNonInkingStrokes:(BOOL)arg2 error:(id*)arg3 ;
-(id)initWithV1Archive:(const Drawing*)arg1 loadNonInkingStrokes:(BOOL)arg2 ;
-(id)initWithLegacyArchive:(const Drawing*)arg1 ;
-(unsigned)saveToV1Archive:(Drawing*)arg1 withPathData:(BOOL)arg2 ;
-(id)_initWithUnzippedData:(id)arg1 error:(id*)arg2 ;
-(id)v1SerializeWithPathData:(BOOL)arg1 ;
@end

