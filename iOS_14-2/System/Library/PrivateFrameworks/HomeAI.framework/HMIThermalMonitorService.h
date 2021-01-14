/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMIThermalMonitorService : HMFObject {

	IOHIDServiceClientRef _service;

}
-(id)initWithService:(IOHIDServiceClientRef)arg1 ;
-(void)dealloc;
-(double)readValue;
@end

