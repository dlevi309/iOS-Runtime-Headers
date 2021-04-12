/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/AKAnisetteServiceProtocol.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString, HMDRemoteLoginMessageSender;

@interface HMDRemoteLoginAnisetteDataProvider : HMFObject <AKAnisetteServiceProtocol, HMFLogging> {

	NSString* _sessionID;
	HMDRemoteLoginMessageSender* _remoteMessageSender;

}

@property (nonatomic,readonly) NSString * sessionID;                                         //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDRemoteLoginMessageSender * remoteMessageSender;              //@synthesize remoteMessageSender=_remoteMessageSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)sessionID;
-(void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchAnisetteDataAndProvisionIfNecessary:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)logIdentifier;
-(void)provisionAnisetteWithCompletion:(/*^block*/id)arg1 ;
-(void)syncAnisetteWithSIMData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)eraseAnisetteWithCompletion:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDRemoteLoginMessageSender *)remoteMessageSender;
-(void)setRemoteMessageSender:(HMDRemoteLoginMessageSender *)arg1 ;
-(id)initWithSessionID:(id)arg1 remoteMessageSender:(id)arg2 ;
@end

