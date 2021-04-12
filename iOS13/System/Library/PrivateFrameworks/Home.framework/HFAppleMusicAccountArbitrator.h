/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class ACAccount, NSSet, NAFuture;

@interface HFAppleMusicAccountArbitrator : NSObject {

	BOOL _forceLogout;
	ACAccount* _account;
	NSSet* _accessories;
	/*^block*/id _contextGenerator;
	long long _loginType;
	NAFuture* _activeArbitrationFuture;

}

@property (nonatomic,retain) NAFuture * activeArbitrationFuture;              //@synthesize activeArbitrationFuture=_activeArbitrationFuture - In the implementation block
@property (nonatomic,readonly) ACAccount * account;                           //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSSet * accessories;                      //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,copy,readonly) id contextGenerator;                      //@synthesize contextGenerator=_contextGenerator - In the implementation block
@property (assign,nonatomic) long long loginType;                             //@synthesize loginType=_loginType - In the implementation block
@property (assign,nonatomic) BOOL forceLogout;                                //@synthesize forceLogout=_forceLogout - In the implementation block
-(id)init;
-(ACAccount *)account;
-(NSSet *)accessories;
-(BOOL)forceLogout;
-(void)setForceLogout:(BOOL)arg1 ;
-(id)pendingArbitrationExecutionFuture;
-(id)initWithAccessories:(id)arg1 account:(id)arg2 contextGenerator:(/*^block*/id)arg3 ;
-(NAFuture *)activeArbitrationFuture;
-(id)contextGenerator;
-(long long)_resolvedLoginType:(id*)arg1 ;
-(void)setActiveArbitrationFuture:(NAFuture *)arg1 ;
-(long long)loginType;
-(void)setLoginType:(long long)arg1 ;
@end

