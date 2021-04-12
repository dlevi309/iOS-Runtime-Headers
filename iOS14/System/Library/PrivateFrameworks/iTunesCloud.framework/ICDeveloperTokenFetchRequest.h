/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRemoteRequestOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICClientInfo, AMSMediaTokenService;

@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding> {

	ICClientInfo* _clientInfo;
	unsigned long long _options;
	AMSMediaTokenService* _mediaTokenService;

}
+(BOOL)supportsSecureCoding;
+(void)_invalidateCachedDeveloperTokenForClientInfo:(id)arg1 requester:(id)arg2 usingMediaTokenService:(id)arg3 ;
+(id)_createMediaTokenServiceForClientInfo:(id)arg1 requester:(id)arg2 ;
+(void)invalidateCachedDeveloperTokenForClientInfo:(id)arg1 requester:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)execute;
-(id)initWithClientInfo:(id)arg1 options:(unsigned long long)arg2 ;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_didFetchMediaToken:(id)arg1 withError:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithClientInfo:(id)arg1 ;
@end

