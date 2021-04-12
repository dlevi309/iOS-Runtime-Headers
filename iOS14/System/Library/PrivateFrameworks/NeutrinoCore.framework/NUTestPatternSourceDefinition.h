/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSingleSourceDefinition.h>

@interface NUTestPatternSourceDefinition : NUSingleSourceDefinition {

	long long _orientation;
	SCD_Struct_NU7 _size;

}

@property (readonly) SCD_Struct_NU7 size;                //@synthesize size=_size - In the implementation block
@property (readonly) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
-(long long)mediaType;
-(id)init;
-(SCD_Struct_NU7)size;
-(long long)orientation;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 orientation:(long long)arg2 ;
@end

