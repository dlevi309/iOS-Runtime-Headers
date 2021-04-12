/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<NURenderStatistics> statistics; 
-(void)dealloc;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(SCD_Struct_NU7)point;
-(void)setPoint:(SCD_Struct_NU7)arg1 ;
@end

