/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(HMFDigest *)digest;
-(id)initWithURL:(id)arg1 digest:(id)arg2 ;
@end

