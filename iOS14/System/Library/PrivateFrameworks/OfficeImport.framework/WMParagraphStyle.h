/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/WMStyle.h>

@class WDStyle;

@interface WMParagraphStyle : WMStyle {

	WDStyle* _baseStyle;
	BOOL _isInTextFrame;

}
+(BOOL)isShadingNull:(id)arg1 ;
-(void)addParagraphPropertiesFromStyle:(id)arg1 ;
-(void)addParagraphProperties:(id)arg1 ;
-(void)addParagraphStyleCharacterProperties:(id)arg1 ;
-(BOOL)isRTLWithOverridesFromProperties:(id)arg1 ;
-(id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1 ;
-(id)trailingMarginPropertyNameWithOverridesFromProperties:(id)arg1 ;
-(void)mapBorders:(id)arg1 ;
-(id)initWithWDStyle:(id)arg1 isInTextFrame:(BOOL)arg2 ;
-(void)addParagraphPropertiesFromStyle;
@end

