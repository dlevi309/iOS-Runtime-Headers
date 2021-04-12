/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSAuditToken, VSOptional, VSStoreURLBag, NSURLSessionTask;

@interface VSVerificationStateResetOperation : VSAsyncOperation {

	VSAuditToken* _auditToken;
	VSOptional* _result;
	VSStoreURLBag* _bag;
	NSURLSessionTask* _resetStateTask;

}

@property (nonatomic,retain) VSStoreURLBag * bag;                            //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSURLSessionTask * resetStateTask;              //@synthesize resetStateTask=_resetStateTask - In the implementation block
@property (nonatomic,retain) VSOptional * result;                            //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
-(id)init;
-(void)cancel;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(VSStoreURLBag *)bag;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(void)executionDidBegin;
-(void)setResetStateTask:(NSURLSessionTask *)arg1 ;
-(void)_resetVerificationStateWithURL:(id)arg1 ;
-(NSURLSessionTask *)resetStateTask;
@end

