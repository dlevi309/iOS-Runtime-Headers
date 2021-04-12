/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFECKeySpecifier : _SFAsymmetricKeySpecifier {

	id _ecKeySpecifierInternal;

}

@property (assign) long long curve; 
+(BOOL)supportsSecureCoding;
+(Class)keyClass;
-(long long)curve;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCurve:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCurve:(long long)arg1 ;
@end

