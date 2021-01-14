/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect {

	OADColor* mFromColor;
	OADColor* mToColor;

}
-(id)init;
-(unsigned long long)hash;
-(id)toColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)fromColor;
-(void)setFromColor:(id)arg1 ;
-(void)setToColor:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
@end

