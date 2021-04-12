/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)angle;
-(void)setAngle:(float)arg1 ;
-(BOOL)scaled;
-(void)setScaled:(BOOL)arg1 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isAngleOverridden;
-(BOOL)isScaledOverridden;
@end

