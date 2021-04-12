/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)material;
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

