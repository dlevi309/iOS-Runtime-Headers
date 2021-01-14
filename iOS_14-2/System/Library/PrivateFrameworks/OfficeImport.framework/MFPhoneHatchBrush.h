/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

