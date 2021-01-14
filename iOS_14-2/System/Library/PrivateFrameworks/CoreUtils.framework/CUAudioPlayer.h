/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/AVAudioPlayerDelegate.h>

@protocol OS_dispatch_queue;
@class AVAudioSession, CUAudioRequest, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@interface CUAudioPlayer : NSObject <AVAudioPlayerDelegate> {

	AVAudioSession* _audioSession;
	CUAudioRequest* _currentRequest;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	unsigned _invalidateFlags;
	NSMutableArray* _playRequests;
	NSMutableDictionary* _preparedRequests;
	CUAudioPlayer* _selfRef;
	LogCategory* _ucat;
	unsigned _flags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	NSString* _label;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) unsigned flags;                                        //@synthesize flags=_flags - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)flags;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)activate;
-(void)_activate;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2 ;
-(void)invalidateWithFlags:(unsigned)arg1 ;
-(void)_invalidateWithFlags:(unsigned)arg1 ;
-(void)playPreparedIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_playPreparedIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)playURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_playURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareURL:(id)arg1 identifier:(id*)arg2 completion:(/*^block*/id)arg3 ;
-(void)_prepareURL:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_completeRequest:(id)arg1 error:(id)arg2 ;
-(void)_abortRequestsWithError:(id)arg1 ;
-(void)audioSessionInterrupted:(id)arg1 ;
-(void)_invalidated;
-(void)setLabel:(NSString *)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_processRequests;
-(id)invalidationHandler;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2 ;
-(NSString *)label;
-(void)dealloc;
@end

