/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
*/

#import <Osprey/OspreyDeviceAuthenticating.h>

@class OspreyMescalSession, OspreyAuthService, OspreyConnectionPreferences, OspreyGRPCChannel, NSDate, NSData, NSString;

@interface OspreyMescalAuthentication : NSObject <OspreyDeviceAuthenticating> {

	OspreyMescalSession* _mescalSession;
	OspreyAuthService* _authService;
	OspreyConnectionPreferences* _connectionPreferences;
	OspreyGRPCChannel* _grpcChannel;
	unsigned long long _state;
	NSDate* _sessionExpiration;
	NSData* _certificateData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)state;
-(id)mescalSession;
-(unsigned long long)authenticationStrategyVersion;
-(void)signData:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(id)initWithChannel:(id)arg1 connectionPreferences:(id)arg2 ;
-(void)_continuePreparationWithCompletion:(/*^block*/id)arg1 ;
-(void)moveToState:(unsigned long long)arg1 ;
-(BOOL)isSessionExpired;
@end

