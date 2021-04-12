/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)initWithDefaults;
-(BOOL)isColorOverridden;
-(void)setStyleColor:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)usesPlaceholderColor;
@end

