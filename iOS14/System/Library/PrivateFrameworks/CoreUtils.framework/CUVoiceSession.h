/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/VSSpeechSynthesizerDelegate.h>

@protocol OS_dispatch_queue;
@class CUVoiceRequest, NSMutableArray, VSSpeechSynthesizer, NSObject, NSString;

@interface CUVoiceSession : NSObject <VSSpeechSynthesizerDelegate> {

	CUVoiceRequest* _currentRequest;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	unsigned _invalidateFlags;
	NSMutableArray* _requests;
	VSSpeechSynthesizer* _speechSynthesizer;
	LogCategory* _ucat;
	NSMutableArray* _voiceRequests;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_invalidate;
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)speakText:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)invalidateWithFlags:(unsigned)arg1 ;
-(void)_completeRequest:(id)arg1 error:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2 ;
-(void)stopSpeaking;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5 ;
-(void)_processQueuedRequests;
-(void)_speakText:(id)arg1 flags:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
-(void)_completeAllRequestsWithError:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(BOOL)arg3 withError2:(id)arg4 ;
-(void)_invalidated;
-(void)invalidate;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSString *)label;
-(void)dealloc;
@end

