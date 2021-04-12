/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)blockSize;
-(id)initWithBitSize:(long long)arg1 ;
-(long long)bitSize;
-(long long)keyLengthInBytes;
-(void)setBitSize:(long long)arg1 ;
@end

