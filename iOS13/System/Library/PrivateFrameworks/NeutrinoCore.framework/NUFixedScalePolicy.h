/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUScalePolicy.h>

@class NSString;

@interface NUFixedScalePolicy : NSObject <NUScalePolicy> {

	SCD_Struct_NU7 _scale;

}

@property (readonly) SCD_Struct_NU7 scale;                          //@synthesize scale=_scale - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)oneToOneScalePolicy;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(SCD_Struct_NU7)scale;
-(id)initWithScale:(SCD_Struct_NU7)arg1 ;
-(SCD_Struct_NU7)scaleForImageSize:(SCD_Struct_NU7)arg1 ;
@end

