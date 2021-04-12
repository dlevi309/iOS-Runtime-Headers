/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableSet;

@interface UISnapshottingAssertionManager : NSObject {

	opaque_pthread_mutex_t lock;
	NSMutableSet* _heldAssertions;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)relinquishAssertion:(id)arg1 ;
-(void)withLock:(/*^block*/id)arg1 ;
-(id)acquireNewAssertion;
-(void)executeIfNoActiveAssertions:(/*^block*/id)arg1 ;
@end

