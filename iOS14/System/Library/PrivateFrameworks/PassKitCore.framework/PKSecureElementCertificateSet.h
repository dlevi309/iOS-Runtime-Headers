/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface PKSecureElementCertificateSet : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsLegacyFormats;
	NSDictionary* _dictionary;

}

@property (assign,nonatomic) BOOL supportsLegacyFormats;                    //@synthesize supportsLegacyFormats=_supportsLegacyFormats - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRSACertificate:(id)arg1 ECDSACertificate:(id)arg2 ;
-(id)certificateOfType:(unsigned long long)arg1 ;
-(BOOL)supportsLegacyFormats;
-(void)setSupportsLegacyFormats:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

