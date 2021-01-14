/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADEffect.h>

@class OADColor;

@interface OADShadowEffect : OADEffect {

	OADColor* mColor;
	float mBlurRadius;
	float mDistance;
	float mAngle;

}
-(void)setBlurRadius:(float)arg1 ;
-(float)angle;
-(id)initWithType:(int)arg1 ;
-(void)setDistance:(float)arg1 ;
-(float)distance;
-(id)color;
-(float)blurRadius;
-(id)description;
-(void)setAngle:(float)arg1 ;
-(void)setColor:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(id)initWithShadowEffect:(id)arg1 type:(int)arg2 ;
@end

