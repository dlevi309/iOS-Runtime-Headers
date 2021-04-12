/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <Vision/Vision-Structs.h>
@class NSObject, NSMutableArray, BurstImageFaceAnalysisContext, NSCountedSet, NSString, VNImageBuffer, NSDictionary, NSMutableDictionary, BurstActionClassifier, NSArray;

@interface BurstImageSetInternal : NSObject {

	NSObject*<OS_dispatch_queue> _burstAnalyzerDispatchQueue;
	NSObject*<OS_dispatch_semaphore> _pendingFramesSemaphore;
	NSObject*<OS_dispatch_queue> _yuvdumpDispatchQueue;
	int _temporalOrder;
	int _maxNumPendingFrames;
	BOOL _enableAnalysis;
	int _dummyAnalysisCount;
	BOOL _enableFaceCore;
	BOOL _enableDumpYUV;
	BOOL _isAction;
	BOOL _isPortrait;
	_sFILE* _burstLogFileHandle;
	int _currentClusterIndexToProcess;
	NSMutableArray* _clusterArray;
	BurstImageFaceAnalysisContext* _faceAnalysisContext;
	NSCountedSet* _faceIDCounts;
	int _version;
	NSString* _burstId;
	/*^block*/id _loggingCallback;
	VNImageBuffer* _overrideImage;
	NSDictionary* _overrideProps;
	NSMutableArray* _allImageIdentifiers;
	NSMutableDictionary* _statsByImageIdentifier;
	NSMutableDictionary* _clusterByImageIdentifier;
	NSString* _burstLogFileName;
	BurstActionClassifier* _actionClassifier;
	NSString* _burstCoverSelection;
	NSArray* _bestImageIdentifiersArray;
	NSString* _versionString;

}

@property (nonatomic,copy) id loggingCallback;                                       //@synthesize loggingCallback=_loggingCallback - In the implementation block
@property (retain) BurstImageFaceAnalysisContext * faceAnalysisContext;              //@synthesize faceAnalysisContext=_faceAnalysisContext - In the implementation block
@property (retain) VNImageBuffer * overrideImage;                                    //@synthesize overrideImage=_overrideImage - In the implementation block
@property (retain) NSDictionary * overrideProps;                                     //@synthesize overrideProps=_overrideProps - In the implementation block
@property (retain) NSMutableArray * clusterArray;                                    //@synthesize clusterArray=_clusterArray - In the implementation block
@property (assign) int temporalOrder;                                                //@synthesize temporalOrder=_temporalOrder - In the implementation block
@property (retain) NSCountedSet * faceIDCounts;                                      //@synthesize faceIDCounts=_faceIDCounts - In the implementation block
@property (retain) NSMutableArray * allImageIdentifiers;                             //@synthesize allImageIdentifiers=_allImageIdentifiers - In the implementation block
@property (retain) NSMutableDictionary * statsByImageIdentifier;                     //@synthesize statsByImageIdentifier=_statsByImageIdentifier - In the implementation block
@property (retain) NSMutableDictionary * clusterByImageIdentifier;                   //@synthesize clusterByImageIdentifier=_clusterByImageIdentifier - In the implementation block
@property (retain) NSString * burstLogFileName;                                      //@synthesize burstLogFileName=_burstLogFileName - In the implementation block
@property (retain) BurstActionClassifier * actionClassifier;                         //@synthesize actionClassifier=_actionClassifier - In the implementation block
@property (assign) int maxNumPendingFrames;                                          //@synthesize maxNumPendingFrames=_maxNumPendingFrames - In the implementation block
@property (assign) BOOL enableAnalysis;                                              //@synthesize enableAnalysis=_enableAnalysis - In the implementation block
@property (assign) int dummyAnalysisCount;                                           //@synthesize dummyAnalysisCount=_dummyAnalysisCount - In the implementation block
@property (assign) BOOL enableFaceCore;                                              //@synthesize enableFaceCore=_enableFaceCore - In the implementation block
@property (assign) BOOL enableDumpYUV;                                               //@synthesize enableDumpYUV=_enableDumpYUV - In the implementation block
@property (retain) NSString * burstCoverSelection;                                   //@synthesize burstCoverSelection=_burstCoverSelection - In the implementation block
@property (retain) NSString * burstId;                                               //@synthesize burstId=_burstId - In the implementation block
@property (retain) NSArray * bestImageIdentifiersArray;                              //@synthesize bestImageIdentifiersArray=_bestImageIdentifiersArray - In the implementation block
@property (retain) NSString * versionString;                                         //@synthesize versionString=_versionString - In the implementation block
@property (assign) int version;                                                      //@synthesize version=_version - In the implementation block
+(id)defaultVersionString;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(int)version;
-(void)setVersion:(int)arg1 ;
-(int)temporalOrder;
-(NSString *)burstId;
-(NSArray *)bestImageIdentifiersArray;
-(double)secondsSinceStart;
-(id)bestImageIdentifiers;
-(NSString *)burstLogFileName;
-(NSMutableArray *)allImageIdentifiers;
-(int)maxNumPendingFrames;
-(BOOL)enableAnalysis;
-(BOOL)enableFaceCore;
-(int)dummyAnalysisCount;
-(BOOL)isFaceDetectionForced;
-(BOOL)enableDumpYUV;
-(BOOL)isAction;
-(BOOL)isPortrait;
-(id)burstDocumentDirectory;
-(NSString *)burstCoverSelection;
-(id)imageClusterForIdentifier:(id)arg1 ;
-(NSMutableArray *)clusterArray;
-(NSMutableDictionary *)statsByImageIdentifier;
-(void)setVersionString:(NSString *)arg1 ;
-(NSString *)versionString;
-(void)setBurstId:(NSString *)arg1 ;
-(void)setTemporalOrder:(int)arg1 ;
-(void)processClusters:(BOOL)arg1 ;
-(int)computeEmotion:(id)arg1 ;
-(float)computeCameraTravelDistance;
-(float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
-(float)computeActionSelectionThreshold;
-(void)computeAllImageScores;
-(void)performEmotionalRejectionOnCluster:(id)arg1 ;
-(id)findBestImage:(id)arg1 useActionScores:(BOOL)arg2 ;
-(void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2 ;
-(void)setBestImageIdentifiersArray:(NSArray *)arg1 ;
-(void)setClusterArray:(NSMutableArray *)arg1 ;
-(NSCountedSet *)faceIDCounts;
-(void)setFaceIDCounts:(NSCountedSet *)arg1 ;
-(void)setAllImageIdentifiers:(NSMutableArray *)arg1 ;
-(BurstActionClassifier *)actionClassifier;
-(void)setActionClassifier:(BurstActionClassifier *)arg1 ;
-(void)setStatsByImageIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)clusterByImageIdentifier;
-(void)setClusterByImageIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setBurstLogFileName:(NSString *)arg1 ;
-(void)setMaxNumPendingFrames:(int)arg1 ;
-(void)setEnableAnalysis:(BOOL)arg1 ;
-(void)setDummyAnalysisCount:(int)arg1 ;
-(void)setEnableFaceCore:(BOOL)arg1 ;
-(void)setEnableDumpYUV:(BOOL)arg1 ;
-(void)setBurstCoverSelection:(NSString *)arg1 ;
-(BurstImageFaceAnalysisContext *)faceAnalysisContext;
-(VNImageBuffer *)overrideImage;
-(NSDictionary *)overrideProps;
-(CGRect)_reorientROIRect:(CGRect)arg1 imageSize:(CGSize)arg2 orientation:(int)arg3 ;
-(void)_reorientFaceRects:(id)arg1 imageSize:(CGSize)arg2 orientation:(int)arg3 ;
-(void)_addImageInternal:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)allImageClusters;
-(void)setFaceAnalysisContext:(BurstImageFaceAnalysisContext *)arg1 ;
-(id)loggingCallback;
-(void)setLoggingCallback:(id)arg1 ;
-(void)setOverrideImage:(VNImageBuffer *)arg1 ;
-(void)setOverrideProps:(NSDictionary *)arg1 ;
@end

