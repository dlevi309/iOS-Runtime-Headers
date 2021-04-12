/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSHashTable;

@interface __HMFActivityManager : HMFObject {

	os_unfair_lock_s _lock;
	NSHashTable* _activities;

}
-(id)init;
@end

