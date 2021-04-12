/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NUHistogramParameters : NSObject <NSCopying> {

	SCD_Struct_NU12 _colorMatrix;

}

@property (assign) SCD_Struct_NU12 colorMatrix;              //@synthesize colorMatrix=_colorMatrix - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_NU12)colorMatrix;
-(void)setColorMatrix:(SCD_Struct_NU12)arg1 ;
@end

