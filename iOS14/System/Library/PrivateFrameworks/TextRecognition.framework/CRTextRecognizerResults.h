/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSDictionary, NSDate, NSArray, CRLatticeResults;

@interface CRTextRecognizerResults : NSObject {

	NSDictionary* _inputOptions;
	NSDate* _startTime;
	NSDate* _endTime;
	NSArray* _textFeatures;
	NSArray* _codeMaps;
	CRLatticeResults* _latticeResults;

}

@property (nonatomic,retain) NSDictionary * inputOptions;                    //@synthesize inputOptions=_inputOptions - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                             //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                               //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSArray * textFeatures;                         //@synthesize textFeatures=_textFeatures - In the implementation block
@property (nonatomic,retain) NSArray * codeMaps;                             //@synthesize codeMaps=_codeMaps - In the implementation block
@property (nonatomic,retain) CRLatticeResults * latticeResults;              //@synthesize latticeResults=_latticeResults - In the implementation block
-(void)setStartTime:(NSDate *)arg1 ;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(NSDate *)startTime;
-(NSArray *)codeMaps;
-(void)setTextFeatures:(NSArray *)arg1 ;
-(NSArray *)textFeatures;
-(NSDictionary *)inputOptions;
-(void)setInputOptions:(NSDictionary *)arg1 ;
-(void)setCodeMaps:(NSArray *)arg1 ;
-(CRLatticeResults *)latticeResults;
-(void)setLatticeResults:(CRLatticeResults *)arg1 ;
@end

