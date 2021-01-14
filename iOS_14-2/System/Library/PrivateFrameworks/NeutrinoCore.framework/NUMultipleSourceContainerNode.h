/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUSourceContainerNode.h>

@class NSArray;

@interface NUMultipleSourceContainerNode : NUSourceContainerNode {

	NSArray* _sources;

}

@property (retain) NSArray * sources;              //@synthesize sources=_sources - In the implementation block
-(void)setSources:(NSArray *)arg1 ;
-(NSArray *)sources;
-(id)description;
-(id)initWithAssetIdentifier:(id)arg1 ;
-(id)sourceNodeForPipelineState:(id)arg1 error:(out id*)arg2 ;
-(id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(SCD_Struct_NU7*)arg2 error:(out id*)arg3 ;
-(id)primarySourceNode;
-(id)initWithSourceNodes:(id)arg1 assetIdentifier:(id)arg2 ;
@end

