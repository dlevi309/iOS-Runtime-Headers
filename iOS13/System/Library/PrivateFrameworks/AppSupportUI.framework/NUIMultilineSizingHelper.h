/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/


#import <AppSupportUI/AppSupportUI-Structs.h>
@class UIView;

@interface NUIMultilineSizingHelper : NSObject {

	UIView* _view;
	objc_super _view_super;
	double _preferredMaxLayoutWidth;
	struct {
		unsigned isContainerView : 1;
		unsigned determiningPreferredMaxLayoutWidth : 1;
		unsigned inSecondConstraintsPass : 1;
	}  _flags;

}
-(void)updateConstraints;
-(void)_prepareForFirstIntrinsicContentSizeCalculation;
-(void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(CGRect)arg1 ;
-(void)_setInSecondConstraintsPass:(BOOL)arg1 ;
-(void)_resetToBeginningOfDoublePass;
-(double)preferredMaxLayoutWidth;
-(id)initWithView:(id)arg1 class:(Class)arg2 ;
@end

