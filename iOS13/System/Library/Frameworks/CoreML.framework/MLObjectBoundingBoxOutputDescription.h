/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString, NSArray;

@interface MLObjectBoundingBoxOutputDescription : NSObject {

	int _format;
	NSString* _confidenceFeatureName;
	NSString* _coordinatesFeatureName;
	NSArray* _labelNames;

}

@property (assign) int format;                                     //@synthesize format=_format - In the implementation block
@property (retain) NSString * confidenceFeatureName;               //@synthesize confidenceFeatureName=_confidenceFeatureName - In the implementation block
@property (retain) NSString * coordinatesFeatureName;              //@synthesize coordinatesFeatureName=_coordinatesFeatureName - In the implementation block
@property (retain) NSArray * labelNames;                           //@synthesize labelNames=_labelNames - In the implementation block
-(int)format;
-(NSArray *)labelNames;
-(void)setLabelNames:(NSArray *)arg1 ;
-(void)setFormat:(int)arg1 ;
-(NSString *)confidenceFeatureName;
-(void)setConfidenceFeatureName:(NSString *)arg1 ;
-(NSString *)coordinatesFeatureName;
-(void)setCoordinatesFeatureName:(NSString *)arg1 ;
@end

