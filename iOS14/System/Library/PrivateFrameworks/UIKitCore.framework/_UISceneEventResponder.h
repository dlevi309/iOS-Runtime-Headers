/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UISceneEventResponse;

@interface _UISceneEventResponder : NSObject {

	os_unfair_lock_s _sendLock;
	os_unfair_lock_s _dataLock;
	_UISceneEventResponse* _dataLock_first;
	_UISceneEventResponse* _dataLock_last;

}
-(id)init;
-(void)enqueuePostCommitResponse:(/*^block*/id)arg1 ;
-(void)enqueuePostSynchronizeResponse:(/*^block*/id)arg1 ;
@end

