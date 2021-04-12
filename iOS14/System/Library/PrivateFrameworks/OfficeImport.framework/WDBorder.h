/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OITSUColor;

@interface WDBorder : NSObject <NSCopying> {

	int mStyle;
	OITSUColor* mColor;
	unsigned char mWidth;
	unsigned char mSpace;
	BOOL mShadow;
	BOOL mFrame;

}
-(unsigned char)space;
-(BOOL)shadow;
-(unsigned char)width;
-(id)init;
-(id)color;
-(void)setWidth:(unsigned char)arg1 ;
-(BOOL)frame;
-(id)description;
-(void)setFrame:(BOOL)arg1 ;
-(void)setColor:(id)arg1 ;
-(unsigned long long)hash;
-(void)setShadow:(BOOL)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)setBorder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSpace:(unsigned char)arg1 ;
-(BOOL)isEqualToBorder:(id)arg1 ;
-(void)setNullBorder;
-(void)setSingleBlackBorder;
@end

