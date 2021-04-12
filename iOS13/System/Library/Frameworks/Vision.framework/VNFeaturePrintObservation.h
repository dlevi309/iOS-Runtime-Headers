/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNObservation.h>

@class NSData;

@interface VNFeaturePrintObservation : VNObservation

@property (readonly) unsigned long long elementType; 
@property (readonly) unsigned long long elementCount; 
@property (readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
-(NSData *)data;
-(unsigned long long)elementType;
-(unsigned long long)elementCount;
-(BOOL)computeDistance:(float*)arg1 toFeaturePrintObservation:(id)arg2 error:(id*)arg3 ;
-(float)computeDistanceToFeaturePrintObservation:(id)arg1 error:(id*)arg2 ;
@end

