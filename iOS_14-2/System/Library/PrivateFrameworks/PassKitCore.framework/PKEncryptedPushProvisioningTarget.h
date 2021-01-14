/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface PKEncryptedPushProvisioningTarget : NSObject <NSSecureCoding, NSCopying> {

	NSData* _ephemeralPublicKey;
	NSData* _publicKeyHash;
	NSData* _data;
	unsigned long long _status;
	unsigned long long _source;

}

@property (nonatomic,copy) NSData * ephemeralPublicKey;              //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                   //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSData * data;                            //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long status;              //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long source;              //@synthesize source=_source - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEphemeralPublicKey:(NSData *)arg1 ;
-(NSData *)publicKeyHash;
-(BOOL)isEqualToEncryptedProvisioningTarget:(id)arg1 ;
-(NSData *)ephemeralPublicKey;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setSource:(unsigned long long)arg1 ;
-(id)description;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)asWebServiceDictionary;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)status;
-(unsigned long long)source;
@end

