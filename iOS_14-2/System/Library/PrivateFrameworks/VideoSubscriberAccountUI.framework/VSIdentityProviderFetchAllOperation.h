/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSAuditToken, NSArray, VSOptional, NSOperationQueue, VSDevice;

@interface VSIdentityProviderFetchAllOperation : VSAsyncOperation {

	VSAuditToken* _auditToken;
	NSArray* _applicationAccountProviders;
	VSOptional* _result;
	NSOperationQueue* _subqueue;
	VSDevice* _currentDevice;

}

@property (nonatomic,retain) VSOptional * result;                              //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSOperationQueue * subqueue;                      //@synthesize subqueue=_subqueue - In the implementation block
@property (nonatomic,retain) VSDevice * currentDevice;                         //@synthesize currentDevice=_currentDevice - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                          //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy) NSArray * applicationAccountProviders;              //@synthesize applicationAccountProviders=_applicationAccountProviders - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(VSDevice *)currentDevice;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setCurrentDevice:(VSDevice *)arg1 ;
-(NSArray *)applicationAccountProviders;
-(void)setApplicationAccountProviders:(NSArray *)arg1 ;
-(NSOperationQueue *)subqueue;
-(void)setSubqueue:(NSOperationQueue *)arg1 ;
@end

