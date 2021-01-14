/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADBevel, OADColor;

@interface OADShape3D : NSObject <NSCopying> {

	OADBevel* mTopBevel;
	OADBevel* mBottomBevel;
	OADColor* mExtrusionColor;
	float mExtrusionHeight;
	OADColor* mContourColor;
	float mContourWidth;
	float mShapeDepth;
	int mMaterial;

}
+(id)nullShape3D;
-(id)init;
-(id)description;
-(int)material;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMaterial:(int)arg1 ;
-(void)setTopBevel:(id)arg1 ;
-(void)setBottomBevel:(id)arg1 ;
-(void)setExtrusionColor:(id)arg1 ;
-(void)setContourColor:(id)arg1 ;
-(void)setShapeDepth:(float)arg1 ;
-(void)setExtrusionHeight:(float)arg1 ;
-(void)setContourWidth:(float)arg1 ;
-(float)shapeDepth;
-(float)extrusionHeight;
-(float)contourWidth;
-(id)topBevel;
-(id)bottomBevel;
-(id)extrusionColor;
-(id)contourColor;
@end

