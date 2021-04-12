/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIAccessibilityCustomAction.h>

@class UIView;

@interface UIAccessibilityAddToDragSessionCustomAction : UIAccessibilityCustomAction {

	CGPoint _pt;
	UIView* _view;

}
-(BOOL)_accessibilityInvokeAddToSession;
-(id)_accessibilityCustomActionIdentifier;
-(id)initWithPoint:(CGPoint)arg1 inSourceView:(id)arg2 ;
@end

