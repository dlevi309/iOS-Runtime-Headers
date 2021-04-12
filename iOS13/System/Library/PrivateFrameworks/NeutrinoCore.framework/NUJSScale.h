/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUJSRational.h>

@class NSValue;

@interface NUJSScale : NUJSRational

@property (readonly) SCD_Struct_NU7 scale; 
@property (readonly) NSValue * value; 
-(NSValue *)value;
-(SCD_Struct_NU7)scale;
-(id)initWithScale:(SCD_Struct_NU7)arg1 ;
-(id)nu_unwrapJSValue;
@end

