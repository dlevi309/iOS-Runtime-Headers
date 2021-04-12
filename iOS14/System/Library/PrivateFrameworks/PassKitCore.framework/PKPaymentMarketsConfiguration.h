/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString, NSURL;

@interface PKPaymentMarketsConfiguration : NSObject <NSSecureCoding> {

	NSSet* _markets;
	NSString* _version;
	NSURL* _url;

}

@property (copy,readonly) NSSet * markets;                 //@synthesize markets=_markets - In the implementation block
@property (copy,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
@property (copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)paymentMarketsConfigurationWithURL:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSSet *)markets;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 url:(id)arg2 forDeviceClass:(id)arg3 version:(id)arg4 ;
-(id)marketsForLocation:(id)arg1 ;
-(id)marketsForRegions:(id)arg1 ;
-(id)marketsForLocation:(id)arg1 ofType:(long long)arg2 ;
-(id)closestMarketForLocation:(id)arg1 ;
-(id)supportedCredentialTypesForLocation:(id)arg1 ;
-(id)expressCredentialTypesForLocation:(id)arg1 ;
-(id)supportedTransitNetworksForLocation:(id)arg1 ;
-(id)expressTransitNetworksForLocation:(id)arg1 ;
-(NSURL *)url;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
@end

