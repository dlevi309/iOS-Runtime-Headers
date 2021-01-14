/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <libobjc.A.dylib/SRSensorKitServiceClientAuthorizationListening.h>

@class NSXPCConnection, NSMapTable, NSSet, NSNumber;

@interface SRAuthorizationClient : NSObject <SRSensorKitServiceClientAuthorizationListening> {

	int _registrationToken;
	NSXPCConnection* _connection;
	NSMapTable* _listeners;
	NSSet* _actualAuthorizedServices;
	NSSet* _deniedServices;
	NSNumber* _prerequisites;

}

@property (assign,nonatomic) BOOL dataCollectionEnabled; 
@property (assign,nonatomic) BOOL firstRunOnboardingCompleted; 
+(void)initialize;
-(id)init;
-(void)setDataCollectionEnabled:(BOOL)arg1 ;
-(BOOL)dataCollectionEnabled;
-(void)dealloc;
-(BOOL)firstRunOnboardingCompleted;
-(void)setFirstRunOnboardingCompleted:(BOOL)arg1 ;
-(void)authorizedServicesDidChange:(id)arg1 deniedServices:(id)arg2 prerequisites:(long long)arg3 bundleIdentifier:(id)arg4 ;
-(void)reregisterAfterInterruption:(id)arg1 effectiveBundleId:(id)arg2 ;
@end

