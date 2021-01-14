/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

@interface OADPatternFill : OADFill {

	OADColor* mFgColor;
	OADColor* mBgColor;
	OADPattern* mPattern;

}
+(id)defaultProperties;
-(void)setBgColor:(id)arg1 ;
-(void)setFgColor:(id)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)bgColor;
-(id)fgColor;
-(void)setColor:(id)arg1 ;
-(id)pattern;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPattern:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isFgColorOverridden;
-(BOOL)isBgColorOverridden;
-(BOOL)isPatternOverridden;
-(id)namedImageDataWithBlipCollection:(id)arg1 ;
@end

