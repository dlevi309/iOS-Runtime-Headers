/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/VNObservation.h>

@class NSData;

@interface VNFeaturePrintObservation : VNObservation

@property (readonly) unsigned long long elementType; 
@property (readonly) unsigned long long elementCount; 
@property (readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)elementType;
-(unsigned long long)elementCount;
-(NSData *)data;
-(BOOL)computeDistance:(float*)arg1 toFeaturePrintObservation:(id)arg2 error:(id*)arg3 ;
-(float)computeDistanceToFeaturePrintObservation:(id)arg1 error:(id*)arg2 ;
@end

