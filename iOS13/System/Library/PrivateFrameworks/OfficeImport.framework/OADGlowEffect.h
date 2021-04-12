/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADEffect.h>

@class OADColor;

@interface OADGlowEffect : OADEffect {

	OADColor* mColor;
	float mRadius;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(float)radius;
-(void)setRadius:(float)arg1 ;
@end

