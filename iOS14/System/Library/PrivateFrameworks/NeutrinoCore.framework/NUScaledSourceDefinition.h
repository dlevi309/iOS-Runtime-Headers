/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSingleSourceDefinition.h>

@class NUSingleSourceDefinition;

@interface NUScaledSourceDefinition : NUSingleSourceDefinition {

	NUSingleSourceDefinition* _source;
	SCD_Struct_NU7 _sourceSize;
	SCD_Struct_NU7 _fullSize;

}

@property (readonly) NUSingleSourceDefinition * source;              //@synthesize source=_source - In the implementation block
@property (readonly) SCD_Struct_NU7 sourceSize;                      //@synthesize sourceSize=_sourceSize - In the implementation block
@property (readonly) SCD_Struct_NU7 fullSize;                        //@synthesize fullSize=_fullSize - In the implementation block
-(long long)mediaType;
-(SCD_Struct_NU7)scale;
-(id)description;
-(SCD_Struct_NU7)sourceSize;
-(SCD_Struct_NU7)fullSize;
-(NUSingleSourceDefinition *)source;
-(id)sourceContainerNodeWithIdentifier:(id)arg1 error:(out id*)arg2 ;
-(id)initWithSourceDefinition:(id)arg1 sourceSize:(SCD_Struct_NU7)arg2 fullSize:(SCD_Struct_NU7)arg3 ;
@end

