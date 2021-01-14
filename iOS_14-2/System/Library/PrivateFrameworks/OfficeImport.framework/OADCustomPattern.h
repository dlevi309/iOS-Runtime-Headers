/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADPattern.h>

@class OADBlipRef;

@interface OADCustomPattern : OADPattern {

	OADBlipRef* mBlipRef;
	BOOL mIsBlipRefOverridden;

}
+(id)defaultProperties;
-(unsigned long long)hash;
-(id)blipRef;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isBlipRefOverridden;
-(void)setBlipRef:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
@end

