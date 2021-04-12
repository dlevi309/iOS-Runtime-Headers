/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/ICRemoteRequestOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICClientInfo, NSString;

@interface ICMusicUserTokenFetchRequest : ICRemoteRequestOperation <NSSecureCoding> {

	ICClientInfo* _clientInfo;
	NSString* _developerToken;
	unsigned long long _options;

}
+(BOOL)supportsSecureCoding;
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)performRequestOnOperationQueue:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_executeByPerformingStoreRequestWithContext:(id)arg1 qualityOfService:(long long)arg2 ;
-(id)initWithDeveloperToken:(id)arg1 clientInfo:(id)arg2 options:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end

