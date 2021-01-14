/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface WBSURLCredentialCache : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSDictionary* _credentialCache;
	/*^block*/id _credentialFetchBlock;

}

@property (copy,readonly) NSDictionary * credentials; 
-(NSDictionary *)credentials;
-(void)invalidate;
-(id)initWithCredentialFetchBlock:(/*^block*/id)arg1 ;
-(id)initWithCachingMode:(long long)arg1 credentialFetchBlock:(/*^block*/id)arg2 ;
-(void)getCredentialsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

