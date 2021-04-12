/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)disconnect;
-(unsigned)capabilities;
-(id<AVCMomentsDelegate>)delegate;
-(BOOL)connect;
-(id)description;
-(long long)streamToken;
-(NSString *)requesterID;
-(void)dealloc;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(void)didStartProcessingRequestHelperWithResult:(id)arg1 ;
-(void)didEndProcessingRequestHelperWithResult:(id)arg1 ;
-(void)didFinishRequestHelperWithResult:(id)arg1 ;
-(id)newRequestWithMediaType:(unsigned char)arg1 mode:(unsigned char)arg2 requesteeID:(id)arg3 ;
-(id)newDictionaryForRequest:(id)arg1 ;
-(id)initWithStreamToken:(long long)arg1 requesterID:(id)arg2 delegate:(id)arg3 dispatchQueue:(id)arg4 ;
-(id)newRequestWithMediaType:(unsigned char)arg1 requesteeID:(id)arg2 ;
-(BOOL)avcMomentsRequestDidStartRequest:(id)arg1 withError:(id*)arg2 ;
-(BOOL)avcMomentsRequestDidEndRequest:(id)arg1 withError:(id*)arg2 ;
-(BOOL)avcMomentsRequestDidRejectRequest:(id)arg1 withError:(id*)arg2 ;
-(int)activeRequestCount;
-(int)pendingRequestCount;
@end

