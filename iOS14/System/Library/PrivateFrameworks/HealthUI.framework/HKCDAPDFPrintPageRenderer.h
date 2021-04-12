/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIPrintPageRenderer.h>

@interface HKCDAPDFPrintPageRenderer : UIPrintPageRenderer {

	CGRect _paperRectOverride;
	CGRect _printableRectOverride;

}
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(CGRect)paperRect;
-(CGRect)printableRect;
-(id)initWithPaperRect:(CGRect)arg1 horizontalMargin:(double)arg2 verticalMargin:(double)arg3 ;
@end

