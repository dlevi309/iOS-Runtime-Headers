/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/

#import <Osprey/Osprey-Structs.h>
#import <Osprey/OspreyDeviceAuthenticating.h>

@class OspreyGRPCChannel, OspreyAuthService, OspreyConnectionPreferences, NSData, NSDate, NSString;

@interface OspreyAbsintheAuthenticator : NSObject <OspreyDeviceAuthenticating> {

	OspreyGRPCChannel* _channel;
	OspreyAuthService* _authService;
	OspreyConnectionPreferences* _connectionPreferences;
	long long _state;
	NACContextOpaque_Ref _nacContext;
	NSData* _sessionInfo;
	NSDate* _sessionExpireOn;

}

@property (assign,nonatomic) long long state;                       //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSData * sessionInfo;                  //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setState:(long long)arg1 ;
-(long long)state;
-(NSData *)sessionInfo;
-(void)setSessionInfo:(NSData *)arg1 ;
-(void)dealloc;
-(void)didMoveToState:(long long)arg1 ;
-(unsigned long long)authenticationStrategyVersion;
-(void)willMoveToState:(long long)arg1 ;
-(BOOL)_readyToSignClientData;
-(id)_signData:(id)arg1 ;
-(void)_ensureAuthenticatedWithCompletion:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(void)_initializeAbsintheClientWithCertificateData:(id)arg1 success:(/*^block*/id)arg2 fail:(/*^block*/id)arg3 ;
-(BOOL)isSessionInfoExpired;
-(void)signData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2 ;
@end

