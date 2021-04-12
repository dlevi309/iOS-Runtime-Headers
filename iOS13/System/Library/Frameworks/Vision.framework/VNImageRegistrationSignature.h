/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNImageRegistrationSignature : NSObject <NSSecureCoding> {

	FastRegistration_Signatures* mSignature_;

}
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(const FastRegistration_Signatures*)signature;
-(id)initWithImageBuffer:(id)arg1 andOptions:(id)arg2 error:(id*)arg3 ;
@end

