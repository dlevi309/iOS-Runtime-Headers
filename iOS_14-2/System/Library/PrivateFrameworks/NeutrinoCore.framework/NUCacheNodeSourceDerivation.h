/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUSourceDerivation.h>

@interface NUCacheNodeSourceDerivation : NSObject <NUSourceDerivation> {

	long long _subsampleFactor;

}
-(id)init;
-(SCD_Struct_NU7)scaleFromOriginalSize:(SCD_Struct_NU7)arg1 derivativeSize:(SCD_Struct_NU7)arg2 ;
-(long long)orientationFromOriginal:(long long)arg1 derivativeOrientation:(long long)arg2 ;
-(id)initWithSubsampleFactor:(long long)arg1 ;
@end

