/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@interface VNCreateFaceprintRequestConfiguration : VNImageBasedRequestConfiguration {

	BOOL _forceFaceprintCreation;

}

@property (assign) BOOL forceFaceprintCreation;              //@synthesize forceFaceprintCreation=_forceFaceprintCreation - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(void)setForceFaceprintCreation:(BOOL)arg1 ;
-(BOOL)forceFaceprintCreation;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

