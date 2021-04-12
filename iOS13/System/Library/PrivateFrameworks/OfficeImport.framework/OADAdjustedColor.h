/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)invert;
-(int)adjustmentType;
-(id)baseColor;
-(id)initWithBaseColor:(id)arg1 adjustmentType:(int)arg2 adjustmentParam:(unsigned char)arg3 invert:(BOOL)arg4 invert128:(BOOL)arg5 gray:(BOOL)arg6 ;
-(BOOL)gray;
-(unsigned char)adjustmentParam;
-(BOOL)invert128;
@end

