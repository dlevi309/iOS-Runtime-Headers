/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAWorker.h>
#import <libobjc.A.dylib/PVVisionIntegrating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, PHAAnalysisWorkerJob, PVContext, PVVisionAnalyzer, VNPersonsModel, NSString;

@interface PHAFaceClassificationServiceWorker : PHAWorker <PVVisionIntegrating> {

	NSObject*<OS_dispatch_queue> _workerQueue;
	NSMutableArray* _pendingAssetIdentifiers;
	PHAAnalysisWorkerJob* _currentJob;
	PVContext* _context;
	PVVisionAnalyzer* _analyzer;
	VNPersonsModel* _personsModel;
	unsigned long long _numberOfAssetsToProcess;

}

@property (retain) PVContext * context;                                     //@synthesize context=_context - In the implementation block
@property (retain) PVVisionAnalyzer * analyzer;                             //@synthesize analyzer=_analyzer - In the implementation block
@property (retain) VNPersonsModel * personsModel;                           //@synthesize personsModel=_personsModel - In the implementation block
@property (assign) unsigned long long numberOfAssetsToProcess;              //@synthesize numberOfAssetsToProcess=_numberOfAssetsToProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(short)workerType;
+(long long)applicationDataFolderIdentifier;
+(BOOL)persistsState;
-(PVContext *)context;
-(void)setContext:(PVContext *)arg1 ;
-(void)_cleanup;
-(PVVisionAnalyzer *)analyzer;
-(void)setAnalyzer:(PVVisionAnalyzer *)arg1 ;
-(void)cooldown;
-(void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 ;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(void)processPendingAssetIdentifiers;
-(void)processAsset:(id)arg1 ;
-(void)loadPersonsModel;
-(void)analyzeAsset:(id)arg1 withImageProvider:(/*^block*/id)arg2 ;
-(VNPersonsModel *)personsModel;
-(void)setPersonsModel:(VNPersonsModel *)arg1 ;
-(unsigned long long)numberOfAssetsToProcess;
-(void)setNumberOfAssetsToProcess:(unsigned long long)arg1 ;
@end

