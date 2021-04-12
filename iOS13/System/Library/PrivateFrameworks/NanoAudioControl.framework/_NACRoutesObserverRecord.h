/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@class MPAVRoutingController, NACRunAssertion;

@interface _NACRoutesObserverRecord : NSObject {

	MPAVRoutingController* _routingController;
	NACRunAssertion* _runAssertion;

}

@property (nonatomic,retain) MPAVRoutingController * routingController;              //@synthesize routingController=_routingController - In the implementation block
@property (nonatomic,retain) NACRunAssertion * runAssertion;                         //@synthesize runAssertion=_runAssertion - In the implementation block
-(MPAVRoutingController *)routingController;
-(void)setRoutingController:(MPAVRoutingController *)arg1 ;
-(NACRunAssertion *)runAssertion;
-(void)setRunAssertion:(NACRunAssertion *)arg1 ;
@end

