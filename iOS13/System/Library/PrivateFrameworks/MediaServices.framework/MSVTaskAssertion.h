/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(BOOL)isValid;
-(void)setInvalidationHandler:(id)arg1 ;
-(BOOL)acquire;
-(id)invalidationHandler;
-(NSString *)bundleID;
-(int)pid;
-(unsigned)_BSKFlagsForMSVFlags:(unsigned long long)arg1 ;
-(unsigned)_BSKReasonForMSVReason:(unsigned long long)arg1 ;
-(id)_initWithName:(id)arg1 bundleID:(id)arg2 pid:(int)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(id)initWithName:(id)arg1 bundleID:(id)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(id)initWithName:(id)arg1 pid:(int)arg2 subsystem:(id)arg3 reason:(unsigned long long)arg4 flags:(unsigned long long)arg5 ;
-(void)_cancelInvalidationTimerWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 pid:(int)arg2 bundleID:(id)arg3 subsystem:(id)arg4 reason:(unsigned long long)arg5 flags:(unsigned long long)arg6 ;
-(void)invalidateOnDate:(id)arg1 ;
@end

