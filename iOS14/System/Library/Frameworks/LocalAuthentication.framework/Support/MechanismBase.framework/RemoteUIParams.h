/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/MechanismBase.framework/MechanismBase
*/


@protocol LAUIMechanismLARemoteUIHost;
@class MechanismUI, NSData, NSNumber;

@interface RemoteUIParams : NSObject {

	BOOL _undimScreen;
	BOOL _forSiri;
	int _pid;
	MechanismUI*<LAUIMechanism>*<LARemoteUIHost> _uiMechanism;
	NSData* _auditTokenData;
	NSNumber* _userId;

}

@property (nonatomic,readonly) MechanismUI*<LAUIMechanism>*<LARemoteUIHost> uiMechanism;              //@synthesize uiMechanism=_uiMechanism - In the implementation block
@property (nonatomic,readonly) NSData * auditTokenData;                                               //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (nonatomic,readonly) BOOL undimScreen;                                                      //@synthesize undimScreen=_undimScreen - In the implementation block
@property (nonatomic,readonly) BOOL forSiri;                                                          //@synthesize forSiri=_forSiri - In the implementation block
@property (nonatomic,readonly) int pid;                                                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSNumber * userId;                                                     //@synthesize userId=_userId - In the implementation block
-(NSNumber *)userId;
-(int)pid;
-(BOOL)undimScreen;
-(NSData *)auditTokenData;
-(BOOL)forSiri;
-(id)initWithUIMechanism:(id)arg1 auditToken:(id)arg2 undimScreen:(BOOL)arg3 forSiri:(BOOL)arg4 pid:(int)arg5 userId:(id)arg6 ;
-(MechanismUI*<LAUIMechanism>*<LARemoteUIHost>)uiMechanism;
@end

