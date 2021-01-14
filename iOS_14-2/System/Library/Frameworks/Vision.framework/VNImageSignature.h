/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNImageSignature : NSObject <NSSecureCoding> {

	FastRegistration_Signatures* _signature;

}

@property (readonly) const FastRegistration_Signatures* signature; 
+(BOOL)supportsSecureCoding;
-(const FastRegistration_Signatures*)signature;
-(id)initWithImageBuffer:(id)arg1 andOptions:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

