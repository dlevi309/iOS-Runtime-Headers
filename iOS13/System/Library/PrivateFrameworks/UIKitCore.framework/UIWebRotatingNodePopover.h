/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@protocol UIWebRotatingNodePopoverDelegate;
@class DOMNode, UIPopoverController, NSString;

@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate> {

	BOOL _isRotating;
	DOMNode* _node;
	CGPoint _presentationPoint;
	UIPopoverController* _popoverController;
	id<UIWebRotatingNodePopoverDelegate> _dismissDelegate;

}

@property (nonatomic,retain) DOMNode * node;                                                    //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) CGPoint presentationPoint;                                         //@synthesize presentationPoint=_presentationPoint - In the implementation block
@property (nonatomic,retain) UIPopoverController * popoverController;                           //@synthesize popoverController=_popoverController - In the implementation block
@property (assign,nonatomic) id<UIWebRotatingNodePopoverDelegate> dismissDelegate;              //@synthesize dismissDelegate=_dismissDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(DOMNode *)node;
-(void)setNode:(DOMNode *)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(UIPopoverController *)popoverController;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
-(void)setPopoverController:(UIPopoverController *)arg1 ;
-(id)initWithDOMNode:(id)arg1 ;
-(void)presentPopoverAnimated:(BOOL)arg1 ;
-(void)setDismissDelegate:(id<UIWebRotatingNodePopoverDelegate>)arg1 ;
-(unsigned long long)popoverArrowDirections;
-(void)setPresentationPoint:(CGPoint)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(CGPoint)presentationPoint;
-(id<UIWebRotatingNodePopoverDelegate>)dismissDelegate;
@end

