/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)execute;
-(void)performRequestWithResponseHandler:(/*^block*/id)arg1 ;
-(id)initWithDeveloperToken:(id)arg1 clientInfo:(id)arg2 options:(unsigned long long)arg3 ;
-(void)_executeByPerformingStoreRequestWithContext:(id)arg1 ;
@end

