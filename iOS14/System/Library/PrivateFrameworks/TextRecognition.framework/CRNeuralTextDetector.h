/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@class CRDetectorConfiguration, CRPerformanceStatistics, NSMutableArray;

@interface CRNeuralTextDetector : NSObject {

	BOOL _shouldCancel;
	CRDetectorConfiguration* _configuration;
	CRPerformanceStatistics* _detectorStats;
	CRPerformanceStatistics* _postProcStats;
	CRPerformanceStatistics* _inferenceStats;
	NSMutableArray* _tileRects;

}

@property (assign) BOOL shouldCancel;                                     //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileRects;                  //@synthesize tileRects=_tileRects - In the implementation block
@property (retain) CRDetectorConfiguration * configuration;               //@synthesize configuration=_configuration - In the implementation block
@property (retain) CRPerformanceStatistics * detectorStats;               //@synthesize detectorStats=_detectorStats - In the implementation block
@property (retain) CRPerformanceStatistics * postProcStats;               //@synthesize postProcStats=_postProcStats - In the implementation block
@property (retain) CRPerformanceStatistics * inferenceStats;              //@synthesize inferenceStats=_inferenceStats - In the implementation block
+(CGSize)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(CGSize)arg2 ;
+(id)textFeaturesFromPolygons:(vector<CRDetectorUtils::CRTextDetectorQuadFeature, std::__1::allocator<CRDetectorUtils::CRTextDetectorQuadFeature> >*)arg1 withScale:(const float*)arg2 ;
+(id)detectorForRevision:(unsigned long long)arg1 imageReaderOptions:(id)arg2 error:(id*)arg3 ;
-(id)init;
-(CRDetectorConfiguration *)configuration;
-(BOOL)shouldCancel;
-(void)setShouldCancel:(BOOL)arg1 ;
-(void)cancel;
-(void)setConfiguration:(CRDetectorConfiguration *)arg1 ;
-(CRPerformanceStatistics *)detectorStats;
-(CRPerformanceStatistics *)inferenceStats;
-(void)enumerateTilesForImage:(id)arg1 block:(/*^block*/id)arg2 ;
-(CRPerformanceStatistics *)postProcStats;
-(NSMutableArray *)tileRects;
-(id)detectInImage:(id)arg1 error:(id*)arg2 ;
-(void)setInferenceStats:(CRPerformanceStatistics *)arg1 ;
-(void)setDetectorStats:(CRPerformanceStatistics *)arg1 ;
-(void)setPostProcStats:(CRPerformanceStatistics *)arg1 ;
-(void)setTileRects:(NSMutableArray *)arg1 ;
@end

