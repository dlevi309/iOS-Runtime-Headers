/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
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
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)finished;
-(NSURLSessionDataTask *)task;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setRequest:(NSMutableURLRequest *)arg1 ;
-(id<DATokenRegistrationDelegate>)delegate;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSString *)onBehalfOfBundleIdentifier;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(NSURLSession *)session;
-(NSMutableURLRequest *)request;
-(void)setDelegate:(id<DATokenRegistrationDelegate>)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)setToken:(NSData *)arg1 ;
-(DARefreshWrapper *)wrapper;
-(NSData *)token;
-(void)setPushKey:(NSString *)arg1 ;
-(NSString *)pushKey;
-(void)cancel;
-(void)_handleAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg1 ;
-(void)setWrapper:(DARefreshWrapper *)arg1 ;
-(void)setOnBehalfOfBundleIdentifier:(NSString *)arg1 ;
-(id)initWithToken:(id)arg1 pushKey:(id)arg2 wrapper:(id)arg3 onBehalfOf:(id)arg4 ;
-(void)_reallyHandleAuthenticationChallenge:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)sendRegistrationRequestForAccount:(id)arg1 ;
-(AKAppleIDSession *)hsa2Session;
-(void)setHsa2Session:(AKAppleIDSession *)arg1 ;
@end

