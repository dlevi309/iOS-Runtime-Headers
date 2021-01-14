/*
* Generated on Thursday, January 14, 2021 at 2:25:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <CoreHAP/HAPRelayActivationClient.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDAccessory, NSObject, NSString;

@interface HMDRelayActivationClient : HAPRelayActivationClient <HMFLogging> {

	HMDAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _challengeIdentifier;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSString * challengeIdentifier;                        //@synthesize challengeIdentifier=_challengeIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                     //@synthesize accessory=_accessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)open;
-(void)close;
-(HMDAccessory *)accessory;
-(void)_closeWithError:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(void)setChallengeIdentifier:(NSString *)arg1 ;
-(NSString *)challengeIdentifier;
-(void)requestChallenge;
-(void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3 ;
@end

