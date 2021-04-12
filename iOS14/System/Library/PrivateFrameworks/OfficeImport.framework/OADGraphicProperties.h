/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADDrawableProperties.h>
#import <libobjc.A.dylib/OADEffectsParent.h>
#import <libobjc.A.dylib/OADProperties3DParent.h>

@class OADFill, NSArray, OADScene3D, OADShape3D, OADStroke, NSString;

@interface OADGraphicProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {

	OADFill* mFill;
	NSArray* mEffects;
	NSArray* mExts;
	OADScene3D* mScene3D;
	OADShape3D* mShape3D;
	OADStroke* mStroke;
	unsigned mHasIsBehindText : 1;
	unsigned mIsBehindText : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fill;
-(id)stroke;
-(id)exts;
-(void)setParent:(id)arg1 ;
-(NSString *)description;
-(BOOL)hasEffects;
-(unsigned long long)hash;
-(id)effects;
-(BOOL)hasFill;
-(BOOL)hasExts;
-(id)scene3D;
-(id)shape3D;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(void)setStroke:(id)arg1 ;
-(void)setEffects:(id)arg1 ;
-(BOOL)hasStroke;
-(void)setFill:(id)arg1 ;
-(void)setIsBehindText:(BOOL)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)removeUnnecessaryOverrides;
-(void)setExts:(id)arg1 ;
-(BOOL)hasIsBehindText;
-(BOOL)isBehindText;
-(BOOL)hasNonEmptyFill;
-(void)setScene3D:(id)arg1 ;
-(void)setShape3D:(id)arg1 ;
-(BOOL)hasScene3D;
-(BOOL)hasShape3D;
@end

