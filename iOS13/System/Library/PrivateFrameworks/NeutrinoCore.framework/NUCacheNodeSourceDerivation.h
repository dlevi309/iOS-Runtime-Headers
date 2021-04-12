/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

