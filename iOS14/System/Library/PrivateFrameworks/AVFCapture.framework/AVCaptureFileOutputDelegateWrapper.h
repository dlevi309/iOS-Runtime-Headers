/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
*/


@class NSURL, NSString, NSArray, AVWeakReferencingDelegateStorage;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {

	BOOL _recording;
	BOOL _paused;
	long long _settingsID;
	NSURL* _outputFileURL;
	NSString* _outputFileType;
	NSArray* _metadata;
	AVWeakReferencingDelegateStorage* _delegateStorage;
	NSArray* _connections;

}

@property (readonly) long long settingsID;                                            //@synthesize settingsID=_settingsID - In the implementation block
@property (readonly) NSURL * outputFileURL;                                           //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (retain) NSString * outputFileType;                                         //@synthesize outputFileType=_outputFileType - In the implementation block
@property (retain) NSArray * metadata;                                                //@synthesize metadata=_metadata - In the implementation block
@property (readonly) AVWeakReferencingDelegateStorage * delegateStorage;              //@synthesize delegateStorage=_delegateStorage - In the implementation block
@property (readonly) NSArray * connections;                                           //@synthesize connections=_connections - In the implementation block
@property (assign,getter=isRecording,nonatomic) BOOL recording;                       //@synthesize recording=_recording - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                             //@synthesize paused=_paused - In the implementation block
+(id)wrapperWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4 ;
-(BOOL)isRecording;
-(NSString *)outputFileType;
-(void)setRecording:(BOOL)arg1 ;
-(NSArray *)connections;
-(void)setOutputFileType:(NSString *)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSURL *)outputFileURL;
-(AVWeakReferencingDelegateStorage *)delegateStorage;
-(long long)settingsID;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 settingsID:(long long)arg3 connections:(id)arg4 ;
-(NSArray *)metadata;
-(BOOL)isPaused;
-(void)dealloc;
@end

