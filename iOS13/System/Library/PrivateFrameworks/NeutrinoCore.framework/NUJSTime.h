/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUJSRational.h>

@class NSValue;

@interface NUJSTime : NUJSRational

@property (readonly) SCD_Struct_NU6 time; 
@property (readonly) NSValue * value; 
-(NSValue *)value;
-(SCD_Struct_NU6)time;
-(id)initWithTime:(SCD_Struct_NU6)arg1 ;
-(id)nu_unwrapJSValue;
@end

