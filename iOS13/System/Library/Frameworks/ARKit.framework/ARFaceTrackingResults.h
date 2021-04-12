/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>

@class NSArray, NSString;

@interface ARFaceTrackingResults : NSObject <ARResultData> {

	NSArray* _trackedFaces;

}

@property (nonatomic,copy) NSArray * trackedFaces;                  //@synthesize trackedFaces=_trackedFaces - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
-(NSArray *)trackedFaces;
-(void)setTrackedFaces:(NSArray *)arg1 ;
@end

