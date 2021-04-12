/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUAbstractScaleNode.h>

@interface NUResetScaleNode : NUAbstractScaleNode {

	SCD_Struct_NU7 _scale;

}

@property (nonatomic,readonly) SCD_Struct_NU7 scale;              //@synthesize scale=_scale - In the implementation block
-(SCD_Struct_NU7)scale;
-(id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 ;
-(id)initWithInput:(id)arg1 scale:(SCD_Struct_NU7)arg2 ;
@end

