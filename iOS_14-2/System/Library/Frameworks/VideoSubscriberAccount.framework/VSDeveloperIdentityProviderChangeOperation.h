/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSIdentityProvider, VSOptional, NSXPCConnection;

@interface VSDeveloperIdentityProviderChangeOperation : VSAsyncOperation {

	VSIdentityProvider* _identityProvider;
	long long _changeKind;
	VSOptional* _result;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) VSOptional * result;                                //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                       //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) VSIdentityProvider * identityProvider;              //@synthesize identityProvider=_identityProvider - In the implementation block
@property (assign,nonatomic) long long changeKind;                               //@synthesize changeKind=_changeKind - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(void)executionDidBegin;
-(id)init;
-(NSXPCConnection *)connection;
-(VSOptional *)result;
-(id)_serviceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
-(long long)changeKind;
-(VSIdentityProvider *)identityProvider;
-(void)setIdentityProvider:(VSIdentityProvider *)arg1 ;
-(void)setChangeKind:(long long)arg1 ;
@end

