/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, HMFDigest;

@interface HMSoftwareUpdateDocumentationMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _URL;
	HMFDigest* _digest;

}

@property (copy,readonly) NSURL * URL;                     //@synthesize URL=_URL - In the implementation block
@property (copy,readonly) HMFDigest * digest;              //@synthesize digest=_digest - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithURL:(id)arg1 digest:(id)arg2 ;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(HMFDigest *)digest;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

