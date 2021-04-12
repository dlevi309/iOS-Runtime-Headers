/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUJSRational.h>

@class NSValue;

@interface NUJSTime : NUJSRational

@property (readonly) SCD_Struct_NU6 time; 
@property (readonly) NSValue * value; 
-(SCD_Struct_NU6)time;
-(NSValue *)value;
-(id)nu_unwrapJSValue;
-(id)initWithTime:(SCD_Struct_NU6)arg1 ;
@end

