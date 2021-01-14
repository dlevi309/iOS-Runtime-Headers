/*
* Generated on Thursday, January 14, 2021 at 2:28:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class NSString, NSURL, SBKRequest, NSMutableDictionary;

@interface SBKTransaction : NSObject {

	NSString* _domain;
	NSURL* _requestURL;
	SBKRequest* _activeRequest;
	NSMutableDictionary* _userInfo;

}

@property (retain) NSMutableDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
@property (copy,readonly) NSString * domain;                    //@synthesize domain=_domain - In the implementation block
@property (retain) NSURL * requestURL;                          //@synthesize requestURL=_requestURL - In the implementation block
@property (retain) SBKRequest * activeRequest;                  //@synthesize activeRequest=_activeRequest - In the implementation block
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)userInfo;
-(id)init;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSString *)domain;
-(SBKRequest *)activeRequest;
-(NSURL *)requestURL;
-(id)newRequest;
-(void)setActiveRequest:(SBKRequest *)arg1 ;
-(id)clampsKey;
-(void)setTransactionContext:(id)arg1 forKey:(id)arg2 ;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)transactionContextForKey:(id)arg1 ;
-(id)initWithDomain:(id)arg1 requestURL:(id)arg2 ;
@end

