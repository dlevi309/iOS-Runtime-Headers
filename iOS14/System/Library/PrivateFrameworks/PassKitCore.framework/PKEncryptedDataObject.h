/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface PKEncryptedDataObject : NSObject <NSSecureCoding> {

	unsigned long long _version;
	NSData* _ephemeralPublicKey;
	NSData* _publicKeyHash;
	NSData* _data;

}

@property (assign,nonatomic) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSData * ephemeralPublicKey;               //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,copy) NSData * publicKeyHash;                    //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,copy) NSData * data;                             //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setEphemeralPublicKey:(NSData *)arg1 ;
-(NSData *)publicKeyHash;
-(NSData *)ephemeralPublicKey;
-(void)setPublicKeyHash:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(unsigned long long)arg1 ;
-(unsigned long long)version;
-(id)asWebServiceDictionary;
-(id)initWithWebServiceDictionary:(id)arg1 ;
@end

