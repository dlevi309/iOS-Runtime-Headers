/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNCreateFaceprintRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _forceFaceprintCreation;

}

@property (assign) BOOL forceFaceprintCreation;              //@synthesize forceFaceprintCreation=_forceFaceprintCreation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setForceFaceprintCreation:(BOOL)arg1 ;
-(BOOL)forceFaceprintCreation;
@end

