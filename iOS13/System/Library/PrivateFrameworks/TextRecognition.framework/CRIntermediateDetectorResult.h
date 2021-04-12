/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithNumberOfScales:(long long)arg1 ;
-(NSMutableArray *)pyramidScaleSize;
-(NSMutableArray *)pyramidPreIntraScaleNMSTextFeatures;
-(void)setPyramidScaleSize:(NSMutableArray *)arg1 ;
-(void)setPyramidPreIntraScaleNMSTextFeatures:(NSMutableArray *)arg1 ;
-(void)setPyramidPostIntraScaleNMSTextFeatures:(NSMutableArray *)arg1 ;
-(void)setPyramidPostInterScaleNMSTextFeatures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pyramidPostIntraScaleNMSTextFeatures;
-(NSMutableArray *)pyramidPostInterScaleNMSTextFeatures;
@end

