/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@protocol NPKTransitAppletHistoryFetcherDelegate, OS_dispatch_queue, NFSession;
@class NSString, NSObject;

@interface NPKTransitAppletHistoryFetcher : NSObject {

	id<NPKTransitAppletHistoryFetcherDelegate> _delegate;
	NSString* _aidToFetch;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<NFSession> _pendingSessionHandle;

}

@property (nonatomic,retain) NSString * aidToFetch;                                                   //@synthesize aidToFetch=_aidToFetch - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSObject*<NFSession> pendingSessionHandle;                               //@synthesize pendingSessionHandle=_pendingSessionHandle - In the implementation block
@property (assign,nonatomic,__weak) id<NPKTransitAppletHistoryFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<NPKTransitAppletHistoryFetcherDelegate>)delegate;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setDelegate:(id<NPKTransitAppletHistoryFetcherDelegate>)arg1 ;
-(id)initWithCallbackQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<NFSession>)pendingSessionHandle;
-(void)_handleActiveSecureElementManagerSession:(id)arg1 ;
-(void)_handleSecureElementSessionFailureWithError:(id)arg1 ;
-(void)setPendingSessionHandle:(NSObject*<NFSession>)arg1 ;
-(void)setAIDToFetch:(id)arg1 ;
-(void)requestTransitHistoryFetch;
-(NSString *)aidToFetch;
-(void)setAidToFetch:(NSString *)arg1 ;
@end

