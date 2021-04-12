/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIControl.h>

@class CKTextComponentViewControlTracker, CKTextComponentLayer, CKTextKitRenderer;

@interface CKTextComponentView : UIControl {

	CKTextComponentViewControlTracker* _controlTracker;

}

@property (nonatomic,readonly) CKTextComponentLayer * textLayer; 
@property (nonatomic,readonly) CKTextComponentViewControlTracker * controlTracker; 
@property (nonatomic,retain) CKTextKitRenderer * renderer; 
+(Class)layerClass;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)isAccessibilityElement;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(CKTextKitRenderer *)renderer;
-(void)setRenderer:(CKTextKitRenderer *)arg1 ;
-(id)accessibilityAttributedLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CKTextComponentLayer *)textLayer;
-(CKTextComponentViewControlTracker *)controlTracker;
@end

