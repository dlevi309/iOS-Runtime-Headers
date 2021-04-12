/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class NSArray, CRPerformanceStatistics, NSOrderedSet, CRTextDetectorModel, CRTextRecognizerModel, NSDictionary, CRLanguageCorrection, CRRegex;

@interface CRImageReader : NSObject {

	NSArray* _outputObjectTypes;
	BOOL _shouldCancel;
	unsigned short _blank;
	CRPerformanceStatistics* _detectorStats;
	CRPerformanceStatistics* _postProcStats;
	CRPerformanceStatistics* _recognizerStats;
	CRPerformanceStatistics* _singleFeatureRecognizerStats;
	CRPerformanceStatistics* _singleFeatureLMStats;
	NSOrderedSet* _targetLanguages;
	CRTextDetectorModel* _ocrDetectorModel;
	CRTextRecognizerModel* _ocrRecognizerModel;
	NSDictionary* _userOptions;
	CRLanguageCorrection* _languageCorrection;
	NSArray* _beamSearches;
	CRRegex* _regExpressions;

}

@property (retain) CRPerformanceStatistics * detectorStats;                             //@synthesize detectorStats=_detectorStats - In the implementation block
@property (retain) CRPerformanceStatistics * postProcStats;                             //@synthesize postProcStats=_postProcStats - In the implementation block
@property (retain) CRPerformanceStatistics * recognizerStats;                           //@synthesize recognizerStats=_recognizerStats - In the implementation block
@property (retain) CRPerformanceStatistics * singleFeatureRecognizerStats;              //@synthesize singleFeatureRecognizerStats=_singleFeatureRecognizerStats - In the implementation block
@property (retain) CRPerformanceStatistics * singleFeatureLMStats;                      //@synthesize singleFeatureLMStats=_singleFeatureLMStats - In the implementation block
@property (retain) NSOrderedSet * targetLanguages;                                      //@synthesize targetLanguages=_targetLanguages - In the implementation block
@property (retain) CRTextDetectorModel * ocrDetectorModel;                              //@synthesize ocrDetectorModel=_ocrDetectorModel - In the implementation block
@property (retain) CRTextRecognizerModel * ocrRecognizerModel;                          //@synthesize ocrRecognizerModel=_ocrRecognizerModel - In the implementation block
@property (assign,nonatomic) unsigned short blank;                                      //@synthesize blank=_blank - In the implementation block
@property (nonatomic,retain) NSDictionary * userOptions;                                //@synthesize userOptions=_userOptions - In the implementation block
@property (nonatomic,retain) CRLanguageCorrection * languageCorrection;                 //@synthesize languageCorrection=_languageCorrection - In the implementation block
@property (nonatomic,retain) NSArray * beamSearches;                                    //@synthesize beamSearches=_beamSearches - In the implementation block
@property (nonatomic,retain) CRRegex * regExpressions;                                  //@synthesize regExpressions=_regExpressions - In the implementation block
@property (assign) BOOL shouldCancel;                                                   //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (copy) NSArray * outputObjectTypes; 
+(id)errorWithErrorCode:(int)arg1 ;
+(id)defaultOptions;
+(id)supportedLanguagesForOptions:(id)arg1 revision:(long long)arg2 error:(id*)arg3 ;
+(id)textResultsForCGImage:(CGImageRef)arg1 numberOfCandidates:(long long)arg2 title:(id*)arg3 ;
+(unsigned long long)revisionNumber;
+(id)languageSetFromOptionsDictionary:(id)arg1 ;
+(id)recognizerFromOptionsDictionary:(id)arg1 ;
+(id)textResultsForCGImage:(CGImageRef)arg1 numberOfCandidates:(long long)arg2 title:(id*)arg3 error:(id*)arg4 ;
+(id)descriptionForErrorCode:(int)arg1 ;
+(id)textResultsForCGImage:(CGImageRef)arg1 numberOfCandidates:(long long)arg2 ;
+(void)calculateTargetOutputSize:(CGSize*)arg1 andAdjustedInputScale:(double*)arg2 andPaddedSize:(CGSize*)arg3 forImageSize:(CGSize)arg4 withMaximumSize:(CGSize)arg5 ;
+(id)_lmQueues;
-(id)initWithOptions:(id)arg1 ;
-(void)cancel;
-(id)resultsForPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)resultsForPixelBuffer:(CVBufferRef)arg1 roi:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 withProgressHandler:(/*^block*/id)arg5 ;
-(CGSize)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(CGSize)arg2 ;
-(void)setOutputObjectTypes:(NSArray *)arg1 ;
-(NSArray *)outputObjectTypes;
-(BOOL)shouldCancel;
-(void)setShouldCancel:(BOOL)arg1 ;
-(id)signpostLog;
-(BOOL)hasAppleNeuralEngine;
-(void)setTargetLanguages:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)targetLanguages;
-(void)setUserOptions:(NSDictionary *)arg1 ;
-(void)setOcrDetectorModel:(CRTextDetectorModel *)arg1 ;
-(void)setOcrRecognizerModel:(CRTextRecognizerModel *)arg1 ;
-(void)setBeamSearches:(NSArray *)arg1 ;
-(void)setRegExpressions:(CRRegex *)arg1 ;
-(void)setLanguageCorrection:(CRLanguageCorrection *)arg1 ;
-(void)setDetectorStats:(CRPerformanceStatistics *)arg1 ;
-(void)setPostProcStats:(CRPerformanceStatistics *)arg1 ;
-(void)setRecognizerStats:(CRPerformanceStatistics *)arg1 ;
-(void)setSingleFeatureRecognizerStats:(CRPerformanceStatistics *)arg1 ;
-(void)setSingleFeatureLMStats:(CRPerformanceStatistics *)arg1 ;
-(id)resultsForPixelBuffer:(CVBufferRef)arg1 roi:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 ;
-(NSDictionary *)userOptions;
-(id)textResultsForImage:(id)arg1 roi:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 withProgressHandler:(/*^block*/id)arg5 title:(id*)arg6 ;
-(id)textResultsForImageAtURL:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 ;
-(id)textResultsForImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 title:(id*)arg4 ;
-(id)textResultsForImage:(id)arg1 options:(id)arg2 title:(id*)arg3 ;
-(id)mleTextRecognizerResultsForTextFeatures:(id)arg1 inImage:(id)arg2 options:(id)arg3 withProgressHandler:(/*^block*/id)arg4 title:(id*)arg5 error:(id*)arg6 ;
-(id)mleTextDetectorResultsForImage:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)mleTextResultsInImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 title:(id*)arg4 error:(id*)arg5 ;
-(id)fkcrTextResultsInImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 title:(id*)arg4 ;
-(id)futharkTextResultsInImage:(id)arg1 options:(id)arg2 ;
-(id)lfpTextResultsInImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 ;
-(BOOL)purgeCaches:(id)arg1 ;
-(id)textResultsForImageAtURL:(id)arg1 options:(id)arg2 ;
-(id)textResultsForImage:(id)arg1 options:(id)arg2 ;
-(id)textRecognizerResultsForTextFeatures:(id)arg1 inImage:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(id)textRecognizerResultsForTextFeatures:(id)arg1 forImageAtURL:(id)arg2 options:(id)arg3 ;
-(id)textDetectorResultsForImage:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)textDetectorResultsForImageAtURL:(id)arg1 options:(id)arg2 ;
-(id)textResultsForImage:(id)arg1 roi:(CGRect)arg2 options:(id)arg3 error:(id*)arg4 title:(id*)arg5 ;
-(CRPerformanceStatistics *)detectorStats;
-(CRPerformanceStatistics *)postProcStats;
-(CRPerformanceStatistics *)recognizerStats;
-(CRPerformanceStatistics *)singleFeatureRecognizerStats;
-(CRPerformanceStatistics *)singleFeatureLMStats;
-(CRTextDetectorModel *)ocrDetectorModel;
-(CRTextRecognizerModel *)ocrRecognizerModel;
-(unsigned short)blank;
-(void)setBlank:(unsigned short)arg1 ;
-(CRLanguageCorrection *)languageCorrection;
-(NSArray *)beamSearches;
-(CRRegex *)regExpressions;
-(id)detectCRTextFeaturesInImage:(id)arg1 logIntermediateDetectorResult:(id*)arg2 options:(id)arg3 error:(id*)arg4 ;
-(CVBufferRef)createCroppedRegion:(CGRect)arg1 fromPixelBuffer:(CVBufferRef)arg2 ;
-(void)aggregateScoreAndGeoMap:(id)arg1 inputGeo:(id)arg2 targetSize:(CGSize)arg3 outputScoreMap:(vImage_Buffer*)arg4 outputGeoMap:(vImage_Buffer*)arg5 outputOrigin:(CGPoint)arg6 withScale:(CGSize)arg7 ;
-(void)masksForScoreMap:(vImage_Buffer*)arg1 imageMask:(vImage_Buffer*)arg2 binaryMask:(vImage_Buffer*)arg3 ;
-(vImage_Buffer*)extractImageMap:(id)arg1 targetSize:(CGSize)arg2 ;
-(void)extractGeomap:(id)arg1 toImages:(vImage_Buffer*)arg2 targetSize:(CGSize)arg3 ;
-(void)scaleBufferNearestNeighbor:(vImage_Buffer*)arg1 geoMap:(vImage_Buffer*)arg2 dest:(vImage_Buffer*)arg3 destGeomap:(vImage_Buffer*)arg4 binaryMask:(vImage_Buffer*)arg5 ;
-(id)genPolyResults:(vImage_Buffer*)arg1 geoMap:(vImage_Buffer*)arg2 targetSize:(CGSize)arg3 scale:(CGSize)arg4 ;
-(vector<double, std::__1::allocator<double> >*)convertVImageScoreMaptoArray:(vImage_Buffer*)arg1 ;
-(vector<float, std::__1::allocator<float> >*)convertVImageGeoMapstoArray:(vImage_Buffer*)arg1 ;
-(id)textFeaturesFromPolygons:(vector<CRTextDetectorPostProcess::CRTextDetectorQuadFeature, std::__1::allocator<CRTextDetectorPostProcess::CRTextDetectorQuadFeature> >*)arg1 withScale:(const float*)arg2 ;
-(void)rotatePolygon:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg1 center:(CGPoint)arg2 angle:(float)arg3 dest:(vector<CGPoint, std::__1::allocator<CGPoint> >*)arg4 ;
-(long long)_indexOfBestModelForAspectRatio:(float)arg1 ;
-(void)recognizeFeatures:(id)arg1 widthIndex:(long long)arg2 inImage:(id)arg3 options:(id)arg4 error:(id*)arg5 ;
-(id)sortedRotateTextFeatures:(id)arg1 center:(CGPoint)arg2 radians:(float)arg3 ;
-(id)combinedLineFeature:(id)arg1 lineFeature:(id)arg2 ;
-(BOOL)mleValidateProbability:(id)arg1 options:(id)arg2 ;
-(void)getWordBoundariesForWhiteSpaceRanges:(id)arg1 topPoints:(id*)arg2 bottomPoints:(id*)arg3 image:(id)arg4 scale:(float)arg5 rect:(CGRect)arg6 rotatedRoi:(CGRect)arg7 radians:(float)arg8 ;
-(id)correctLMDecodingWithRegex:(id)arg1 noLMDecoding:(id)arg2 ;
-(void)lmDecodeFeaturesWithInfo:(id)arg1 activationMaps:(id)arg2 image:(id)arg3 options:(id)arg4 ;
-(void)maxDecodeFeaturesWithInfo:(id)arg1 activationMaps:(id)arg2 image:(id)arg3 options:(id)arg4 ;
-(void)enumerateInputsForFeatures:(id)arg1 widthIndex:(long long)arg2 inImage:(id)arg3 options:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(CVBufferRef)grayscalePixelBufferFromCGImage:(CGImageRef)arg1 withScale:(float)arg2 ;
-(CVBufferRef)pixelBufferFromCGImage:(CGImageRef)arg1 withScale:(float)arg2 ;
-(CVBufferRef)pixelBufferFromCGImage:(CGImageRef)arg1 withScale:(double)arg2 paddedToSize:(CGSize)arg3 ;
-(CVBufferRef)cvPixelBufferForImageAtPath:(id)arg1 withScale:(float)arg2 ;
-(CVBufferRef)createScaledBufferOfSize:(CGSize)arg1 fromPixelBuffer:(CVBufferRef)arg2 ;
-(vector<double, std::__1::allocator<double> >*)converMLMultiArraytoArray:(id)arg1 targetSize:(CGSize)arg2 ;
-(BOOL)futharkValidateProbability:(id)arg1 options:(id)arg2 ;
-(BOOL)lfpValidateProbability:(id)arg1 options:(id)arg2 ;
-(id)lfpTextResultsInImage:(id)arg1 options:(id)arg2 ;
-(id)fkcrTextDetectorResultsForImage:(id)arg1 options:(id)arg2 ;
-(id)fkcrTextRecognizerResultsForTextFeatures:(id)arg1 inImage:(id)arg2 options:(id)arg3 withProgressHandler:(/*^block*/id)arg4 title:(id*)arg5 ;
-(id)fkcrDetectCITextFeaturesInImage:(id)arg1 logIntermediateDetectorResult:(id*)arg2 options:(id)arg3 ;
-(long long)_fkcrIndexOfBestModelForAspectRatio:(float)arg1 ;
-(void)fkcrRecognizeFeatures:(id)arg1 widthIndex:(long long)arg2 inImage:(id)arg3 options:(id)arg4 ;
-(void)fkcrAssignSubFeatureBoundsFromSourceFeature:(id)arg1 toDestFeature:(id)arg2 ;
-(id)fkcrFitQuadraticBezierCurve2D:(id)arg1 onImage:(id)arg2 ;
-(id)fkcrCorrectLMDecodingWithRegex:(id)arg1 noLMDecoding:(id)arg2 ;
-(void)fkcrLMDecodeFeatures:(id)arg1 activationMaps:(id)arg2 image:(id)arg3 options:(id)arg4 ;
-(void)fkcrMaxDecodeFeatures:(id)arg1 activationMaps:(id)arg2 image:(id)arg3 options:(id)arg4 ;
-(void)fkcrEnumerateInputsForFeatures:(id)arg1 widthIndex:(long long)arg2 inImage:(id)arg3 options:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)fkcrTextResultsInImage:(id)arg1 options:(id)arg2 title:(id*)arg3 ;
-(CVBufferRef)fkcrGrayscalePixelBufferFromCGImage:(CGImageRef)arg1 withScale:(float)arg2 ;
-(id)fkcrTextRecognizerResultsForTextFeatures:(id)arg1 inImage:(id)arg2 options:(id)arg3 title:(id*)arg4 ;
@end

