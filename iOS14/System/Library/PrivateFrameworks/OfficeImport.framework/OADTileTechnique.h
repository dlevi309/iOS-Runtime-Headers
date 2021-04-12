/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADImageFillTechnique.h>

@interface OADTileTechnique : OADImageFillTechnique {

	float mOffsetX;
	BOOL mIsOffsetXOverridden;
	float mOffsetY;
	BOOL mIsOffsetYOverridden;
	float mScaleX;
	BOOL mIsScaleXOverridden;
	float mScaleY;
	BOOL mIsScaleYOverridden;
	int mFlipMode;
	BOOL mIsFlipModeOverridden;
	int mAlignment;
	BOOL mIsAlignmentOverridden;

}
+(id)defaultProperties;
-(int)alignment;
-(void)setAlignment:(int)arg1 ;
-(float)scaleX;
-(float)scaleY;
-(float)offsetX;
-(float)offsetY;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFlipMode:(int)arg1 ;
-(void)setOffsetX:(float)arg1 ;
-(void)setOffsetY:(float)arg1 ;
-(void)setScaleX:(float)arg1 ;
-(void)setScaleY:(float)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isFlipModeOverridden;
-(int)flipMode;
-(BOOL)isOffsetXOverridden;
-(BOOL)isOffsetYOverridden;
-(BOOL)isScaleXOverridden;
-(BOOL)isScaleYOverridden;
-(BOOL)isAlignmentOverridden;
@end

