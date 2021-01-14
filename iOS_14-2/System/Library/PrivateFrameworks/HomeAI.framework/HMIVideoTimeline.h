/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMIVideoEventBuffer;

@interface HMIVideoTimeline : HMFObject {

	HMIVideoEventBuffer* _buffer;

}
-(id)initWithMaxCapacity:(long long)arg1 ;
-(id)dateAtTime:(SCD_Struct_HM3)arg1 ;
-(void)addDate:(id)arg1 atTime:(SCD_Struct_HM3)arg2 ;
-(double)timeIntervalSinceDateAtTime:(SCD_Struct_HM3)arg1 ;
@end

