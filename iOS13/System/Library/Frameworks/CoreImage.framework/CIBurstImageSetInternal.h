/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <CoreImage/CoreImage-Structs.h>
@class NSObject, NSMutableArray, NSString, CIBurstImageFaceAnalysisContext, CIBurstYUVImage, NSDictionary, NSCountedSet, NSMutableDictionary, CIBurstActionClassifier, NSArray;

@interface CIBurstImageSetInternal : NSObject {

	NSObject*<OS_dispatch_queue> dq;
	NSObject*<OS_dispatch_queue> dq_yuvdump;
	NSObject*<OS_dispatch_semaphore> sem;
	NSMutableArray* clusterArray;
	int temporalOrder;
	int maxNumPendingFrames;
	BOOL enableAnalysis;
	int dummyAnalysisCount;
	BOOL enableFaceCore;
	BOOL enableDumpYUV;
	NSString* burstCoverSelection;
	BOOL isAction;
	BOOL isPortrait;
	CIBurstImageFaceAnalysisContext* faceAnalysisContext;
	CIBurstYUVImage* overrideImage;
	NSDictionary* overrideProps;
	NSMutableArray* allImageIdentifiers;
	NSCountedSet* faceIDCounts;
	NSMutableDictionary* statsByImageIdentifier;
	NSMutableDictionary* clusterByImageIdentifier;
	NSString* burstLogFileName;
	_sFILE* burstLogFileHandle;
	CIBurstActionClassifier* actionClassifier;
	int curClusterIndexToProcess;
	NSMutableArray* bestImageIdentifiersArray;
	int _version;
	NSString* burstId;
	NSString* _versionString;

}

@property (assign) NSMutableArray * clusterArray; 
@property (assign) int temporalOrder; 
@property (assign) NSCountedSet * faceIDCounts; 
@property (assign) NSMutableArray * allImageIdentifiers; 
@property (assign) NSMutableDictionary * statsByImageIdentifier; 
@property (assign) NSMutableDictionary * clusterByImageIdentifier; 
@property (assign) NSString * burstLogFileName; 
@property (assign) CIBurstActionClassifier * actionClassifier; 
@property (assign) int maxNumPendingFrames; 
@property (assign) BOOL enableAnalysis; 
@property (assign) int dummyAnalysisCount; 
@property (assign) BOOL enableFaceCore; 
@property (assign) BOOL enableDumpYUV; 
@property (assign) NSString * burstCoverSelection; 
@property (nonatomic,retain) NSString * burstId; 
@property (assign) NSArray * bestImageIdentifiersArray; 
@property (assign) NSString * versionString;                                    //@synthesize versionString=_versionString - In the implementation block
@property (assign) int version;                                                 //@synthesize version=_version - In the implementation block
+(id)defaultVersionString;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(int)version;
-(void)setVersion:(int)arg1 ;
-(int)temporalOrder;
-(NSString *)burstId;
-(void)addImageFromIOSurface:(IOSurfaceRef)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(NSArray *)bestImageIdentifiersArray;
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
-(void)addYUVImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
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
-(CIBurstActionClassifier *)actionClassifier;
-(void)setActionClassifier:(CIBurstActionClassifier *)arg1 ;
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
@end

