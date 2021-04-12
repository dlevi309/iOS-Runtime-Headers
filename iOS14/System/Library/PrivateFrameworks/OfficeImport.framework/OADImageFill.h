/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTechnique:(id)arg1 ;
-(int)dpi;
-(id)technique;
-(id)color;
-(void)setParent:(id)arg1 ;
-(void)setSourceRect:(id)arg1 ;
-(id)sourceRect;
-(unsigned long long)hash;
-(id)blipRef;
-(void)setDpi:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isBlipRefOverridden;
-(BOOL)isSourceRectOverridden;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(void)setBlipRef:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isRotateWithShapeOverridden;
-(BOOL)rotateWithShape;
-(BOOL)isDpiOverridden;
-(BOOL)isTechniqueOverridden;
@end

