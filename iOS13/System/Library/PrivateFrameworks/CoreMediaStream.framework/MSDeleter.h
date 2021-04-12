/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/MSCupidStateMachine.h>
#import <libobjc.A.dylib/MSDeleter.h>

@protocol MSDeleter <NSObject>
@property (assign,nonatomic) id<MSDeleterDelegate> delegate; 
@required
-(id<MSDeleterDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)stop;
-(void)abort;
-(void)deleteAssetCollections:(id)arg1;
-(void)performOutstandingActivities;

@end

#import <libobjc.A.dylib/MSDeleteStreamsProtocolDelegate.h>

@protocol MSDeleterDelegate;
@class MSDeleteStreamsProtocol, MSObjectQueue, NSMutableArray, MSMediaStreamDaemon, NSString;

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate> {

	MSDeleteStreamsProtocol* _protocol;
	int _state;
	MSObjectQueue* _deleteQueue;
	NSMutableArray* _requestedDeleteWrappers;
	int _batchSize;
	int _maxErrorCount;
	id<MSDeleterDelegate> _delegate;
	MSMediaStreamDaemon* _daemon;

}

@property (assign,nonatomic) MSMediaStreamDaemon * daemon;                //@synthesize daemon=_daemon - In the implementation block
@property (assign,nonatomic) int batchSize;                               //@synthesize batchSize=_batchSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MSDeleterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(void)forgetPersonID:(id)arg1 ;
+(id)nextActivityDate;
+(BOOL)isInRetryState;
+(void)stopAllActivities;
+(id)nextActivityDateForPersonID:(id)arg1 ;
+(void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2 ;
+(id)personIDsWithOutstandingActivities;
+(void)abortAllActivities;
+(id)deleterForPersonID:(id)arg1 ;
+(id)existingDeleterForPersonID:(id)arg1 ;
+(id)_clearInstantiatedDeletersByPersonID;
-(void)dealloc;
-(id<MSDeleterDelegate>)delegate;
-(void)setDelegate:(id<MSDeleterDelegate>)arg1 ;
-(void)stop;
-(void)abort;
-(int)batchSize;
-(void)setBatchSize:(int)arg1 ;
-(void)deactivate;
-(void)_stop;
-(MSMediaStreamDaemon *)daemon;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
-(void)deleteAssetCollections:(id)arg1 ;
-(void)_abort;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_updateMasterManifest;
-(id)_abortedError;
-(void)_forget;
-(BOOL)_isInRetryState;
-(void)deleteProtocol:(id)arg1 didFinishSuccessfulCollections:(id)arg2 failedCollections:(id)arg3 error:(id)arg4 ;
-(void)deleteProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(void)performOutstandingActivities;
-(BOOL)_isAllowedToDelete;
-(void)_sendDeleteRequest;
@end

