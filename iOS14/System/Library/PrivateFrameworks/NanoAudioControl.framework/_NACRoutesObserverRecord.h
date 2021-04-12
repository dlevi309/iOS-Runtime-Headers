/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

