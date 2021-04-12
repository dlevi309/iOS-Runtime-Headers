/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class NSURL, NSArray, AVWeakReferencingDelegateStorage;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {

	BOOL _recording;
	BOOL _paused;
	long long _settingsID;
	NSURL* _outputFileURL;
	NSArray* _metadata;
	AVWeakReferencingDelegateStorage* _delegateStorage;
	NSArray* _connections;

}

@property (readonly) long long settingsID;                                            //@synthesize settingsID=_settingsID - In the implementation block
@property (readonly) NSURL * outputFileURL;                                           //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (retain) NSArray * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (readonly) AVWeakReferencingDelegateStorage * delegateStorage;              //@synthesize delegateStorage=_delegateStorage - In the implementation block
@property (readonly) NSArray * connections;                                           //@synthesize connections=_connections - In the implementation block
@property (assign,getter=isRecording,nonatomic) BOOL recording;                       //@synthesize recording=_recording - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                             //@synthesize paused=_paused - In the implementation block
+(id)wrapperWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4 ;
-(void)dealloc;
-(BOOL)isPaused;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
-(void)setPaused:(BOOL)arg1 ;
-(NSArray *)connections;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4 ;
-(long long)settingsID;
-(NSURL *)outputFileURL;
-(BOOL)isRecording;
-(void)setRecording:(BOOL)arg1 ;
@end

