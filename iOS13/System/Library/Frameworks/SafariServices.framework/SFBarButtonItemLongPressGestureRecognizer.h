/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <UIKitCore/UILongPressGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIBarButtonItem, NSString;

@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer <UIGestureRecognizerDelegate> {

	UIBarButtonItem* _barButtonItem;
	id _target;
	SEL _longPressAction;
	SEL _touchDownAction;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)gestureRecognizerTarget:(id)arg1 longPressAction:(SEL)arg2 touchDownAction:(SEL)arg3 attachedToBarButtonItem:(id)arg4 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)longPress:(id)arg1 ;
-(void)_updateMinimumPressDurationForContentSizeCategory:(id)arg1 ;
-(void)_invokeLongPressAction;
@end

