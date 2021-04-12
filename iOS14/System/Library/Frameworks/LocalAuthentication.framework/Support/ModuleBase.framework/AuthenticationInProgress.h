/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
*/


@protocol LAUIDelegate;
@class NSDictionary, NSDate, MechanismBase;

@interface AuthenticationInProgress : NSObject {

	id<LAUIDelegate> _uiDelegate;
	NSDictionary* _internalOptions;
	/*^block*/id _reply;
	int _originatorPid;
	unsigned _originatorUid;
	NSDate* _started;
	BOOL _running;
	long long _policy;
	MechanismBase* _mechanism;
	long long _originatorId;

}

@property (getter=isRunning,nonatomic,readonly) BOOL running;              //@synthesize running=_running - In the implementation block
@property (nonatomic,readonly) long long policy;                           //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) MechanismBase * mechanism;                  //@synthesize mechanism=_mechanism - In the implementation block
@property (nonatomic,readonly) long long originatorId;                     //@synthesize originatorId=_originatorId - In the implementation block
-(long long)policy;
-(id)description;
-(void)runWithCompletionHandler:(/*^block*/id)arg1 ;
-(MechanismBase *)mechanism;
-(BOOL)isRunning;
-(long long)originatorId;
-(id)initWithMechanism:(id)arg1 policy:(long long)arg2 uiDelegate:(id)arg3 originator:(id)arg4 internalInfo:(id)arg5 reply:(/*^block*/id)arg6 ;
@end

