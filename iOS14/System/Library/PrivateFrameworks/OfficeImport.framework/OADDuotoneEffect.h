/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADBlipEffect.h>

@class OADColor;

@interface OADDuotoneEffect : OADBlipEffect {

	OADColor* mColor1;
	OADColor* mColor2;
	int mTransferMode1;
	int mTransferMode2;

}
-(id)init;
-(id)color1;
-(void)setColor1:(id)arg1 ;
-(id)color2;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setColor2:(id)arg1 ;
-(void)setTransferMode1:(int)arg1 ;
-(void)setTransferMode2:(int)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(int)transferMode1;
-(int)transferMode2;
@end

