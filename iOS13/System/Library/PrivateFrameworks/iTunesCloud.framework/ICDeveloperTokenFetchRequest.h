/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRemoteRequestOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICClientInfo, AMSMediaTokenService;

@interface ICDeveloperTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding> {

	ICClientInfo* _clientInfo;
	AMSMediaTokenService* _mediaTokenService;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithClientInfo:(id)arg1 ;
-(void)_didFetchMediaToken:(id)arg1 withError:(id)arg2 ;
@end

