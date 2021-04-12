/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSArray, AREnvironmentProbeManager, NSString;

@interface AREnvironmentProbeUpdate : NSObject <ARResultData> {

	NSArray* _addedProbeAnchors;
	NSArray* _updatedProbeAnchors;
	NSArray* _removedProbeAnchors;
	AREnvironmentProbeManager* _manager;

}

@property (assign,nonatomic,__weak) AREnvironmentProbeManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSArray * addedProbeAnchors;                             //@synthesize addedProbeAnchors=_addedProbeAnchors - In the implementation block
@property (nonatomic,retain) NSArray * updatedProbeAnchors;                           //@synthesize updatedProbeAnchors=_updatedProbeAnchors - In the implementation block
@property (nonatomic,retain) NSArray * removedProbeAnchors;                           //@synthesize removedProbeAnchors=_removedProbeAnchors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AREnvironmentProbeManager *)manager;
-(void)setManager:(AREnvironmentProbeManager *)arg1 ;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(void)setAddedProbeAnchors:(NSArray *)arg1 ;
-(void)setUpdatedProbeAnchors:(NSArray *)arg1 ;
-(void)setRemovedProbeAnchors:(NSArray *)arg1 ;
-(NSArray *)removedProbeAnchors;
-(NSArray *)addedProbeAnchors;
-(NSArray *)updatedProbeAnchors;
@end

