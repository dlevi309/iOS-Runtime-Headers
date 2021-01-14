/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class NSArray, OADRelativeRect, OADShade;

@interface OADGradientFill : OADFill {

	NSArray* mStops;
	OADRelativeRect* mTileRect;
	int mFlipMode;
	BOOL mIsFlipModeOverridden;
	BOOL mRotateWithShape;
	BOOL mIsRotateWithShapeOverridden;
	OADShade* mShade;

}
+(id)defaultProperties;
+(id)stringForTileFlipMode:(int)arg1 ;
-(id)stops;
-(id)shade;
-(void)setParent:(id)arg1 ;
-(unsigned long long)hash;
-(void)setStops:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRotateWithShape:(BOOL)arg1 ;
-(void)setFlipMode:(int)arg1 ;
-(void)setTileRect:(id)arg1 ;
-(void)setShade:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)usesPlaceholderColor;
-(BOOL)areStopsOverridden;
-(BOOL)isTileRectOverridden;
-(BOOL)isFlipModeOverridden;
-(BOOL)isRotateWithShapeOverridden;
-(BOOL)isShadeOverridden;
-(id)tileRect;
-(int)flipMode;
-(BOOL)rotateWithShape;
-(void)sortStops;
-(id)firstStop;
-(id)lastStop;
@end

