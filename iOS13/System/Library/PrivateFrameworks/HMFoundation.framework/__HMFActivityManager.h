/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>

@protocol HMFLocking;
@class NSHashTable;

@interface __HMFActivityManager : HMFObject {

	id<HMFLocking> _lock;
	NSHashTable* _activities;

}
-(id)init;
@end

