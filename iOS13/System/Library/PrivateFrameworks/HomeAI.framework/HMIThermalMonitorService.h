/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@interface HMIThermalMonitorService : HMFObject {

	IOHIDServiceClientRef _service;

}
-(void)dealloc;
-(id)initWithService:(IOHIDServiceClientRef)arg1 ;
-(double)readValue;
@end

