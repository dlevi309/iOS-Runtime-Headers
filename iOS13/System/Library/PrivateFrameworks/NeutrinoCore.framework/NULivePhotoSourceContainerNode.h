/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

