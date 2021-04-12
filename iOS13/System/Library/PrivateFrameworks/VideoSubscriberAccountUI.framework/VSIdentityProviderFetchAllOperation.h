/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSAuditToken, VSOptional, NSOperationQueue, VSDevice;

@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation {

	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSOperationQueue* _subqueue;
	VSDevice* _currentDevice;

}

@property (nonatomic,retain) VSOptional * result;                      //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperationQueue * subqueue;              //@synthesize subqueue=_subqueue - In the implementation block
@property (nonatomic,retain) VSDevice * currentDevice;                 //@synthesize currentDevice=_currentDevice - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                  //@synthesize auditToken=_auditToken - In the implementation block
-(id)init;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(VSDevice *)currentDevice;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(void)setCurrentDevice:(VSDevice *)arg1 ;
-(void)executionDidBegin;
-(NSOperationQueue *)subqueue;
-(void)setSubqueue:(NSOperationQueue *)arg1 ;
@end

