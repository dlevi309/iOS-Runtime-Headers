/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ARExtrinsicsWrapper : NSObject <NSSecureCoding> {

	SCD_Struct_AR1 _matrix;

}

@property (nonatomic,readonly) SCD_Struct_AR1 matrix;              //@synthesize matrix=_matrix - In the implementation block
+(BOOL)supportsSecureCoding;
-(SCD_Struct_AR1)matrix;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithMatrix:(SCD_Struct_AR1)arg1 ;
@end

