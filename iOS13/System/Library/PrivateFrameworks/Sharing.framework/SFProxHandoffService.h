/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class SFService, NSObject;

@interface SFProxHandoffService : NSObject {

	BOOL _activateCalled;
	/*^block*/id _activateCompletion;
	BOOL _invalidateCalled;
	SFService* _service;
	int _serviceState;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(void)_activated;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_serviceStart;
-(void)_completedWithError:(id)arg1 ;
@end

