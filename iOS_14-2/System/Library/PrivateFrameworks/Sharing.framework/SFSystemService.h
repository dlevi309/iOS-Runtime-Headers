/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_handleGetSystemInfoRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleRebootSystemForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleProfilesGetForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleProfileInstallForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_handleProfileRemoveForSession:(id)arg1 request:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(id)description;
-(void)invalidate;
-(void)_sfServiceStart;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_handleSessionEnded:(id)arg1 ;
@end

