/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, NSString, NSMutableDictionary, NSObject;

@interface AVCMoments : NSObject {

	AVConferenceXPCClient* _connection;
	long long _streamToken;
	id _delegate;
	unsigned _capabilities;
	NSString* _requesterID;
	NSMutableDictionary* _requests;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	int _currentActiveRequestsCount;
	int _currentPendingRequestsCount;

}

@property (nonatomic,readonly) id<AVCMomentsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long streamToken;                        //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,readonly) unsigned capabilities;                        //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,readonly) NSString * requesterID;                       //@synthesize requesterID=_requesterID - In the implementation block
@property (nonatomic,readonly) int activeRequestCount;                       //@synthesize currentActiveRequestsCount=_currentActiveRequestsCount - In the implementation block
@property (nonatomic,readonly) int pendingRequestCount;                      //@synthesize currentPendingRequestsCount=_currentPendingRequestsCount - In the implementation block
-(void)dealloc;
-(id)description;
-(id<AVCMomentsDelegate>)delegate;
-(void)disconnect;
-(BOOL)connect;
-(unsigned)capabilities;
-(long long)streamToken;
-(NSString *)requesterID;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(void)didStartProcessingRequestHelperWithResult:(id)arg1 ;
-(void)didEndProcessingRequestHelperWithResult:(id)arg1 ;
-(void)didFinishRequestHelperWithResult:(id)arg1 ;
-(id)newDictionaryForRequest:(id)arg1 ;
-(id)initWithStreamToken:(long long)arg1 requesterID:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4 ;
-(id)newRequestWithMediaType:(unsigned char)arg1 requesteeID:(id)arg2 ;
-(BOOL)avcMomentsRequestDidStartRequest:(id)arg1 withError:(id*)arg2 ;
-(BOOL)avcMomentsRequestDidEndRequest:(id)arg1 withError:(id*)arg2 ;
-(BOOL)avcMomentsRequestDidRejectRequest:(id)arg1 withError:(id*)arg2 ;
-(int)activeRequestCount;
-(int)pendingRequestCount;
@end

