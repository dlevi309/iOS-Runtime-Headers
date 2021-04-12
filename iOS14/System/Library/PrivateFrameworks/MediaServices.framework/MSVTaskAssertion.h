/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


@protocol OS_dispatch_source;
@class NSString, NSObject, BKSProcessAssertion;

@interface MSVTaskAssertion : NSObject {

	NSString* _uuid;
	NSString* _bundleID;
	NSString* _subsystem;
	int _pid;
	NSObject*<OS_dispatch_source> _invalidationTimer;
	BOOL _acquired;
	BKSProcessAssertion* _processAssertion;
	NSString* _name;
	/*^block*/id _invalidationHandler;

}

@property (nonatomic,readonly) NSString * bundleID;                    //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) int pid; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                     //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)_cancelInvalidationTimerWithCompletion:(/*^block*/id)arg1 ;
-(int)pid;
-(id)init;
-(unsigned)_BSKReasonForMSVReason:(unsigned long long)arg1 ;
-(NSString *)name;
-(void)invalidateOnDate:(id)arg1 ;
-(id)_initWithName:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(id)initWithName:(id)arg1 pid:(int)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(id)description;
-(id)initWithName:(id)arg1 bundleID:(id)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(BOOL)isValid;
-(BOOL)acquire;
-(id)initWithName:(id)arg1 pid:(int)arg2 bundleID:(id)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(NSString *)bundleID;
-(void)invalidate;
-(unsigned)_BSKFlagsForMSVFlags:(unsigned long long)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)dealloc;
@end

