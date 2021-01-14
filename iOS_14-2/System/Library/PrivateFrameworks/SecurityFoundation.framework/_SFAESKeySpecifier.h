/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFSymmetricKeySpecifier.h>

@interface _SFAESKeySpecifier : _SFSymmetricKeySpecifier {

	id _aesKeySpecifierInternal;

}

@property (nonatomic,readonly) long long blockSize; 
@property (assign,nonatomic) long long bitSize; 
+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(long long)blockSize;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)keyLengthInBytes;
-(id)description;
-(long long)bitSize;
-(id)initWithCoder:(id)arg1 ;
-(void)setBitSize:(long long)arg1 ;
-(id)initWithBitSize:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

