/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class NSCondition;

@interface AVEventWaiter : NSObject {

	NSCondition* _condition;
	BOOL _eventCompleted;

}
-(id)init;
-(void)markEventAsCompleted;
-(void)waitUntilEventIsCompleted;
-(void)dealloc;
@end

