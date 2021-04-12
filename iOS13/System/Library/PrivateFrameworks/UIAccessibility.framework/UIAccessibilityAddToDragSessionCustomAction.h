/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIAccessibilityCustomAction.h>

@class UIView;

@interface UIAccessibilityAddToDragSessionCustomAction : UIAccessibilityCustomAction {

	CGPoint _pt;
	UIView* _view;

}
-(id)_accessibilityCustomActionIdentifier;
-(id)initWithPoint:(CGPoint)arg1 inSourceView:(id)arg2 ;
-(BOOL)_accessibilityInvokeAddToSession;
@end

