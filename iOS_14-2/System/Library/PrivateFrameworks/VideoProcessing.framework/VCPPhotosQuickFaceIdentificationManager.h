/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
*/


@protocol OS_dispatch_queue;
@class VNPersonsModel, PHPhotoLibrary, VCPFaceAnalyzer, NSObject;

@interface VCPPhotosQuickFaceIdentificationManager : NSObject {

	VNPersonsModel* _personsModel;
	PHPhotoLibrary* _photoLibrary;
	VCPFaceAnalyzer* _faceAnalyzer;
	NSObject*<OS_dispatch_queue> _management;

}
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)init;
-(int)generatePersonsModelWithExtendTimeout:(/*^block*/id)arg1 cancel:(/*^block*/id)arg2 ;
-(int)_detectFacesWithPVImage:(id)arg1 forAsset:(id)arg2 withAnalysis:(id*)arg3 ;
-(int)_generatePersonsModelShouldForce:(BOOL)arg1 extendTimeoutBlock:(/*^block*/id)arg2 cancel:(/*^block*/id)arg3 ;
-(int)_loadPVImage:(id*)arg1 forAsset:(id)arg2 ;
-(int)_loadPersonsModel;
-(BOOL)_personsModelLastGenerationDidExceedTimeInterval;
-(id)fetchPersonsForFaceIDModel;
-(int)_persistResults:(id)arg1 withFaces:(id)arg2 forAsset:(id)arg3 ;
-(int)processAsset:(id)arg1 ;
-(int)_classifyFaces:(id)arg1 forAsset:(id)arg2 withResults:(id*)arg3 ;
-(BOOL)_persistPersonsModel:(id)arg1 error:(id*)arg2 ;
-(BOOL)_needToGeneratePersonsModel;
@end

