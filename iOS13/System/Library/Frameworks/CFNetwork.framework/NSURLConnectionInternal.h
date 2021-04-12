/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLConnectionRequired.h>
#import <libobjc.A.dylib/NSURLAuthenticationChallengeSender.h>

@class NSURLConnection, NSOperationQueue, NSURL, NSURLRequest, NSDictionary, NSString;

@interface NSURLConnectionInternal : NSObject <NSURLConnectionRequired, NSURLAuthenticationChallengeSender> {

	NSURLConnection* _connection;
	NSOperationQueue* _delegateQueue;
	NSURL* _url;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	id _delegate;
	NSDictionary* _connectionProperties;
	BOOL _connectionActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_invalidate;
-(id)originalRequest;
-(id)currentRequest;
-(id)_connectionProperties;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)_setDelegateQueue:(id)arg1 ;
-(id)initWithInfo:(const InternalInit*)arg1 ;
-(id)_timingData;
-(void)invokeForDelegate:(/*^block*/id)arg1 ;
-(void)_withActiveConnectionAndDelegate:(/*^block*/id)arg1 ;
-(BOOL)isConnectionActive;
-(void)setConnectionActive:(BOOL)arg1 ;
-(void)_withConnectionDisconnectFromConnection;
-(void)_withConnectionAndDelegate:(/*^block*/id)arg1 ;
-(void)_withConnectionAndDelegate:(/*^block*/id)arg1 onlyActive:(BOOL)arg2 ;
@end

