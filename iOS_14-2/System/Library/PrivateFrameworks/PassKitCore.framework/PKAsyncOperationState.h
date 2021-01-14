/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (getter=isCanceled,nonatomic,readonly) BOOL canceled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidate;
-(BOOL)isCanceled;
-(id)init;
-(void)addCancelAction:(/*^block*/id)arg1 ;
-(void)_cancel;
-(id)_init;
-(void)performAction:(/*^block*/id)arg1 ;
@end

