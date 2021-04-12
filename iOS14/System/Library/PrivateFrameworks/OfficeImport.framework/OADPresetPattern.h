/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPattern.h>

@interface OADPresetPattern : OADPattern {

	int mType;
	BOOL mIsTypeOverridden;

}
+(id)defaultProperties;
+(id)nameForPresetPatternType:(int)arg1 ;
+(id)namedBitmapDataForPresetPatternType:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(BOOL)isTypeOverridden;
@end

