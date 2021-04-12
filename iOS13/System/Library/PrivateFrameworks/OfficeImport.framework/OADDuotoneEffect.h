/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color1;
-(void)setColor1:(id)arg1 ;
-(void)setColor2:(id)arg1 ;
-(id)color2;
-(void)setTransferMode1:(int)arg1 ;
-(void)setTransferMode2:(int)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(int)transferMode1;
-(int)transferMode2;
@end

