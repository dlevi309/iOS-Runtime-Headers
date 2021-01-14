/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>

@interface OADRgbColor : OADColor {

	float mRed;
	float mGreen;
	float mBlue;

}
+(id)white;
+(id)black;
+(id)rgbColorWithTSUColor:(id)arg1 ;
+(id)rgbColorWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3 ;
+(id)rgbColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
+(id)rgbColorWithWhite:(float)arg1 ;
+(id)rgbColorWithWhiteByte:(float)arg1 ;
-(float)red;
-(float)blue;
-(BOOL)isWhite;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(unsigned long long)hash;
-(float)green;
-(BOOL)isBlack;
-(unsigned char)redByte;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3 ;
-(unsigned char)greenByte;
-(unsigned char)blueByte;
-(id)initWithWhite:(float)arg1 ;
-(id)initWithWhiteByte:(float)arg1 ;
-(id)rgbColorWithFraction:(float)arg1 ofRgbColor:(id)arg2 ;
@end

