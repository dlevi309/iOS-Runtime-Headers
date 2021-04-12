/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface HMDApplicationVendorIDStoreValue : HMFObject <NSSecureCoding> {

	BOOL _spiClient;
	NSData* _vendorIdSha1;
	NSString* _applicationBundleId;
	NSString* _companionAppBundleId;

}

@property (nonatomic,readonly) NSData * vendorIdSha1;                        //@synthesize vendorIdSha1=_vendorIdSha1 - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleId;               //@synthesize applicationBundleId=_applicationBundleId - In the implementation block
@property (nonatomic,readonly) NSString * companionAppBundleId;              //@synthesize companionAppBundleId=_companionAppBundleId - In the implementation block
@property (nonatomic,readonly) BOOL spiClient;                               //@synthesize spiClient=_spiClient - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)vendorIdSha1;
-(NSString *)applicationBundleId;
-(NSString *)companionAppBundleId;
-(BOOL)spiClient;
-(id)initWithVendorIDSha1:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(BOOL)arg4 ;
@end

