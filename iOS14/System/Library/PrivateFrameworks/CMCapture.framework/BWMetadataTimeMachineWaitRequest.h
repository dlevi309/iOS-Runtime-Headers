/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWMetadataTimeMachineRequest.h>

@interface BWMetadataTimeMachineWaitRequest : BWMetadataTimeMachineRequest {

	int _capacity;
	int _completionCapacity;

}

@property (nonatomic,readonly) int capacity;                        //@synthesize capacity=_capacity - In the implementation block
@property (nonatomic,readonly) int completionCapacity;              //@synthesize completionCapacity=_completionCapacity - In the implementation block
-(int)capacity;
-(void)completeWithCapacity:(int)arg1 ;
-(int)completionCapacity;
-(id)initWithCapacity:(int)arg1 ;
@end

