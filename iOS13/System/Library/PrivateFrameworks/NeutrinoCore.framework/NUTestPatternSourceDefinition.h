/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(SCD_Struct_NU7)size;
-(long long)orientation;
-(long long)mediaType;
-(id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSize:(SCD_Struct_NU7)arg1 orientation:(long long)arg2 ;
@end

