/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADColor;

@interface OADSolidFill : OADFill {

	OADColor* mColor;
	BOOL mIsColorOverridden;

}
+(id)defaultProperties;
+(id)blackFill;
+(id)whiteFill;
-(id)color;
-(void)setColor:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isColorOverridden;
-(void)setStyleColor:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)usesPlaceholderColor;
@end

