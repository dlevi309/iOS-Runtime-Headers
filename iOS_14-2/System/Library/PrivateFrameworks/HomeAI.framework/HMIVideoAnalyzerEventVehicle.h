/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoAnalyzerEvent.h>

@interface HMIVideoAnalyzerEventVehicle : HMIVideoAnalyzerEvent
+(id)logCategory;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 ;
-(id)initWithConfidence:(id)arg1 boundingBox:(CGRect)arg2 hasMotionVectors:(BOOL)arg3 ;
@end

