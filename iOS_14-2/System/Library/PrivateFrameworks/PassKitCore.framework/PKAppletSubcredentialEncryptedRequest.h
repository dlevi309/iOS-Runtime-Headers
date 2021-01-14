/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface PKAppletSubcredentialEncryptedRequest : NSObject <NSSecureCoding> {

	NSString* _encryptionScheme;
	NSString* _ephemeralPublicKey;
	NSString* _publicKeyHash;
	NSData* _data;

}

@property (nonatomic,readonly) NSString * encryptionScheme;                //@synthesize encryptionScheme=_encryptionScheme - In the implementation block
@property (nonatomic,readonly) NSString * ephemeralPublicKey;              //@synthesize ephemeralPublicKey=_ephemeralPublicKey - In the implementation block
@property (nonatomic,readonly) NSString * publicKeyHash;                   //@synthesize publicKeyHash=_publicKeyHash - In the implementation block
@property (nonatomic,readonly) NSData * data;                              //@synthesize data=_data - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)publicKeyHash;
-(NSString *)ephemeralPublicKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithEncryptionScheme:(id)arg1 ephemeralPublicKey:(id)arg2 publicKeyHash:(id)arg3 data:(id)arg4 ;
-(id)description;
-(NSData *)data;
-(id)initWithRequest:(id)arg1 ;
-(NSString *)encryptionScheme;
-(id)initWithCoder:(id)arg1 ;
@end

