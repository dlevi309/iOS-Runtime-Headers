/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/MFPhoneBrush.h>

@class MFPhoneBitmap;

@interface MFPhonePatternBrush : MFPhoneBrush {

	MFPhoneBitmap* m_pattern;
	BOOL m_usePaletteForBilevel;

}
+(id)patternBrushWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2 ;
-(void)fillPath:(id)arg1 in_path:(id)arg2 ;
-(id)initWithBitmap:(id)arg1 usePaletteForBilevel:(BOOL)arg2 ;
@end

