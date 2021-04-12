/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)domain;
-(NSMutableDictionary *)userInfo;
-(void)setUserInfo:(NSMutableDictionary *)arg1 ;
-(SBKRequest *)activeRequest;
-(void)setRequestURL:(NSURL *)arg1 ;
-(NSURL *)requestURL;
-(id)newRequest;
-(id)clampsKey;
-(void)setTransactionContext:(id)arg1 forKey:(id)arg2 ;
-(void)setActiveRequest:(SBKRequest *)arg1 ;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)transactionContextForKey:(id)arg1 ;
-(id)initWithDomain:(id)arg1 requestURL:(id)arg2 ;
@end

