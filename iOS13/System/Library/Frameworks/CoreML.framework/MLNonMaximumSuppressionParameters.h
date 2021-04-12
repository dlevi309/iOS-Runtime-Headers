/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString, NSArray;

@interface MLNonMaximumSuppressionParameters : NSObject {

	BOOL _perClass;
	int _suppressionMethod;
	double _iouThreshold;
	double _confidenceThreshold;
	unsigned long long _minBoxes;
	long long _maxBoxes;
	unsigned long long _numClasses;
	NSString* _confidenceInputFeatureName;
	NSString* _coordinatesInputFeatureName;
	NSString* _iouThresholdInputFeatureName;
	NSString* _confidenceThresholdInputFeatureName;
	NSString* _confidenceOutputFeatureName;
	NSString* _coordinatesOutputFeatureName;
	NSArray* _labelNames;

}

@property (assign) int suppressionMethod;                                       //@synthesize suppressionMethod=_suppressionMethod - In the implementation block
@property (assign) double iouThreshold;                                         //@synthesize iouThreshold=_iouThreshold - In the implementation block
@property (assign) double confidenceThreshold;                                  //@synthesize confidenceThreshold=_confidenceThreshold - In the implementation block
@property (assign) unsigned long long minBoxes;                                 //@synthesize minBoxes=_minBoxes - In the implementation block
@property (assign) long long maxBoxes;                                          //@synthesize maxBoxes=_maxBoxes - In the implementation block
@property (assign) unsigned long long numClasses;                               //@synthesize numClasses=_numClasses - In the implementation block
@property (assign) BOOL perClass;                                               //@synthesize perClass=_perClass - In the implementation block
@property (retain) NSString * confidenceInputFeatureName;                       //@synthesize confidenceInputFeatureName=_confidenceInputFeatureName - In the implementation block
@property (retain) NSString * coordinatesInputFeatureName;                      //@synthesize coordinatesInputFeatureName=_coordinatesInputFeatureName - In the implementation block
@property (retain) NSString * iouThresholdInputFeatureName;                     //@synthesize iouThresholdInputFeatureName=_iouThresholdInputFeatureName - In the implementation block
@property (retain) NSString * confidenceThresholdInputFeatureName;              //@synthesize confidenceThresholdInputFeatureName=_confidenceThresholdInputFeatureName - In the implementation block
@property (retain) NSString * confidenceOutputFeatureName;                      //@synthesize confidenceOutputFeatureName=_confidenceOutputFeatureName - In the implementation block
@property (retain) NSString * coordinatesOutputFeatureName;                     //@synthesize coordinatesOutputFeatureName=_coordinatesOutputFeatureName - In the implementation block
@property (retain) NSArray * labelNames;                                        //@synthesize labelNames=_labelNames - In the implementation block
-(NSArray *)labelNames;
-(void)setLabelNames:(NSArray *)arg1 ;
-(id)objectBoundingBoxOutputDescription;
-(int)suppressionMethod;
-(void)setSuppressionMethod:(int)arg1 ;
-(double)iouThreshold;
-(void)setIouThreshold:(double)arg1 ;
-(double)confidenceThreshold;
-(void)setConfidenceThreshold:(double)arg1 ;
-(unsigned long long)minBoxes;
-(void)setMinBoxes:(unsigned long long)arg1 ;
-(long long)maxBoxes;
-(void)setMaxBoxes:(long long)arg1 ;
-(unsigned long long)numClasses;
-(void)setNumClasses:(unsigned long long)arg1 ;
-(BOOL)perClass;
-(void)setPerClass:(BOOL)arg1 ;
-(NSString *)confidenceInputFeatureName;
-(void)setConfidenceInputFeatureName:(NSString *)arg1 ;
-(NSString *)coordinatesInputFeatureName;
-(void)setCoordinatesInputFeatureName:(NSString *)arg1 ;
-(NSString *)iouThresholdInputFeatureName;
-(void)setIouThresholdInputFeatureName:(NSString *)arg1 ;
-(NSString *)confidenceThresholdInputFeatureName;
-(void)setConfidenceThresholdInputFeatureName:(NSString *)arg1 ;
-(NSString *)confidenceOutputFeatureName;
-(void)setConfidenceOutputFeatureName:(NSString *)arg1 ;
-(NSString *)coordinatesOutputFeatureName;
-(void)setCoordinatesOutputFeatureName:(NSString *)arg1 ;
@end

