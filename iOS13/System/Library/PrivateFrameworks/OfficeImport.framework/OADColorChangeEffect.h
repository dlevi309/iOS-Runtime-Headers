/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFromColor:(id)arg1 ;
-(void)setToColor:(id)arg1 ;
-(id)fromColor;
-(id)toColor;
-(void)setStyleColor:(id)arg1 ;
@end

