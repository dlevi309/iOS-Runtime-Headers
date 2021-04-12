/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/PKCancelObservable.h>

@class NSMutableArray, NSString;

@interface PKAsyncOperationState : NSObject <PKCancelObservable> {

	os_unfair_lock_s _actionLock;
	NSMutableArray* _cancelActions;
	os_unfair_lock_s _lock;
	BOOL _canceled;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
-(id)init;
-(void)_invalidate;
-(id)_init;
-(void)performAction:(/*^block*/id)arg1 ;
-(void)_cancel;
-(BOOL)isCanceled;
-(void)addCancelAction:(/*^block*/id)arg1 ;
@end

