/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, PKSecureElementCertificateSet;

@interface PKSecureElementSignatureInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sequenceCounter;
	NSString* _platformIdentifier;
	PKSecureElementCertificateSet* _certificates;
	unsigned long long _certificateVersion;

}

@property (nonatomic,copy,readonly) NSString * sequenceCounter;                                //@synthesize sequenceCounter=_sequenceCounter - In the implementation block
@property (nonatomic,copy,readonly) NSString * platformIdentifier;                             //@synthesize platformIdentifier=_platformIdentifier - In the implementation block
@property (nonatomic,copy,readonly) PKSecureElementCertificateSet * certificates;              //@synthesize certificates=_certificates - In the implementation block
@property (nonatomic,readonly) unsigned long long certificateVersion;                          //@synthesize certificateVersion=_certificateVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKSecureElementCertificateSet *)certificates;
-(NSString *)sequenceCounter;
-(NSString *)platformIdentifier;
-(id)initWithSecureElementCertificateSet:(id)arg1 sequenceCounter:(id)arg2 platformIdentifier:(id)arg3 certificateVersion:(unsigned long long)arg4 ;
-(unsigned long long)certificateVersion;
@end

