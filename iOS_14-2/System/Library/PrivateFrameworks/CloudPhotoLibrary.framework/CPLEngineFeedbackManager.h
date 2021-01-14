/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/


@protocol OS_dispatch_queue, CPLEngineTransportSendFeedbackTask;
@class NSObject, NSMutableArray, NSArray, NSDate, NSURL, CPLEngineLibrary;

@interface CPLEngineFeedbackManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CPLEngineTransportSendFeedbackTask> _sendTask;
	NSMutableArray* _messagesToSend;
	NSArray* _messagesSending;
	NSDate* _lastAttemptDate;
	NSURL* _feedbackMessagesURL;
	BOOL _opened;
	BOOL _closed;
	BOOL _deactivated;
	CPLEngineLibrary* _engineLibrary;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
-(void)_save;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reportMiscInformation:(id)arg1 ;
-(void)reportSetting:(id)arg1 hasBeenSetToValue:(id)arg2 ;
-(void)_load;
-(id)componentName;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(void)_appendMessage:(id)arg1 ;
-(void)_appendMessages:(id)arg1 ;
-(void)_reallySendFeedbackToServer;
-(void)_sendFeedbackToServerIfNecessary;
-(void)sendFeedbackToServerIfNecessary;
-(void)reportMessage:(id)arg1 ;
-(void)reportMessages:(id)arg1 ;
-(void)reportResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3 ;
-(void)reportEndOfResetWithUUID:(id)arg1 reason:(id)arg2 ;
-(void)reportFetchChangesRewindToFeatureVersion:(unsigned long long)arg1 ;
@end

