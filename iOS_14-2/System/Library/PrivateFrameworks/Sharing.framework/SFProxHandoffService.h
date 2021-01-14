/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)_cleanup;
-(void)_serviceStart;
-(void)_completedWithError:(id)arg1 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_activated;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)description;
-(void)invalidate;
-(void)dealloc;
@end

