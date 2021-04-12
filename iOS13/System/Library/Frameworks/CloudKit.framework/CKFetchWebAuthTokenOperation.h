/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSString;

@interface CKFetchWebAuthTokenOperation : CKDatabaseOperation {

	/*^block*/id _fetchWebAuthTokenCompletionBlock;
	NSString* _APIToken;
	NSString* _webAuthToken;

}

@property (nonatomic,copy) NSString * webAuthToken;                          //@synthesize webAuthToken=_webAuthToken - In the implementation block
@property (nonatomic,copy) NSString * APIToken;                              //@synthesize APIToken=_APIToken - In the implementation block
@property (nonatomic,copy) id fetchWebAuthTokenCompletionBlock;              //@synthesize fetchWebAuthTokenCompletionBlock=_fetchWebAuthTokenCompletionBlock - In the implementation block
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)performCKOperation;
-(Class)operationInfoClass;
-(void)_handleCompletionCallback:(id)arg1 ;
-(NSString *)APIToken;
-(id)fetchWebAuthTokenCompletionBlock;
-(void)setAPIToken:(NSString *)arg1 ;
-(NSString *)webAuthToken;
-(void)setWebAuthToken:(NSString *)arg1 ;
-(void)setFetchWebAuthTokenCompletionBlock:(id)arg1 ;
-(id)initWithAPIToken:(id)arg1 ;
@end

