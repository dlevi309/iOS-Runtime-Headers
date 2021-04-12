/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <Foundation/NSConditionLock.h>

@interface _EFLazyCacheConditionLock : NSConditionLock {

	Aq _waiterCount;

}

@property (readonly) long long waiterCount; 
-(id)initWithCondition:(long long)arg1 ;
-(long long)waiterCount;
-(void)incrementWaiterCount;
-(void)decrementWaiterCount;
@end

