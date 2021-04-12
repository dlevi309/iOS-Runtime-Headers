/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADBlipRef, OADRelativeRect, OADImageFillTechnique;

@interface OADImageFill : OADFill {

	OADBlipRef* mBlipRef;
	BOOL mIsBlipRefOverridden;
	OADRelativeRect* mSourceRect;
	int mDpi;
	BOOL mIsDpiOverridden;
	BOOL mRotateWithShape;
	BOOL mIsRotateWithShapeOverridden;
	OADImageFillTechnique* mTechnique;

}
+(id)defaultProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)color;
-(id)sourceRect;
-(void)setSourceRect:(id)arg1 ;
-(id)initWithDefaults;
-(void)setTechnique:(id)arg1 ;
-(id)technique;
-(BOOL)isBlipRefOverridden;
-(id)blipRef;
-(BOOL)isSourceRectOverridden;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(void)setBlipRef:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isRotateWithShapeOverridden;
-(BOOL)rotateWithShape;
-(void)setDpi:(int)arg1 ;
-(BOOL)isDpiOverridden;
-(BOOL)isTechniqueOverridden;
-(int)dpi;
@end

