/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)stop;
-(void)start;
-(RPCompanionLinkClient *)client;
-(void)setClient:(RPCompanionLinkClient *)arg1 ;
-(id)responseForRequest:(id)arg1 ;
-(void)addDevice:(id)arg1 ;
-(id)initWithCall:(id)arg1 ;
-(BOOL)isLocallyHosted;
-(void)sendString:(id)arg1 ;
-(void)callDidReceiveText:(id)arg1 forUtterance:(id)arg2 ;
-(void)setupRapportClient;
-(RPCompanionLinkDevice *)pairedCallDevice;
-(void)updateCallWithRemoteFailure;
-(void)resetRapportClientAndInvalidate:(BOOL)arg1 ;
-(void)sendCallIDChallengeToDevice:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
-(void)setPairedCallDevice:(RPCompanionLinkDevice *)arg1 ;
@end

