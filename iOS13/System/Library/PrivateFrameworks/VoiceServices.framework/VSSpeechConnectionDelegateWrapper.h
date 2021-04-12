/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <libobjc.A.dylib/VSSpeechServiceDelegate.h>

@protocol VSSpeechConnectionDelegate;
@class VSSpeechRequest, NSMutableDictionary, VSPresynthesizedAudioRequest, VSSpeechConnection, NSString;

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate> {

	id<VSSpeechConnectionDelegate> _delegate;
	VSSpeechRequest* _request;
	NSMutableDictionary* _concurrentSynthesisRequests;
	VSPresynthesizedAudioRequest* _presynthesizedAudioRequest;
	VSSpeechConnection* _connection;

}

@property (assign,nonatomic,__weak) id<VSSpeechConnectionDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSSpeechRequest * request;                                              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * concurrentSynthesisRequests;                      //@synthesize concurrentSynthesisRequests=_concurrentSynthesisRequests - In the implementation block
@property (nonatomic,retain) VSPresynthesizedAudioRequest * presynthesizedAudioRequest;              //@synthesize presynthesizedAudioRequest=_presynthesizedAudioRequest - In the implementation block
@property (assign,nonatomic,__weak) VSSpeechConnection * connection;                                 //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VSSpeechConnectionDelegate>)delegate;
-(void)setDelegate:(id<VSSpeechConnectionDelegate>)arg1 ;
-(VSSpeechConnection *)connection;
-(void)setConnection:(VSSpeechConnection *)arg1 ;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(VSSpeechRequest *)request;
-(VSPresynthesizedAudioRequest *)presynthesizedAudioRequest;
-(oneway void)speechRequestDidStart;
-(oneway void)speechRequestDidPause;
-(oneway void)speechRequestDidContinue;
-(oneway void)speechRequestMark:(long long)arg1 didStartForRange:(NSRange)arg2 ;
-(oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3 ;
-(oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1 ;
-(oneway void)speechRequestDidReceiveTimingInfo:(id)arg1 ;
-(oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2 ;
-(oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(oneway void)presynthesizedAudioRequestDidStart;
-(oneway void)presynthesizedAudioRequestDidStopAtEnd:(BOOL)arg1 error:(id)arg2 ;
-(oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2 ;
-(NSMutableDictionary *)concurrentSynthesisRequests;
-(void)setPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1 ;
-(void)setConcurrentSynthesisRequests:(NSMutableDictionary *)arg1 ;
@end

