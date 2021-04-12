/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface ARCoreRESkeletonResults : NSObject <ARResultData, NSCopying> {

	NSArray* _retargetedSkeletons;
	double _timestamp;
	CGSize _imageResolution;
	SCD_Struct_AR24 _cameraIntrinsics;

}

@property (assign,nonatomic) SCD_Struct_AR24 cameraIntrinsics;              //@synthesize cameraIntrinsics=_cameraIntrinsics - In the implementation block
@property (assign,nonatomic) CGSize imageResolution;                        //@synthesize imageResolution=_imageResolution - In the implementation block
@property (nonatomic,copy) NSArray * retargetedSkeletons;                   //@synthesize retargetedSkeletons=_retargetedSkeletons - In the implementation block
@property (assign,nonatomic) double timestamp;                              //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(SCD_Struct_AR24)cameraIntrinsics;
-(void)setCameraIntrinsics:(SCD_Struct_AR24)arg1 ;
-(void)setRetargetedSkeletons:(NSArray *)arg1 ;
-(CGSize)imageResolution;
-(void)setImageResolution:(CGSize)arg1 ;
-(NSArray *)retargetedSkeletons;
-(id)anchorsForCameraWithTransform:(SCD_Struct_AR1)arg1 referenceOriginTransform:(SCD_Struct_AR1)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4 ;
@end

