/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@class _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

@interface VNImageAnalyzerMultiDetector : VNDetector {

	unsigned long long _model;
	shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>* _defaultSceneClassificationHierarchicalModel;
	unique_ptr<vision::mod::ImageAnalyzer, std::__1::default_delete<vision::mod::ImageAnalyzer> >* _imageAnalyzer;
	unordered_map<unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > >, std::__1::hash<unsigned long>, std::__1::equal_to<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, std::__1::shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > > > > >* _imageAnalyzerJunkCustomClassifiers;
	unique_ptr<vision::mod::ImageAnalyzer_PCA, std::__1::default_delete<vision::mod::ImageAnalyzer_PCA> >* _imageAnalyzerPCA256;
	_VNImageAnalyzerMultiDetectorSceneOperationPointsCache* _operationPointsCache;
	shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>* _pipelineImageCorrectionNeed1CustomClassifier_DO_NOT_ACCESS_DIRECTLY;
	vector<std::__1::tuple<std::__1::basic_string<char>, float, bool>, std::__1::allocator<std::__1::tuple<std::__1::basic_string<char>, float, bool> > >* _cachedAllSceneClassificationsFromLastAnalysis;

}
+(id)configurationOptionKeysForDetectorKey;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(shared_ptr<vision::mod::ImageClassifier_HierarchicalModel>*)createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 requestRevision:(unsigned long long)arg2 error:(id*)arg3 ;
+(unsigned long long)modelForRequestClass:(Class)arg1 revision:(unsigned long long)arg2 detectionLevel:(unsigned long long)arg3 ;
+(id)blacklistForModel:(unsigned long long)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(BOOL)warmUpWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)sceneLabelOperationPointsForRequestRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)_getImageCropAndScaleOption:(unsigned long long*)arg1 networkRequiredInputImageSize:(Geometry2D_size2D_*)arg2 forOptions:(id)arg3 ;
-(CVBufferRef)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 forNetworkInputImageSize:(Geometry2D_size2D_)arg2 imageCropAndScaleOption:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5 ;
-(void)_tileRect:(CGRect)arg1 horizontally:(BOOL)arg2 vertically:(BOOL)arg3 windowAspectRatio:(double)arg4 overlapPercentage:(double)arg5 usingBlock:(/*^block*/id)arg6 ;
-(unsigned)_analysisTypeForScene:(BOOL)arg1 junk:(BOOL)arg2 sceneprint:(BOOL)arg3 includingLabelsAndConfidences:(BOOL)arg4 compressedSceneprint:(BOOL)arg5 aesthetics:(BOOL)arg6 saliencyHeatMap:(BOOL)arg7 pipelineImageCorrectionNeed1:(BOOL)arg8 ;
-(BOOL)_populateLeafSceneObservations:(id)arg1 hierarchySceneObservations:(id)arg2 forLastAnalysisWithOptions:(id)arg3 error:(id*)arg4 ;
-(id)_sceneObservationsForLastAnalysisWithOptions:(id)arg1 error:(id*)arg2 ;
-(shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>*)_loadCustomClassifierWithModelName:(id)arg1 labelsFileName:(id)arg2 classifierName:(id)arg3 inputBlobName:(id)arg4 outputBlobName:(id)arg5 espressoEngine:(int)arg6 espressoPlanFlags:(int)arg7 espressoStorageType:(int)arg8 espressoDeviceID:(int)arg9 error:(id*)arg10 ;
-(shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > >*)_loadJunkCustomClassifiersForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(shared_ptr<std::__1::vector<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>, std::__1::allocator<std::__1::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> > > >*)_junkCustomClassifiersForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_junkObservationsForLastAnalysisWithOptions:(id)arg1 error:(id*)arg2 ;
-(shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>*)_loadPipelineImageCorrectionNeed1CustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>*)_pipelineImageCorrectionNeed1CustomClassifierForRequestRevision:(unsigned long long)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)_pipelineImageCorrectionNeed1ForLastAnalysisWithOptions:(id)arg1 error:(id*)arg2 ;
-(ImageAnalyzer_PCA*)_sceneprintCompressorForCompression:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)_sceneprintObservationsForLastAnalysisOfSceneprint:(BOOL)arg1 includingLabelsAndConfidencesInSceneprint:(BOOL)arg2 compressedSceneprint:(BOOL)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)_aestheticsObservationsForLastAnalysisWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)_saliencyObservationsForLastAnalysisWithRegionOfInterest:(CGRect)arg1 originalImageSize:(CGSize)arg2 options:(id)arg3 warningRecorder:(id)arg4 error:(id*)arg5 ;
-(BOOL)_performAnalysis:(unsigned)arg1 on32BGRAImageInPixelBufferProvidedByBlock:(/*^block*/id)arg2 error:(id*)arg3 ;
-(vector<std::__1::tuple<std::__1::basic_string<char>, float, bool>, std::__1::allocator<std::__1::tuple<std::__1::basic_string<char>, float, bool> > >*)_lastAnalysisSceneClassifications;
-(id)_observationsForTopN:(const unsigned long long*)arg1 lastAnalysisSceneLabelsWithMinimumConfidence:(float)arg2 excludeObfuscatedLabels:(BOOL)arg3 labelBlackList:(id)arg4 sceneRequestRevisionNumber:(unsigned long long)arg5 operationPointsProvider:(id)arg6 ;
-(id)_observationsForTopN:(const unsigned long long*)arg1 sceneClassificationsInMap:(const unordered_map<std::__1::basic_string<char>, float, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, float> > >*)arg2 withMinimumConfidence:(float)arg3 labelBlackList:(id)arg4 sceneRequestRevisionNumber:(unsigned long long)arg5 operationPointsProvider:(id)arg6 ;
-(id)_observationsForScene:(BOOL)arg1 junk:(BOOL)arg2 sceneprint:(BOOL)arg3 includingLabelsAndConfidences:(BOOL)arg4 compressedSceneprint:(BOOL)arg5 aesthetics:(BOOL)arg6 saliencyHeatMap:(BOOL)arg7 pipelineImageCorrectionNeed1:(BOOL)arg8 of32BGRAImageInPixelBufferProvidedByBlock:(/*^block*/id)arg9 withOptions:(id)arg10 originalImageSize:(CGSize)arg11 regionOfInterest:(CGRect)arg12 warningRecorder:(id)arg13 error:(id*)arg14 ;
-(BOOL)_getLeafSceneObservations:(id*)arg1 hierarchySceneObservations:(id*)arg2 of32BGRAImageInPixelBufferProvidedByBlock:(/*^block*/id)arg3 withOptions:(id)arg4 error:(id*)arg5 ;
-(CVBufferRef)_createScaledImagePixelBufferFromCropRect:(CGRect)arg1 ofImageBuffer:(id)arg2 forNetworkInputImageSize:(Geometry2D_size2D_)arg3 imageCropAndScaleOption:(unsigned long long)arg4 options:(id)arg5 error:(id*)arg6 ;
-(id)supportedImageSizeSetForProcessingOptions:(id)arg1 ;
-(id)allKnownSceneClassificationsWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)allJunkClassificationObservationsForOptions:(id)arg1 error:(id*)arg2 ;
@end

