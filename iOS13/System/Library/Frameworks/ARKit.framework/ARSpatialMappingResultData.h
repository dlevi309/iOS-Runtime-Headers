/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSArray, NSString;

@interface ARSpatialMappingResultData : NSObject <ARResultData> {

	NSArray* _meshChunks;

}

@property (nonatomic,retain) NSArray * meshChunks;                  //@synthesize meshChunks=_meshChunks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(id)initWithMeshChunks:(id)arg1 ;
-(NSArray *)meshChunks;
-(void)updateSemanticsFromSamplingData:(CFDataRef)arg1 ;
-(void)setMeshChunks:(NSArray *)arg1 ;
@end

