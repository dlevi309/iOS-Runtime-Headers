/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUColorSamplerResult.h>

@class NSString;

@interface _NUColorSamplerResult : _NURenderResult <NUColorSamplerResult> {

	CGColorRef _color;
	SCD_Struct_NU7 _point;

}

@property (assign) SCD_Struct_NU7 point;                             //@synthesize point=_point - In the implementation block
@property (nonatomic,retain) CGColorRef color;                       //@synthesize color=_color - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SCD_Struct_NU7)point;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setPoint:(SCD_Struct_NU7)arg1 ;
-(void)dealloc;
@end

