/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/

#import <libobjc.A.dylib/CRConfidenceThresholdProviding.h>

@protocol CRRecognizerFeatureProviding, CRTextRecognizerModel, CRTextDecoding;
@class CRPerformanceStatistics, CRRecognizerConfiguration, NSObject, NSString;

@interface CRNeuralTextRecognizer : NSObject <CRConfidenceThresholdProviding> {

	BOOL _shouldCancel;
	unsigned _desiredQoS;
	CRPerformanceStatistics* _inferenceStats;
	CRPerformanceStatistics* _decodingStats;
	CRRecognizerConfiguration* _configuration;
	NSObject*<CRRecognizerFeatureProviding> _featureProvider;
	NSObject*<CRTextRecognizerModel> _model;
	NSObject*<CRTextDecoding> _textDecoder;

}

@property (retain) NSObject*<CRRecognizerFeatureProviding> featureProvider;              //@synthesize featureProvider=_featureProvider - In the implementation block
@property (retain) NSObject*<CRTextRecognizerModel> model;                               //@synthesize model=_model - In the implementation block
@property (retain) NSObject*<CRTextDecoding> textDecoder;                                //@synthesize textDecoder=_textDecoder - In the implementation block
@property (assign) BOOL shouldCancel;                                                    //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (assign) unsigned desiredQoS;                                                  //@synthesize desiredQoS=_desiredQoS - In the implementation block
@property (retain) CRPerformanceStatistics * inferenceStats;                             //@synthesize inferenceStats=_inferenceStats - In the implementation block
@property (retain) CRPerformanceStatistics * decodingStats;                              //@synthesize decodingStats=_decodingStats - In the implementation block
@property (retain) CRRecognizerConfiguration * configuration;                            //@synthesize configuration=_configuration - In the implementation block
@property (readonly) float mediumConfidenceThreshold; 
@property (readonly) float highConfidenceThreshold; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_modelForRevision:(long long)arg1 configuration:(id)arg2 error:(id*)arg3 ;
+(id)_featureProviderForRevision:(long long)arg1 configuration:(id)arg2 model:(id)arg3 error:(id*)arg4 ;
+(id)_textDecoderForRevision:(long long)arg1 configuration:(id)arg2 model:(id)arg3 error:(id*)arg4 ;
+(id)recognizerForRevision:(unsigned long long)arg1 imageReaderOptions:(id)arg2 error:(id*)arg3 ;
-(NSObject*<CRTextRecognizerModel>)model;
-(id)init;
-(BOOL)_isCancelled;
-(void)setModel:(NSObject*<CRTextRecognizerModel>)arg1 ;
-(CRRecognizerConfiguration *)configuration;
-(BOOL)shouldCancel;
-(void)setShouldCancel:(BOOL)arg1 ;
-(NSObject*<CRRecognizerFeatureProviding>)featureProvider;
-(void)setFeatureProvider:(NSObject*<CRRecognizerFeatureProviding>)arg1 ;
-(void)cancel;
-(void)setConfiguration:(CRRecognizerConfiguration *)arg1 ;
-(CRPerformanceStatistics *)inferenceStats;
-(void)setInferenceStats:(CRPerformanceStatistics *)arg1 ;
-(void)setDecodingStats:(CRPerformanceStatistics *)arg1 ;
-(void)setDesiredQoS:(unsigned)arg1 ;
-(void)setTextDecoder:(NSObject*<CRTextDecoding>)arg1 ;
-(NSObject*<CRTextDecoding>)textDecoder;
-(unsigned)desiredQoS;
-(CRPerformanceStatistics *)decodingStats;
-(float)mediumConfidenceThreshold;
-(float)highConfidenceThreshold;
-(id)recognizeInImage:(id)arg1 textFeatures:(id)arg2 progressHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(BOOL)shouldUseLM;
@end

