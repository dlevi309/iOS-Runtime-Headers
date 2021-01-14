/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


@class NSMutableArray;

@interface CRIntermediateDetectorResult : NSObject {

	NSMutableArray* _pyramidPreIntraScaleNMSTextFeatures;
	NSMutableArray* _pyramidPostIntraScaleNMSTextFeatures;
	NSMutableArray* _pyramidPostInterScaleNMSTextFeatures;
	NSMutableArray* _pyramidScaleSize;

}

@property (nonatomic,retain) NSMutableArray * pyramidPreIntraScaleNMSTextFeatures;               //@synthesize pyramidPreIntraScaleNMSTextFeatures=_pyramidPreIntraScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * pyramidPostIntraScaleNMSTextFeatures;              //@synthesize pyramidPostIntraScaleNMSTextFeatures=_pyramidPostIntraScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * pyramidPostInterScaleNMSTextFeatures;              //@synthesize pyramidPostInterScaleNMSTextFeatures=_pyramidPostInterScaleNMSTextFeatures - In the implementation block
@property (nonatomic,retain) NSMutableArray * pyramidScaleSize;                                  //@synthesize pyramidScaleSize=_pyramidScaleSize - In the implementation block
-(NSMutableArray *)pyramidPostInterScaleNMSTextFeatures;
-(void)setPyramidPostInterScaleNMSTextFeatures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pyramidPostIntraScaleNMSTextFeatures;
-(void)setPyramidPostIntraScaleNMSTextFeatures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pyramidPreIntraScaleNMSTextFeatures;
-(void)setPyramidPreIntraScaleNMSTextFeatures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pyramidScaleSize;
-(void)setPyramidScaleSize:(NSMutableArray *)arg1 ;
-(id)initWithNumberOfScales:(long long)arg1 ;
@end

