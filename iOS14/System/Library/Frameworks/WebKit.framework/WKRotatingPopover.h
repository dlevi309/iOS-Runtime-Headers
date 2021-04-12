/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol WKRotatingPopoverDelegate;
@class WKContentView, UIPopoverController, NSString;

@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate> {

	WKContentView* _view;
	BOOL _isRotating;
	BOOL _isPreservingFocus;
	CGPoint _presentationPoint;
	RetainPtr<UIPopoverController>* _popoverController;
	id<WKRotatingPopoverDelegate> _dismissionDelegate;

}

@property (nonatomic,readonly) WKContentView * view;                                        //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) CGPoint presentationPoint;                                     //@synthesize presentationPoint=_presentationPoint - In the implementation block
@property (nonatomic,retain) UIPopoverController * popoverController; 
@property (assign,nonatomic) id<WKRotatingPopoverDelegate> dismissionDelegate;              //@synthesize dismissionDelegate=_dismissionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didRotate:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(WKContentView *)view;
-(void)presentPopoverAnimated:(BOOL)arg1 ;
-(unsigned long long)popoverArrowDirections;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(void)setPresentationPoint:(CGPoint)arg1 ;
-(CGPoint)presentationPoint;
-(void)willRotate:(id)arg1 ;
-(UIPopoverController *)popoverController;
-(id)initWithView:(id)arg1 ;
-(void)setDismissionDelegate:(id<WKRotatingPopoverDelegate>)arg1 ;
-(id<WKRotatingPopoverDelegate>)dismissionDelegate;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)dealloc;
@end

