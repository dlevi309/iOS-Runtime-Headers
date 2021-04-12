/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSDate, CRTextDetectorResults, CRTextRecognizerResults, NSArray, CRTextFeature;

@interface CRTextResults : NSObject {

	NSDate* _startTime;
	NSDate* _endTime;
	CRTextDetectorResults* _detectorResults;
	CRTextRecognizerResults* _recognizerResults;
	NSArray* _textFeatures;
	CRTextFeature* _titleTextFeature;

}

@property (nonatomic,retain) NSDate * startTime;                                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) CRTextDetectorResults * detectorResults;                  //@synthesize detectorResults=_detectorResults - In the implementation block
@property (nonatomic,retain) CRTextRecognizerResults * recognizerResults;              //@synthesize recognizerResults=_recognizerResults - In the implementation block
@property (nonatomic,retain) NSArray * textFeatures;                                   //@synthesize textFeatures=_textFeatures - In the implementation block
@property (nonatomic,retain) CRTextFeature * titleTextFeature;                         //@synthesize titleTextFeature=_titleTextFeature - In the implementation block
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(NSDate *)startTime;
-(void)setTextFeatures:(NSArray *)arg1 ;
-(NSArray *)textFeatures;
-(CRTextFeature *)titleTextFeature;
-(CRTextDetectorResults *)detectorResults;
-(CRTextRecognizerResults *)recognizerResults;
-(void)setDetectorResults:(CRTextDetectorResults *)arg1 ;
-(void)setRecognizerResults:(CRTextRecognizerResults *)arg1 ;
-(void)setTitleTextFeature:(CRTextFeature *)arg1 ;
@end

