/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol DATokenRegistrationDelegate;
@class DARefreshWrapper, NSString, NSData, NSMutableURLRequest, NSURLSession, NSURLSessionDataTask, AKAppleIDSession;

@interface DATokenRegistrationRequest : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate> {

	BOOL _finished;
	id<DATokenRegistrationDelegate> _delegate;
	DARefreshWrapper* _wrapper;
	NSString* _onBehalfOfBundleIdentifier;
	NSData* _token;
	NSString* _pushKey;
	NSMutableURLRequest* _request;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;
	AKAppleIDSession* _hsa2Session;

}

@property (assign,nonatomic,__weak) DARefreshWrapper * wrapper;                            //@synthesize wrapper=_wrapper - In the implementation block
@property (nonatomic,retain) NSString * onBehalfOfBundleIdentifier;                        //@synthesize onBehalfOfBundleIdentifier=_onBehalfOfBundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) NSData * token;                                        //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) NSString * pushKey;                                    //@synthesize pushKey=_pushKey - In the implementation block
@property (nonatomic,retain) AKAppleIDSession * hsa2Session;                               //@synthesize hsa2Session=_hsa2Session - In the implementation block
@property (assign,nonatomic) BOOL finished;                                                //@synthesize finished=_finished - In the implementation block
@property (assign,nonatomic,__weak) id<DATokenRegistrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * request;                                //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                                       //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                                  //@synthesize task=_task - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestWithToken:(id)arg1 pushKey:(id)arg2 wrapper:(id)arg3 onBehalfOf:(id)arg4 ;
-(NSData *)token;
-(id<DATokenRegistrationDelegate>)delegate;
-(void)setDelegate:(id<DATokenRegistrationDelegate>)arg1 ;
-(void)cancel;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(NSMutableURLRequest *)request;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(NSURLSessionDataTask *)task;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setToken:(NSData *)arg1 ;
-(NSString *)pushKey;
-(void)setPushKey:(NSString *)arg1 ;
-(NSString *)onBehalfOfBundleIdentifier;
-(DARefreshWrapper *)wrapper;
-(void)setWrapper:(DARefreshWrapper *)arg1 ;
-(void)setOnBehalfOfBundleIdentifier:(NSString *)arg1 ;
-(id)initWithToken:(id)arg1 pushKey:(id)arg2 wrapper:(id)arg3 onBehalfOf:(id)arg4 ;
-(void)_handleAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(void)_reallyHandleAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendRegistrationRequestForAccount:(id)arg1 ;
-(AKAppleIDSession *)hsa2Session;
-(void)setHsa2Session:(AKAppleIDSession *)arg1 ;
@end

