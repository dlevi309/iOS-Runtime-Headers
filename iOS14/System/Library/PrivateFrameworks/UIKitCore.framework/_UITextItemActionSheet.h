/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRotatingAlertControllerDelegate.h>

@class NSString, UIView, NSArray, _UIRotatingAlertController, UIWindow;

@interface _UITextItemActionSheet : NSObject <_UIRotatingAlertControllerDelegate> {

	NSString* _title;
	UIView* _view;
	CGRect _rect;
	NSArray* _ddActions;
	_UIRotatingAlertController* _alertController;
	UIWindow* _alertWindow;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)present;
-(id)initWithTitle:(id)arg1 datadetectorActions:(id)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(BOOL)_hasAlertActions;
-(id)_alertActionsWithController:(id)arg1 ;
-(id)hostViewForSheet:(id)arg1 ;
-(CGRect)presentationRectInHostViewForSheet:(id)arg1 ;
-(CGRect)initialPresentationRectInHostViewForSheet:(id)arg1 ;
-(void)dealloc;
@end

