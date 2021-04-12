/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/MFPhoneBrush.h>

@class OITSUColor;

@interface MFPhoneHatchBrush : MFPhoneBrush {

	OITSUColor* m_colour;
	int m_style;

}
+(id)hatchBrushWithColour:(id)arg1 in_style:(int)arg2 ;
+(id)patternNameForHatchStyle:(int)arg1 ;
-(void)fillPath:(id)arg1 in_path:(id)arg2 ;
-(id)initWithColour:(id)arg1 in_style:(int)arg2 ;
@end

