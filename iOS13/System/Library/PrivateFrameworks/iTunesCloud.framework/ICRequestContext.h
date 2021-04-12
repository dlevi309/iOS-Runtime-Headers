/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICNetworkConstraints, ICClientInfo, ICDeviceInfo, ICURLResponseAuthenticationProvider, NSString;

@interface ICRequestContext : NSObject <NSCopying, NSSecureCoding> {

	unsigned _allowsMutation : 1;
	ICNetworkConstraints* _networkConstraints;
	ICClientInfo* _clientInfo;
	ICDeviceInfo* _deviceInfo;
	ICURLResponseAuthenticationProvider* _authenticationProvider;

}

@property (nonatomic,copy,readonly) ICClientInfo * clientInfo;                                            //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) ICDeviceInfo * deviceInfo;                                                 //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * userAgent; 
@property (nonatomic,readonly) ICURLResponseAuthenticationProvider * authenticationProvider;              //@synthesize authenticationProvider=_authenticationProvider - In the implementation block
@property (nonatomic,copy,readonly) ICNetworkConstraints * networkConstraints;                            //@synthesize networkConstraints=_networkConstraints - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSString *)userAgent;
-(ICClientInfo *)clientInfo;
-(ICDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(ICDeviceInfo *)arg1 ;
-(void)setClientInfo:(ICClientInfo *)arg1 ;
-(void)setAuthenticationProvider:(ICURLResponseAuthenticationProvider *)arg1 ;
-(id)initWithClientInfo:(id)arg1 ;
-(id)copyWithBlock:(/*^block*/id)arg1 ;
-(ICNetworkConstraints *)networkConstraints;
-(void)setNetworkConstraints:(ICNetworkConstraints *)arg1 ;
-(BOOL)_allowsMutation;
-(ICURLResponseAuthenticationProvider *)authenticationProvider;
-(id)initWithClientInfo:(id)arg1 authenticationProvider:(id)arg2 ;
@end

