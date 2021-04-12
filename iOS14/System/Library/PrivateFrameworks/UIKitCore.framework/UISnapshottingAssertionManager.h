/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)withLock:(/*^block*/id)arg1 ;
-(void)relinquishAssertion:(id)arg1 ;
-(id)acquireNewAssertion;
-(void)executeIfNoActiveAssertions:(/*^block*/id)arg1 ;
-(id)_init;
-(void)dealloc;
@end

