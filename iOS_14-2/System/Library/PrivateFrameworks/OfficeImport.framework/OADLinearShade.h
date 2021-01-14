/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShade.h>

@interface OADLinearShade : OADShade {

	float mAngle;
	BOOL mIsAngleOverridden;
	BOOL mScaled;
	BOOL mIsScaledOverridden;

}
+(id)defaultProperties;
-(float)angle;
-(void)setScaled:(BOOL)arg1 ;
-(void)setAngle:(float)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)scaled;
-(BOOL)isEqual:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isAngleOverridden;
-(BOOL)isScaledOverridden;
@end

