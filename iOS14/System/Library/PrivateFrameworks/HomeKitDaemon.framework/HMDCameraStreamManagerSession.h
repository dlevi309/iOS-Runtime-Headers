/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol HMDCameraStreamControlManagerProtocol;
@class HMDCameraStreamSessionID, NSString, HMFTimer, NSNumber, HMFMessage;

@interface HMDCameraStreamManagerSession : HMFObject {

	id<HMDCameraStreamControlManagerProtocol> _streamControlManager;
	HMDCameraStreamSessionID* _sessionID;
	NSString* _destinationID;
	HMFTimer* _streamSetupTimer;
	NSString* _streamShowingAppIdentifier;
	NSNumber* _slotIdentifier;
	HMFMessage* _currentMessage;

}

@property (nonatomic,readonly) id<HMDCameraStreamControlManagerProtocol> streamControlManager;              //@synthesize streamControlManager=_streamControlManager - In the implementation block
@property (nonatomic,readonly) HMDCameraStreamSessionID * sessionID;                                        //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) NSString * destinationID;                                                    //@synthesize destinationID=_destinationID - In the implementation block
@property (nonatomic,readonly) HMFTimer * streamSetupTimer;                                                 //@synthesize streamSetupTimer=_streamSetupTimer - In the implementation block
@property (nonatomic,readonly) NSString * streamShowingAppIdentifier;                                       //@synthesize streamShowingAppIdentifier=_streamShowingAppIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * slotIdentifier;                                                     //@synthesize slotIdentifier=_slotIdentifier - In the implementation block
@property (nonatomic,retain) HMFMessage * currentMessage;                                                   //@synthesize currentMessage=_currentMessage - In the implementation block
-(HMDCameraStreamSessionID *)sessionID;
-(NSString *)destinationID;
-(HMFMessage *)currentMessage;
-(NSNumber *)slotIdentifier;
-(id)initWithSessionID:(id)arg1 destinationID:(id)arg2 streamShowingAppIdentifier:(id)arg3 controlManager:(id)arg4 setupWaitPeriod:(double)arg5 timerFactory:(/*^block*/id)arg6 error:(id*)arg7 ;
-(id)initWithSessionID:(id)arg1 destinationID:(id)arg2 streamShowingAppIdentifier:(id)arg3 controlManager:(id)arg4 setupWaitPeriod:(double)arg5 error:(id*)arg6 ;
-(id<HMDCameraStreamControlManagerProtocol>)streamControlManager;
-(HMFTimer *)streamSetupTimer;
-(NSString *)streamShowingAppIdentifier;
-(void)setSlotIdentifier:(NSNumber *)arg1 ;
-(void)setCurrentMessage:(HMFMessage *)arg1 ;
@end

