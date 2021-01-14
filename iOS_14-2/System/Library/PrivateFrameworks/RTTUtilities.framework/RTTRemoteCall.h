/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
*/

#import <RTTUtilities/RTTCall.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, RPCompanionLinkClient, RPCompanionLinkDevice;

@interface RTTRemoteCall : RTTCall {

	NSMutableArray* _devices;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	RPCompanionLinkClient* _client;
	RPCompanionLinkDevice* _pairedCallDevice;

}

@property (nonatomic,retain) RPCompanionLinkClient * client;                        //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) RPCompanionLinkDevice * pairedCallDevice;              //@synthesize pairedCallDevice=_pairedCallDevice - In the implementation block
-(RPCompanionLinkClient *)client;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(void)start;
-(void)addDevice:(id)arg1 ;
-(void)stop;
-(id)initWithCall:(id)arg1 ;
-(BOOL)isLocallyHosted;
-(void)sendString:(id)arg1 ;
-(void)callDidReceiveText:(id)arg1 forUtterance:(id)arg2 ;
-(void)setupRapportClient;
-(RPCompanionLinkDevice *)pairedCallDevice;
-(void)updateCallWithRemoteFailure;
-(void)sendCallIDChallengeToDevice:(id)arg1 ;
-(void)resetRapportClientAndInvalidate:(BOOL)arg1 ;
-(id)responseForRequest:(id)arg1 options:(id)arg2 ;
-(void)removeDevice:(id)arg1 ;
-(void)sendCallIDChallengeToDeviceId:(id)arg1 ;
-(void)setPairedCallDevice:(RPCompanionLinkDevice *)arg1 ;
@end

