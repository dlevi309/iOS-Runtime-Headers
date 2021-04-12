/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceContainerNode.h>

@class NUSourceContainerNode;

@interface NULivePhotoSourceContainerNode : NUSourceContainerNode {

	NUSourceContainerNode* _image;
	NUSourceContainerNode* _video;

}
-(id)initWithAssetIdentifier:(id)arg1 ;
-(id)sourceNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(SCD_Struct_NU7*)arg2 error:(out id*)arg3 ;
-(id)primarySourceNode;
-(id)initWithImageContainerNode:(id)arg1 videoContainerNode:(id)arg2 assetIdentifier:(id)arg3 ;
-(id)containerNodeForPipelineState:(id)arg1 ;
@end

