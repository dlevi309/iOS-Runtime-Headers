/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleId;
-(NSData *)vendorIdSha1;
-(NSString *)companionAppBundleId;
-(BOOL)spiClient;
-(id)initWithVendorIDSha1:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(BOOL)arg4 ;
@end

