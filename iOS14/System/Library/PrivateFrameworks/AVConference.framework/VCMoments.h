/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMomentsMessenger.h>

@protocol OS_dispatch_queue;
@class VCMomentsHistory, NSObject, VideoAttributes, NSMutableSet, NSString;

@interface VCMoments : NSObject <VCMomentsMessenger> {

	id _delegate;
	id _transportDelegate;
	unsigned _streamToken;
	VCMomentsHistory* _momentsHistory;
	unsigned _capabilities;
	unsigned char _mode;
	NSObject*<OS_dispatch_queue> delegateNotificationQueue;
	int _currentActiveRequestsCount;
	BOOL _isActive;
	BOOL _enableLocalVideoRecording;
	BOOL _isClientRegistered;
	VideoAttributes* _remoteScreenAttributes;
	NSMutableSet* _requests;
	BOOL _lastRequest;
	unsigned _currentTimestamp;

}

@property (assign,nonatomic) unsigned capabilities;                                 //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                       //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,retain) VideoAttributes * remoteScreenAttributes;              //@synthesize remoteScreenAttributes=_remoteScreenAttributes - In the implementation block
@property (assign,nonatomic) int imageType; 
@property (assign,nonatomic) int videoCodec; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)fileSize:(id)arg1 ;
+(unsigned long long)countForRequestType:(int)arg1 ;
+(int)typeForRequest:(id)arg1 ;
+(BOOL)deviceHasSufficientFreeSpace;
+(unsigned long long)deviceFreeDiskSpace;
-(unsigned)capabilities;
-(void)setCapabilities:(unsigned)arg1 ;
-(id)initWithStreamToken:(unsigned)arg1 delegate:(id)arg2 ;
-(BOOL)isActive;
-(void)setTransportDelegate:(id)arg1 ;
-(id)transportDelegate;
-(void)setFrameRate:(float)arg1 ;
-(unsigned long long)directorySize:(id)arg1 ;
-(void)setImageType:(int)arg1 ;
-(int)videoCodec;
-(int)imageType;
-(void)registerClient;
-(void)dealloc;
-(void)setRemoteScreenAttributes:(VideoAttributes *)arg1 ;
-(VideoAttributes *)remoteScreenAttributes;
-(void)addLocalAudioSample:(opaqueVCAudioBufferListRef)arg1 timestamp:(unsigned)arg2 ;
-(void)addRemoteAudioSample:(opaqueVCAudioBufferListRef)arg1 timestamp:(unsigned)arg2 ;
-(void)addLocalVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 cameraStatusBits:(unsigned char)arg2 timestamp:(unsigned)arg3 ;
-(void)updateRemoteScreenAttributes:(id)arg1 ;
-(void)cleanupActiveRequests;
-(void)setVideoCodec:(int)arg1 ;
-(BOOL)validateIncomingRequest:(id)arg1 isRemote:(BOOL)arg2 ;
-(void)processRemotePhotoRequest:(id)arg1 ;
-(void)processRemoteLivePhotoRequest:(id)arg1 ;
-(void)processRemoteRequest:(id)arg1 withMediaType:(unsigned char)arg2 ;
-(void)updateVCMomentsMode;
-(void)updateActiveStatus;
-(void)processRequest:(id)arg1 isRemote:(BOOL)arg2 ;
-(id)momentsDelegate;
-(BOOL)isHistorySupported;
-(void)_generateRequest:(unsigned char)arg1 requestState:(unsigned char)arg2 transactionID:(id)arg3 timestamp:(unsigned)arg4 ;
-(void)handleInsufficientFreeSpaceWithRequest:(id)arg1 delegate:(id)arg2 ;
-(void)notifyRemoteFinishWithRequest:(id)arg1 didSucceed:(BOOL)arg2 fileSize:(long long)arg3 ;
-(BOOL)validateNumberOfRequestsWithError:(id*)arg1 ;
-(void)notifyFinishWithRequest:(id)arg1 didSucceed:(BOOL)arg2 fileSize:(long long)arg3 ;
-(void)notifyLocalFinishWithRequest:(id)arg1 didSucceed:(BOOL)arg2 ;
-(void)setMomentsDelegate:(id)arg1 ;
-(BOOL)processClientRequest:(id)arg1 error:(id*)arg2 ;
-(void)clearHistoryBuffer;
-(void)deregisterClient;
-(void)getInitialRemoteScreenAttributes:(id)arg1 ;
@end

