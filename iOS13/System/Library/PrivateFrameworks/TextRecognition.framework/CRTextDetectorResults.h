/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSDictionary, NSDate, NSArray, NSMutableArray;

@interface CRTextDetectorResults : NSObject {

	NSDictionary* _inputOptions;
	NSDate* _startTime;
	NSDate* _endTime;
	NSArray* _textFeatures;
	NSArray* _pyramidPreIntraScaleNMSTextFeatures;
	NSArray* _pyramidPostIntraScaleNMSTextFeatures;
	NSArray* _pyramidPostInterScaleNMSTextFeatures;
	NSMutableArray* _pyramidScaleSize;

}

@property (nonatomic,retain) NSDictionary * inputOptions;                                 //@synthesize inputOptions=_inputOptions - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                                          //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                                            //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSArray * textFeatures;                                      //@synthesize textFeatures=_textFeatures - In the implementation block
@property (nonatomic,retain) NSArray * pyramidPreIntraScaleNMSTextFeatures;               //@synthesize pyramidPreIntraScaleNMSTextFeatures=_pyramidPreIntraScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSArray * pyramidPostIntraScaleNMSTextFeatures;              //@synthesize pyramidPostIntraScaleNMSTextFeatures=_pyramidPostIntraScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSArray * pyramidPostInterScaleNMSTextFeatures;              //@synthesize pyramidPostInterScaleNMSTextFeatures=_pyramidPostInterScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * pyramidScaleSize;                           //@synthesize pyramidScaleSize=_pyramidScaleSize - In the implementation block
-(NSDate *)startTime;
-(NSDate *)endTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSArray *)textFeatures;
-(NSMutableArray *)pyramidScaleSize;
-(NSArray *)pyramidPreIntraScaleNMSTextFeatures;
-(void)setPyramidScaleSize:(NSMutableArray *)arg1 ;
-(void)setPyramidPreIntraScaleNMSTextFeatures:(NSArray *)arg1 ;
-(void)setPyramidPostIntraScaleNMSTextFeatures:(NSArray *)arg1 ;
-(void)setPyramidPostInterScaleNMSTextFeatures:(NSArray *)arg1 ;
-(NSArray *)pyramidPostIntraScaleNMSTextFeatures;
-(NSArray *)pyramidPostInterScaleNMSTextFeatures;
-(NSDictionary *)inputOptions;
-(void)setInputOptions:(NSDictionary *)arg1 ;
-(void)setTextFeatures:(NSArray *)arg1 ;
@end

