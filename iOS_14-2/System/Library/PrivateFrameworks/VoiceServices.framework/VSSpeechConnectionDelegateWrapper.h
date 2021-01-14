/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(oneway void)speechRequestDidStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3 ;
-(VSPresynthesizedAudioRequest *)presynthesizedAudioRequest;
-(oneway void)synthesisRequest:(id)arg1 didReceiveTimingInfo:(id)arg2 ;
-(void)setRequest:(VSSpeechRequest *)arg1 ;
-(id<VSSpeechConnectionDelegate>)delegate;
-(oneway void)presynthesizedAudioRequestSuccessWithInstrumentMetrics:(id)arg1 error:(id)arg2 ;
-(oneway void)speechRequestDidStart;
-(VSSpeechRequest *)request;
-(NSMutableDictionary *)concurrentSynthesisRequests;
-(void)setPresynthesizedAudioRequest:(VSPresynthesizedAudioRequest *)arg1 ;
-(void)setConcurrentSynthesisRequests:(NSMutableDictionary *)arg1 ;
-(oneway void)speechRequestDidPause;
-(oneway void)synthesisRequest:(id)arg1 didFinishWithInstrumentMetrics:(id)arg2 error:(id)arg3 ;
-(void)setDelegate:(id<VSSpeechConnectionDelegate>)arg1 ;
-(VSSpeechConnection *)connection;
-(oneway void)speechRequestMark:(long long)arg1 didStartForRange:(NSRange)arg2 ;
-(void)setConnection:(VSSpeechConnection *)arg1 ;
-(oneway void)presynthesizedAudioRequestDidStart;
-(oneway void)speechRequestDidReceiveTimingInfo:(id)arg1 ;
-(oneway void)speechRequestSuccessWithInstrumentMetrics:(id)arg1 ;
-(oneway void)presynthesizedAudioRequestDidStopAtEnd:(BOOL)arg1 error:(id)arg2 ;
-(oneway void)speechRequestDidContinue;
@end

