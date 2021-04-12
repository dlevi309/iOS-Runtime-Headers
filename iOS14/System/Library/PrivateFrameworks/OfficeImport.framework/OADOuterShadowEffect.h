/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShadowEffect.h>

@interface OADOuterShadowEffect : OADShadowEffect {

	float mXScale;
	float mYScale;
	float mXSkew;
	float mYSkew;
	int mAlignment;
	BOOL mRotateWithShape;

}
-(id)init;
-(int)alignment;
-(float)xSkew;
-(float)ySkew;
-(void)setAlignment:(int)arg1 ;
-(float)xScale;
-(float)yScale;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setXScale:(float)arg1 ;
-(void)setYScale:(float)arg1 ;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(BOOL)rotateWithShape;
-(void)setXSkew:(float)arg1 ;
-(void)setYSkew:(float)arg1 ;
@end

