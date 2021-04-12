/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/MFPEffect.h>

@interface MFPColorLUTEffect : MFPEffect {

	unsigned char mLutA[256];
	unsigned char mLutR[256];
	unsigned char mLutG[256];
	unsigned char mLutB[256];

}
+(id)GUID;
-(id)initWithLUTA:(unsigned char)arg1 LUTR:(unsigned char)arg2 LUTG:(unsigned char)arg3 LUTB:(unsigned char)arg4 ;
@end

