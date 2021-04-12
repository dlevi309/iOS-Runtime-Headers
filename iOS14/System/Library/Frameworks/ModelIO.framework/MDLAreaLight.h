/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
*/

#import <ModelIO/MDLPhysicallyPlausibleLight.h>

@interface MDLAreaLight : MDLPhysicallyPlausibleLight {

	float _areaRadius;
	float _aspect;
	 _superEllipticPower;

}

@property (assign,nonatomic) float areaRadius;                 //@synthesize areaRadius=_areaRadius - In the implementation block
@property (assign,nonatomic)  superEllipticPower;              //@synthesize superEllipticPower=_superEllipticPower - In the implementation block
@property (assign,nonatomic) float aspect;                     //@synthesize aspect=_aspect - In the implementation block
-(float)aspect;
-(id)init;
-(void)setAspect:(float)arg1 ;
-(void)setAreaRadius:(float)arg1 ;
-(void)setSuperEllipticPower:;
-(float)areaRadius;
-()superEllipticPower;
@end

