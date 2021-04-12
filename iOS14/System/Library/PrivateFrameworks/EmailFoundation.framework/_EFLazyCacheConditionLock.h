/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <Foundation/NSConditionLock.h>

@interface _EFLazyCacheConditionLock : NSConditionLock {

	Aq _waiterCount;

}

@property (readonly) long long waiterCount; 
-(id)initWithCondition:(long long)arg1 ;
-(long long)waiterCount;
-(void)decrementWaiterCount;
-(void)incrementWaiterCount;
@end

