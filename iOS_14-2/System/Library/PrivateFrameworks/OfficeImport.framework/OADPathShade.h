/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShade.h>

@class OADRelativeRect;

@interface OADPathShade : OADShade {

	OADRelativeRect* mFillToRect;
	int mType;
	BOOL mIsTypeOverridden;

}
+(id)defaultProperties;
-(void)setType:(int)arg1 ;
-(int)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDefaults;
-(BOOL)isEqual:(id)arg1 ;
-(id)fillToRect;
-(void)setFillToRect:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isFillToRectOverridden;
-(BOOL)isTypeOverridden;
@end

