/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIAlertController.h>

@protocol WKActionSheetDelegate;
@interface WKActionSheet : UIAlertController {

	id<WKActionSheetDelegate> _sheetDelegate;
	unsigned long long _arrowDirections;
	BOOL _isRotating;
	BOOL _readyToPresentAfterRotation;
	long long _currentPresentationStyle;
	RetainPtr<UIViewController>* _currentPresentingViewController;
	RetainPtr<UIViewController>* _presentedViewControllerWhileRotating;
	RetainPtr<id<UIPopoverPresentationControllerDelegate> >* _popoverPresentationControllerDelegateWhileRotating;

}

@property (assign,nonatomic) id<WKActionSheetDelegate> sheetDelegate;              //@synthesize sheetDelegate=_sheetDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long arrowDirections;                   //@synthesize arrowDirections=_arrowDirections - In the implementation block
-(void)_cleanup;
-(id)init;
-(void)didRotate;
-(BOOL)presentSheetFromRect:(CGRect)arg1 ;
-(void)_didRotateAndLayout;
-(unsigned long long)arrowDirections;
-(void)setArrowDirections:(unsigned long long)arg1 ;
-(void)willRotate;
-(BOOL)presentSheet:(long long)arg1 ;
-(CGRect)_presentationRectForStyle:(long long)arg1 ;
-(void)doneWithSheet:(BOOL)arg1 ;
-(void)setSheetDelegate:(id<WKActionSheetDelegate>)arg1 ;
-(void)updateSheetPosition;
-(id<WKActionSheetDelegate>)sheetDelegate;
-(void)dealloc;
@end

