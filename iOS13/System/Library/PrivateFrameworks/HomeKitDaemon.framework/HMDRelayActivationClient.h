/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)open;
-(void)close;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDAccessory *)accessory;
-(void)_closeWithError:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 ;
-(void)requestChallenge;
-(void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3 ;
-(void)setChallengeIdentifier:(NSString *)arg1 ;
-(NSString *)challengeIdentifier;
@end

