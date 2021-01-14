/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPushProvisioningSharingMetadata : NSObject <NSSecureCoding, NSCopying> {

	NSString* _sharingInstanceIdentifier;
	NSString* _provisioningCredentialHash;
	unsigned long long _sharingStatus;

}

@property (nonatomic,copy) NSString * sharingInstanceIdentifier;               //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
@property (nonatomic,copy) NSString * provisioningCredentialHash;              //@synthesize provisioningCredentialHash=_provisioningCredentialHash - In the implementation block
@property (assign,nonatomic) unsigned long long sharingStatus;                 //@synthesize sharingStatus=_sharingStatus - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToEncryptedProvisioningTarget:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)sharingStatus;
-(NSString *)sharingInstanceIdentifier;
-(void)setSharingInstanceIdentifier:(NSString *)arg1 ;
-(NSString *)provisioningCredentialHash;
-(void)setProvisioningCredentialHash:(NSString *)arg1 ;
-(void)setSharingStatus:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

