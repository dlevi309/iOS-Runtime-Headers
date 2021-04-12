/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSDate, CRTextDetectorResults, CRTextRecognizerResults, NSArray;

@interface CRTextResults : NSObject {

	NSDate* _startTime;
	NSDate* _endTime;
	CRTextDetectorResults* _detectorResults;
	CRTextRecognizerResults* _recognizerResults;
	NSArray* _textFeatures;

}

@property (nonatomic,retain) NSDate * startTime;                                       //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                         //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) CRTextDetectorResults * detectorResults;                  //@synthesize detectorResults=_detectorResults - In the implementation block
@property (nonatomic,retain) CRTextRecognizerResults * recognizerResults;              //@synthesize recognizerResults=_recognizerResults - In the implementation block
@property (nonatomic,retain) NSArray * textFeatures;                                   //@synthesize textFeatures=_textFeatures - In the implementation block
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSArray *)textFeatures;
-(CRTextDetectorResults *)detectorResults;
-(CRTextRecognizerResults *)recognizerResults;
-(void)setTextFeatures:(NSArray *)arg1 ;
-(void)setDetectorResults:(CRTextDetectorResults *)arg1 ;
-(void)setRecognizerResults:(CRTextRecognizerResults *)arg1 ;
@end

