/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUActivatable.h>

@protocol OS_dispatch_queue;
@class RPCompanionLinkClient, NSObject, RPCompanionLinkDevice;

@interface CULiveAudioPeerSession : NSObject <CUActivatable> {

	RPCompanionLinkClient* _clinkClient;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	RPCompanionLinkDevice* _destinationDevice;

}

@property (nonatomic,retain) RPCompanionLinkDevice * destinationDevice;               //@synthesize destinationDevice=_destinationDevice - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setDestinationDevice:(RPCompanionLinkDevice *)arg1 ;
-(RPCompanionLinkDevice *)destinationDevice;
-(void)sendAudioDataEvent:(id)arg1 ;
-(void)_activateCompleted:(/*^block*/id)arg1 ;
@end

