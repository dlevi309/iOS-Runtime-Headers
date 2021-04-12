/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUScalePolicy.h>

@class NSString;

@interface NUFitScalePolicy : NSObject <NUScalePolicy> {

	SCD_Struct_NU7 _size;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)initWithTargetPixelSize:(SCD_Struct_NU7)arg1 ;
-(id)initWithTargetSize:(CGSize)arg1 ;
-(SCD_Struct_NU7)scaleForImageSize:(SCD_Struct_NU7)arg1 ;
@end

