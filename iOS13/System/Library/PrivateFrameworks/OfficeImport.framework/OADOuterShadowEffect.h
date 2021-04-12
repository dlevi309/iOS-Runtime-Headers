/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(float)xScale;
-(float)yScale;
-(void)setXScale:(float)arg1 ;
-(void)setYScale:(float)arg1 ;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(BOOL)rotateWithShape;
-(float)xSkew;
-(void)setXSkew:(float)arg1 ;
-(float)ySkew;
-(void)setYSkew:(float)arg1 ;
@end

