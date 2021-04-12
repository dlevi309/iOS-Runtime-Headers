/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARResultData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AR3DSkeletonRegistrationData : NSObject <ARResultData, NSCopying> {

	float _estimatedScaleFactor;
	double _timestamp;
	SCD_Struct_AR1 _visionTransform;

}

@property (assign,nonatomic) double timestamp;                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) float estimatedScaleFactor;                  //@synthesize estimatedScaleFactor=_estimatedScaleFactor - In the implementation block
@property (assign,nonatomic) SCD_Struct_AR1 visionTransform;              //@synthesize visionTransform=_visionTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(float)estimatedScaleFactor;
-(void)setEstimatedScaleFactor:(float)arg1 ;
-(SCD_Struct_AR1)visionTransform;
-(void)setVisionTransform:(SCD_Struct_AR1)arg1 ;
@end

