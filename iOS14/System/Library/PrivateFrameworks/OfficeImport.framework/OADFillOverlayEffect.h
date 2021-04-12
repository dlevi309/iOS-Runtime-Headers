/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADEffect.h>

@class OADFill;

@interface OADFillOverlayEffect : OADEffect {

	int mBlendMode;
	OADFill* mFill;

}
-(id)fill;
-(int)blendMode;
-(id)init;
-(id)description;
-(unsigned long long)hash;
-(void)setBlendMode:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setFill:(id)arg1 ;
@end

