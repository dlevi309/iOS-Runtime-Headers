/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADDrawableProperties.h>
#import <libobjc.A.dylib/OADEffectsParent.h>
#import <libobjc.A.dylib/OADProperties3DParent.h>

@class OADFill, NSArray, OADScene3D, OADShape3D, NSString;

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent> {

	OADFill* mFill;
	NSArray* mEffects;
	OADScene3D* mScene3D;
	OADShape3D* mShape3D;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultProperties;
-(id)fill;
-(NSString *)description;
-(BOOL)hasEffects;
-(id)effects;
-(BOOL)hasFill;
-(id)scene3D;
-(id)shape3D;
-(id)initWithDefaults;
-(void)setEffects:(id)arg1 ;
-(void)setFill:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(void)setScene3D:(id)arg1 ;
-(void)setShape3D:(id)arg1 ;
-(BOOL)hasScene3D;
-(BOOL)hasShape3D;
@end

