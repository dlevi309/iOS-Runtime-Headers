/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

