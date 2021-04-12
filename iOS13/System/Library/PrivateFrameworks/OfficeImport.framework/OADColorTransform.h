/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface OADColorTransform : NSObject <NSCopying> {

	int mType;

}
+(id)colorByApplyingTransforms:(id)arg1 toColor:(id)arg2 ;
+(float)alphaByApplyingTransforms:(id)arg1 toAlpha:(float)arg2 ;
+(float)applyAlphaTransform:(id)arg1 toAlpha:(float)arg2 ;
+(id)applyExpTransformWithValue:(float)arg1 toColor:(id)arg2 ;
+(id)applyRGBTransform:(id)arg1 toColor:(id)arg2 skipGamma:(BOOL)arg3 ;
+(id)applyHSLTransform:(id)arg1 toColor:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(id)initWithType:(int)arg1 ;
@end

