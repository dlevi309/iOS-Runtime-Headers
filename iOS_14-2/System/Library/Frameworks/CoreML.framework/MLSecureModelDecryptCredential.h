/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLSecureModelDecryptCredential : NSObject <NSSecureCoding> {

	long long _cryptoKey;

}

@property (assign,nonatomic) long long cryptoKey;              //@synthesize cryptoKey=_cryptoKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setCryptoKey:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)cryptoKey;
@end

