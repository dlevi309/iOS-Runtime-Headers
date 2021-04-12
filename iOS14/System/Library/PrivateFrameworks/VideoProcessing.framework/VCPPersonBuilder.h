/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@class PHPhotoLibrary, VCPFaceClusterer, PVContext, VCPPhotosPersistenceDelegate, NSMutableDictionary;

@interface VCPPersonBuilder : NSObject {

	PHPhotoLibrary* _photoLibrary;
	VCPFaceClusterer* _faceClusterer;
	PVContext* _context;
	VCPPhotosPersistenceDelegate* _persistenceDelegate;
	NSMutableDictionary* _state;
	unsigned long long _lastMinimumFaceGroupSizeForCreatingMergeCandidates;
	BOOL _personBuilderMergeCandidatesEnabled;

}
-(BOOL)performPersonBuildingWithCanceler:(id)arg1 extendTimeoutBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(void)_setFaceAnalysisStateValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithPhotoLibrary:(id)arg1 andFaceClusterer:(id)arg2 andContext:(id)arg3 ;
-(BOOL)_setAllFaceGroupsNeedPersonBuilding;
-(void)setLastMinimumFaceGroupSizeForCreatingMergeCandidate:(unsigned long long)arg1 ;
-(void)setPersonBuilderMergeCandidatesEnabled:(BOOL)arg1 ;
-(void)_readFaceAnalysisState;
@end

