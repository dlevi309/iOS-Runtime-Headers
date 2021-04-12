/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <libobjc.A.dylib/ICDelegationServicePairingSessionDelegate.h>
#import <libobjc.A.dylib/MSVMessageParserDelegate.h>

@protocol OS_dispatch_queue, ICDelegationServiceConnectionDelegate;
@class NSObject, MSVMessageParser, ICDelegationServicePairingSession, NSMutableDictionary, MSVStreamReader, MSVStreamWriter, ICDelegationServiceSecuritySettings, NSString;

@interface ICDelegationServiceConnection : NSObject <ICDelegationServicePairingSessionDelegate, MSVMessageParserDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	id<ICDelegationServiceConnectionDelegate> _delegate;
	BOOL _isPaired;
	BOOL _isStarted;
	MSVMessageParser* _messageParser;
	unsigned _nextRequestID;
	ICDelegationServicePairingSession* _pairingSession;
	NSMutableDictionary* _pendingRequestIDToRequestContext;
	MSVStreamReader* _streamReader;
	NSObject*<OS_dispatch_queue> _streamReaderQueue;
	MSVStreamWriter* _streamWriter;
	NSObject*<OS_dispatch_queue> _streamWriterQueue;
	long long _connectionRole;
	ICDelegationServiceSecuritySettings* _securitySettings;

}

@property (assign,nonatomic,__weak) id<ICDelegationServiceConnectionDelegate> delegate; 
@property (nonatomic,readonly) long long connectionRole;                                             //@synthesize connectionRole=_connectionRole - In the implementation block
@property (nonatomic,readonly) ICDelegationServiceSecuritySettings * securitySettings;               //@synthesize securitySettings=_securitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)close;
-(id<ICDelegationServiceConnectionDelegate>)delegate;
-(void)setDelegate:(id<ICDelegationServiceConnectionDelegate>)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)parser:(id)arg1 didParseMessage:(id)arg2 ;
-(ICDelegationServiceSecuritySettings *)securitySettings;
-(void)_streamEncounteredError:(id)arg1 ;
-(void)_streamDidClose;
-(void)_streamDidParseMessage:(id)arg1 ;
-(void)_sendRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_sendResponse:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned)_nextRequestUniqueID;
-(void)_sendMessage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_finishPendingRequestsWithError:(id)arg1 ;
-(void)delegationServicePairingSession:(id)arg1 sendData:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)initWithConnectionRole:(long long)arg1 inputStream:(id)arg2 outputStream:(id)arg3 securitySettings:(id)arg4 ;
-(void)sendResponse:(id)arg1 forRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(long long)connectionRole;
@end

