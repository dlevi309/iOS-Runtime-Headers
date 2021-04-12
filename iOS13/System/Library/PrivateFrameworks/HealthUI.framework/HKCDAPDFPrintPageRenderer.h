/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIPrintPageRenderer.h>

@interface HKCDAPDFPrintPageRenderer : UIPrintPageRenderer {

	CGRect _paperRectOverride;
	CGRect _printableRectOverride;

}
-(CGRect)printableRect;
-(CGRect)paperRect;
-(void)drawFooterForPageAtIndex:(long long)arg1 inRect:(CGRect)arg2 ;
-(id)initWithPaperRect:(CGRect)arg1 horizontalMargin:(double)arg2 verticalMargin:(double)arg3 ;
@end

