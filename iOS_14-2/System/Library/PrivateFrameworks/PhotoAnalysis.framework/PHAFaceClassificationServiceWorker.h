/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/

#import <PhotoAnalysis/PHAWorker.h>
#import <libobjc.A.dylib/PVVisionIntegrating.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, PHAAnalysisWorkerJob, PVVisionAnalyzer, VNPersonsModel, NSString;

@interface PHAFaceClassificationServiceWorker : PHAWorker <PVVisionIntegrating> {

	NSObject*<OS_dispatch_queue> _workerQueue;
	NSMutableArray* _pendingAssetIdentifiers;
	PHAAnalysisWorkerJob* _currentJob;
	PVVisionAnalyzer* _analyzer;
	VNPersonsModel* _personsModel;
	unsigned long long _numberOfAssetsToProcess;

}

@property (retain) PVVisionAnalyzer * analyzer;                             //@synthesize analyzer=_analyzer - In the implementation block
@property (retain) VNPersonsModel * personsModel;                           //@synthesize personsModel=_personsModel - In the implementation block
@property (assign) unsigned long long numberOfAssetsToProcess;              //@synthesize numberOfAssetsToProcess=_numberOfAssetsToProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)persistsState;
+(long long)applicationDataFolderIdentifier;
+(short)workerType;
-(void)cooldown;
-(void)_cleanup;
-(VNPersonsModel *)personsModel;
-(void)warmupWithProgressBlock:(/*^block*/id)arg1 ;
-(void)setAnalyzer:(PVVisionAnalyzer *)arg1 ;
-(PVVisionAnalyzer *)analyzer;
-(unsigned long long)numberOfAssetsToProcess;
-(void)setPersonsModel:(VNPersonsModel *)arg1 ;
-(BOOL)stopAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)configureRequest:(id)arg1 algorithmUmbrellaVersion:(unsigned)arg2 ;
-(void)setNumberOfAssetsToProcess:(unsigned long long)arg1 ;
-(void)processAsset:(id)arg1 ;
-(void)processPendingAssetIdentifiers;
-(BOOL)startAnalysisJob:(id)arg1 error:(id*)arg2 ;
-(void)analyzeAsset:(id)arg1 withImageProvider:(/*^block*/id)arg2 ;
-(void)loadPersonsModel;
-(id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2 ;
@end

