/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(id)initWithRequest:(id)arg1 ;
-(NSString *)publicKeyHash;
-(NSString *)ephemeralPublicKey;
-(NSString *)encryptionScheme;
-(id)initWithEncryptionScheme:(id)arg1 ephemeralPublicKey:(id)arg2 publicKeyHash:(id)arg3 data:(id)arg4 ;
@end

