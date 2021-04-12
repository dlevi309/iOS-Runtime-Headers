/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)invalidate;
-(NSDictionary *)credentials;
-(id)initWithCredentialFetchBlock:(/*^block*/id)arg1 ;
-(id)initWithCachingMode:(long long)arg1 credentialFetchBlock:(/*^block*/id)arg2 ;
-(void)getCredentialsWithCompletionHandler:(/*^block*/id)arg1 ;
@end

