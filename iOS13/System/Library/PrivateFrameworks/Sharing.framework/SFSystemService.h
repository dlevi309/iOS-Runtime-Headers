/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@protocol OS_dispatch_queue;
@class SFService, NSObject;

@interface SFSystemService : NSObject {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	SFService* _sfService;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(id)init;
-(id)description;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activate;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_handleGetSystemInfoRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleRebootSystemForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleProfilesGetForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleProfileInstallForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleProfileRemoveForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

