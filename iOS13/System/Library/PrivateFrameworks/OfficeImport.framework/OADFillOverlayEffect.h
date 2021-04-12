/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADEffect.h>

@class OADFill;

@interface OADFillOverlayEffect : OADEffect {

	int mBlendMode;
	OADFill* mFill;

}
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fill;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
-(void)setFill:(id)arg1 ;
@end

