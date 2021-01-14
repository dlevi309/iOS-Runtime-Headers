/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(VSAuditToken *)auditToken;
-(VSStoreURLBag *)bag;
-(void)setBag:(VSStoreURLBag *)arg1 ;
-(VSOptional *)result;
-(void)cancel;
-(void)setResetStateTask:(NSURLSessionTask *)arg1 ;
-(void)_resetVerificationStateWithURL:(id)arg1 ;
-(NSURLSessionTask *)resetStateTask;
@end

