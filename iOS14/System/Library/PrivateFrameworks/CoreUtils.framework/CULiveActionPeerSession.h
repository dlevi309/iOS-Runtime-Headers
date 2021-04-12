/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/CUActivatable.h>

@protocol OS_dispatch_queue;
@class RPCompanionLinkClient, NSObject, RPCompanionLinkDevice;

@interface CULiveActionPeerSession : NSObject <CUActivatable> {

	RPCompanionLinkClient* _clinkClient;
	BOOL _speakDisable;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	RPCompanionLinkDevice* _destinationDevice;

}

@property (nonatomic,retain) RPCompanionLinkDevice * destinationDevice;               //@synthesize destinationDevice=_destinationDevice - In the implementation block
@property (assign,nonatomic) BOOL speakDisable;                                       //@synthesize speakDisable=_speakDisable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)performRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(RPCompanionLinkDevice *)destinationDevice;
-(void)setDestinationDevice:(RPCompanionLinkDevice *)arg1 ;
-(void)invalidate;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setupWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)speakDisable;
-(void)setSpeakDisable:(BOOL)arg1 ;
@end

