/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSArray, NSString;

@interface ARPersonDetectionData : NSObject <ARResultData> {

	double _timestamp;
	NSArray* _detectedObjects;

}

@property (assign,nonatomic) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSArray * detectedObjects;               //@synthesize detectedObjects=_detectedObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setDetectedObjects:(NSArray *)arg1 ;
-(id)mergeOverlappingDetectionsWithThreshold:(float)arg1 ;
-(NSArray *)detectedObjects;
-(id)transformToCVPixelBuffer:(CVBufferRef)arg1 depthBuffer:(CVBufferRef)arg2 ;
@end

