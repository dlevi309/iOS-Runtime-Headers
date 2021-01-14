/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/ARResultData.h>

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
-(double)timestamp;
-(NSString *)description;
-(void)setTimestamp:(double)arg1 ;
-(void)setDetectedObjects:(NSArray *)arg1 ;
-(id)mergeOverlappingDetectionsWithThreshold:(float)arg1 ;
-(NSArray *)detectedObjects;
-(id)transformToCVPixelBuffer:(CVBufferRef)arg1 depthBuffer:(CVBufferRef)arg2 ;
@end

