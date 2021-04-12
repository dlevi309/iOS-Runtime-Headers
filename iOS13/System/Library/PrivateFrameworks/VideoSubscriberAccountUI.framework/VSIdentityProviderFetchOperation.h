/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSString, VSAuditToken, VSOptional, NSOperationQueue;

@interface VSIdentityProviderFetchOperation : VSAsyncOperation {

	BOOL _fetchFromStoreOnly;
	NSString* _identityProviderID;
	NSString* _identityProviderUniqueID;
	VSAuditToken* _auditToken;
	VSOptional* _result;
	NSOperationQueue* _privateQueue;

}

@property (nonatomic,retain) NSOperationQueue * privateQueue;                         //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,copy) NSString * identityProviderID;                             //@synthesize identityProviderID=_identityProviderID - In the implementation block
@property (assign,nonatomic) BOOL fetchFromStoreOnly;                                 //@synthesize fetchFromStoreOnly=_fetchFromStoreOnly - In the implementation block
@property (nonatomic,retain) VSOptional * result;                                     //@synthesize result=_result - In the implementation block
@property (nonatomic,copy,readonly) NSString * identityProviderUniqueID;              //@synthesize identityProviderUniqueID=_identityProviderUniqueID - In the implementation block
@property (nonatomic,copy) VSAuditToken * auditToken;                                 //@synthesize auditToken=_auditToken - In the implementation block
-(id)init;
-(void)cancel;
-(VSAuditToken *)auditToken;
-(VSOptional *)result;
-(void)setResult:(VSOptional *)arg1 ;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)executionDidBegin;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)setIdentityProviderID:(NSString *)arg1 ;
-(NSString *)identityProviderID;
-(id)initWithIdentityProviderID:(id)arg1 ;
-(void)setFetchFromStoreOnly:(BOOL)arg1 ;
-(BOOL)fetchFromStoreOnly;
-(id)_fetchAllOperation;
-(NSString *)identityProviderUniqueID;
-(id)initWithIdentityProviderUniqueID:(id)arg1 ;
@end

