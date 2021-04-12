/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSRecursiveLock, NSMutableSet;

@interface IMIDStatusController : NSObject {

	NSRecursiveLock* _servicesLock;
	NSMutableSet* _servicesRegistered;

}

@property (nonatomic,retain) NSMutableSet * _servicesRegistered;              //@synthesize servicesRegistered=_servicesRegistered - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * _servicesLock;                 //@synthesize servicesLock=_servicesLock - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSRecursiveLock *)_servicesLock;
-(long long)__statusForID:(id)arg1 onService:(id)arg2 isCanonicalized:(BOOL)arg3 ;
-(long long)_idStatusForID:(id)arg1 onService:(id)arg2 ;
-(void)_processIDStatusResponseForURI:(id)arg1 resultStatus:(long long)arg2 forService:(id)arg3 ;
-(void)_requestStatusForID:(id)arg1 onService:(id)arg2 onAccount:(id)arg3 ;
-(long long)_statusForCanonicalizedID:(id)arg1 onService:(id)arg2 ;
-(long long)_idStatusForID:(id)arg1 onAccount:(id)arg2 ;
-(void)requestStatusForID:(id)arg1 onService:(id)arg2 ;
-(void)requestStatusForID:(id)arg1 onAccount:(id)arg2 ;
-(long long)statusForID:(id)arg1 onService:(id)arg2 ;
-(void)set_servicesLock:(NSRecursiveLock *)arg1 ;
-(NSMutableSet *)_servicesRegistered;
-(void)set_servicesRegistered:(NSMutableSet *)arg1 ;
@end

