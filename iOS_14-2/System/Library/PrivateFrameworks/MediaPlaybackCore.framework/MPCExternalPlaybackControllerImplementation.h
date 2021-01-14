/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MFExternalPlaybackController.h>
#import <libobjc.A.dylib/MPCExternalPlaybackRouter.h>

@class MPAVRoutingController, MPCPlaybackEngine, MPCMediaFoundationTranslator, NSString;

@interface MPCExternalPlaybackControllerImplementation : NSObject <MPAVRoutingControllerDelegate, MFExternalPlaybackController, MPCExternalPlaybackRouter> {

	MPAVRoutingController* _routingController;
	MPCPlaybackEngine* _playbackEngine;
	MPCMediaFoundationTranslator* _translator;

}

@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
@property (nonatomic,readonly) MPCMediaFoundationTranslator * translator;              //@synthesize translator=_translator - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * routingController;              //@synthesize routingController=_routingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPAVRoutingController *)routingController;
-(void)pickBestDeviceRoute;
-(MPCMediaFoundationTranslator *)translator;
-(void)routingControllerExternalScreenTypeDidChange:(id)arg1 ;
-(MPCPlaybackEngine *)playbackEngine;
-(id)initWithPlaybackEngine:(id)arg1 translator:(id)arg2 ;
-(void)configureExternalPlaybackForPlayer:(id)arg1 queueItem:(id)arg2 ;
@end

