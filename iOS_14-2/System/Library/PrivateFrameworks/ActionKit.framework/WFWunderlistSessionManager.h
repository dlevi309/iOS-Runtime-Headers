/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSURLSession, WFOAuth2Credential, NSString, NSURL;

@interface WFWunderlistSessionManager : NSObject {

	NSURLSession* _session;
	WFOAuth2Credential* _credential;
	NSString* _clientId;
	NSURL* _baseURL;

}

@property (nonatomic,readonly) NSURL * baseURL;                          //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                   //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) WFOAuth2Credential * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,copy) NSString * clientId;                          //@synthesize clientId=_clientId - In the implementation block
-(void)setClientId:(NSString *)arg1 ;
-(WFOAuth2Credential *)credential;
-(NSURL *)baseURL;
-(id)initWithSession:(id)arg1 ;
-(id)init;
-(NSURLSession *)session;
-(void)setCredential:(WFOAuth2Credential *)arg1 ;
-(NSString *)clientId;
-(id)initWithSessionConfiguration:(id)arg1 ;
-(void)requestPath:(id)arg1 parameters:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getListsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)createTaskOnList:(id)arg1 title:(id)arg2 dueDate:(id)arg3 starred:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)createNoteOnTask:(id)arg1 withContent:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createReminderOnTask:(id)arg1 withDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)createFileOnTask:(id)arg1 withFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestPath:(id)arg1 method:(id)arg2 parameters:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

