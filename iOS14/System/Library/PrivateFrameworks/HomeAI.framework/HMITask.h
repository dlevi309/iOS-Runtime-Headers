/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HMFoundation/HMFOperation.h>

@class NSDictionary;

@interface HMITask : HMFOperation {

	int _taskID;

}

@property (readonly) int taskID;                          //@synthesize taskID=_taskID - In the implementation block
@property (readonly) NSDictionary * results; 
-(NSDictionary *)results;
-(int)taskID;
-(id)initWithTaskID:(int)arg1 timeout:(double)arg2 ;
-(id)initWithTaskID:(int)arg1 ;
@end

