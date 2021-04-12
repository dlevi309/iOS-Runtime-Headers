/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HMIHomeTask.h>

@class NSUUID;

@interface HMIRemovePersonsModelTask : HMIHomeTask {

	NSUUID* _sourceUUID;

}

@property (readonly) NSUUID * sourceUUID;              //@synthesize sourceUUID=_sourceUUID - In the implementation block
+(id)logCategory;
-(id)logIdentifier;
-(void)main;
-(NSUUID *)sourceUUID;
-(id)initWithTaskID:(int)arg1 homeUUID:(id)arg2 sourceUUID:(id)arg3 ;
@end

