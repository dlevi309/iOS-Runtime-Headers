/*
* Generated on Monday, March 1, 2021 at 2:34:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@protocol OS_dispatch_queue;
@class NviSignalProvidersController, CSSpeakerIdNviSignalReceiver, NSObject, CSSpIdContext;

@interface CSSpeakerIdNviOrchestrator : NSObject {

	NviSignalProvidersController* _signalControllerNvi;
	CSSpeakerIdNviSignalReceiver* _resultRxNvi;
	NSObject*<OS_dispatch_queue> _nviQueue;
	CSSpIdContext* _spIdCtx;

}

@property (nonatomic,retain) NviSignalProvidersController * signalControllerNvi;              //@synthesize signalControllerNvi=_signalControllerNvi - In the implementation block
@property (nonatomic,retain) CSSpeakerIdNviSignalReceiver * resultRxNvi;                      //@synthesize resultRxNvi=_resultRxNvi - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> nviQueue;                           //@synthesize nviQueue=_nviQueue - In the implementation block
@property (nonatomic,retain) CSSpIdContext * spIdCtx;                                         //@synthesize spIdCtx=_spIdCtx - In the implementation block
-(void)start;
-(void)end;
-(void)_startSpIdNviSignalProcessing;
-(void)_endSpIdNviSignalProcessing;
-(void)_uploadDirectionVectorToAFAnalyticsOnQueue;
-(id)initWithSpeakerIdContext:(id)arg1 ;
-(void)uploadDirectionVectorToAFAnalytics;
-(NviSignalProvidersController *)signalControllerNvi;
-(void)setSignalControllerNvi:(NviSignalProvidersController *)arg1 ;
-(CSSpeakerIdNviSignalReceiver *)resultRxNvi;
-(void)setResultRxNvi:(CSSpeakerIdNviSignalReceiver *)arg1 ;
-(NSObject*<OS_dispatch_queue>)nviQueue;
-(void)setNviQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CSSpIdContext *)spIdCtx;
-(void)setSpIdCtx:(CSSpIdContext *)arg1 ;
@end

