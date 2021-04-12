/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMITask.h>

@class NSUUID;

@interface HMIHomeTask : HMITask {

	NSUUID* _homeUUID;

}

@property (readonly) NSUUID * homeUUID;              //@synthesize homeUUID=_homeUUID - In the implementation block
-(NSUUID *)homeUUID;
-(id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 timeout:(double)arg3 ;
@end

