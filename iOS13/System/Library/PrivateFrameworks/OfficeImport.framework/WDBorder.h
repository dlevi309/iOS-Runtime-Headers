/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(unsigned char)width;
-(id)color;
-(void)setWidth:(unsigned char)arg1 ;
-(void)setColor:(id)arg1 ;
-(BOOL)frame;
-(BOOL)shadow;
-(unsigned char)space;
-(void)setFrame:(BOOL)arg1 ;
-(void)setShadow:(BOOL)arg1 ;
-(void)setBorder:(id)arg1 ;
-(void)setSpace:(unsigned char)arg1 ;
-(BOOL)isEqualToBorder:(id)arg1 ;
-(void)setNullBorder;
-(void)setSingleBlackBorder;
@end

