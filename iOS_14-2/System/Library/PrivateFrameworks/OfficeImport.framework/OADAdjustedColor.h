/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>

@class OADColor;

@interface OADAdjustedColor : OADColor {

	OADColor* mBaseColor;
	int mAdjustmentType;
	unsigned char mAdjustmentParam;
	BOOL mInvert;
	BOOL mInvert128;
	BOOL mGray;

}
-(BOOL)gray;
-(BOOL)invert;
-(unsigned long long)hash;
-(int)adjustmentType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)baseColor;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(BOOL)arg4 invert128:(BOOL)arg5 gray:(BOOL)arg6 ;
-(unsigned char)adjustmentParam;
-(BOOL)invert128;
@end

