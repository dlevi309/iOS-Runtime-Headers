/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(void)setAuditToken:(VSAuditToken *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(VSAuditToken *)auditToken;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(VSOptional *)result;
-(void)cancel;
-(void)setIdentityProviderID:(NSString *)arg1 ;
-(NSString *)identityProviderID;
-(id)initWithIdentityProviderID:(id)arg1 ;
-(void)setFetchFromStoreOnly:(BOOL)arg1 ;
-(BOOL)fetchFromStoreOnly;
-(id)_fetchAllOperation;
-(NSString *)identityProviderUniqueID;
-(id)initWithIdentityProviderUniqueID:(id)arg1 ;
@end

