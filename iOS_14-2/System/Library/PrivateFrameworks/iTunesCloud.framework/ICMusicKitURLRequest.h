/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICURLRequest.h>

@class ICStoreURLRequest, NSString, NSDictionary, ICMusicKitRequestContext;

@interface ICMusicKitURLRequest : ICURLRequest {

	ICStoreURLRequest* _pendingEquivalentStoreURLRequest;
	NSString* _developerToken;
	NSDictionary* _additionalHTTPCookies;

}

@property (nonatomic,copy,readonly) NSString * _developerToken;                                    //@synthesize developerToken=_developerToken - In the implementation block
@property (nonatomic,readonly) ICStoreURLRequest * _pendingEquivalentStoreURLRequest; 
@property (nonatomic,copy,readonly) ICMusicKitRequestContext * requestContext; 
@property (nonatomic,copy) NSDictionary * additionalHTTPCookies;                                   //@synthesize additionalHTTPCookies=_additionalHTTPCookies - In the implementation block
+(Class)_responseHandlerClass;
+(Class)_responseClass;
+(unsigned long long)_defaultMaxRetryCountForReason:(id)arg1 ;
-(void)_updateURLSessionManagedPropertiesForEquivalentStoreURLRequest:(id)arg1 ;
-(void)_buildMusicKitURLRequestWithBaseURLRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setDeveloperToken:(id)arg1 ;
-(void)_buildEquivalentStoreURLRequestWithDeveloperToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_buildUserTokenBasedMusicKitURLRequestWithBaseURLRequest:(id)arg1 developerToken:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 resumeData:(id)arg3 ;
-(NSDictionary *)additionalHTTPCookies;
-(ICMusicKitRequestContext *)requestContext;
-(id)initWithURL:(id)arg1 requestContext:(id)arg2 ;
-(id)initWithURLRequest:(id)arg1 requestContext:(id)arg2 ;
-(NSString *)_developerToken;
-(id)description;
-(void)setAdditionalHTTPCookies:(NSDictionary *)arg1 ;
-(void)buildURLRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(ICStoreURLRequest *)_pendingEquivalentStoreURLRequest;
@end

