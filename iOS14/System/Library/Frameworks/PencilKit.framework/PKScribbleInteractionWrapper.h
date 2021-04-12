/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKScribbleInteractionWrapper.h>
@class UIView;


@protocol PKScribbleInteractionWrapper <NSObject>
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIView * interactionView; 
@property (nonatomic,readonly) id<UIInteraction> interaction; 
@optional
-(UIView *)interactionView;
-(BOOL)shouldDisableInputAssistant;
-(void)didTargetElement:(id)arg1 forTouches:(id)arg2 event:(id)arg3;
-(UIView *)view;
-(BOOL)isEnabled;

@required
-(BOOL)supportsShouldBegin;
-(BOOL)focusWillTransformElement:(id)arg1;
-(BOOL)isElementContainer;
-(BOOL)shouldBeginAtLocation:(CGPoint)arg1;
-(void)willBeginWritingInElement:(id)arg1;
-(BOOL)isElementFocused:(id)arg1;
-(void)didFinishWritingInElement:(id)arg1;
-(void)requestElementsInRect:(CGRect)arg1 completion:(/*^block*/id)arg2;
-(void)focusElement:(id)arg1 initialFocusSelectionReferencePoint:(CGPoint)arg2 completion:(/*^block*/id)arg3;
-(UIEdgeInsets*)hitToleranceInsetsWithDefaultInsets:(UIEdgeInsets)arg1 element:(id)arg2;
-(BOOL)beginSuppressingPlaceholderForElement:(id)arg1;
-(BOOL)supportsIsElementFocused;
-(void)endSuppressingPlaceholderForElement:(id)arg1;
-(id<UIInteraction>)interaction;
-(CGRect*)frameForElement:(id)arg1;

@end


@class UIView, PKScribbleInteraction, NSString;

@interface PKScribbleInteractionWrapper : NSObject <PKScribbleInteractionWrapper> {

	PKScribbleInteraction* _interaction;

}

@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIView * interactionView; 
@property (nonatomic,readonly) id<UIInteraction> interaction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)supportsShouldBegin;
-(BOOL)focusWillTransformElement:(id)arg1 ;
-(BOOL)isElementContainer;
-(BOOL)shouldBeginAtLocation:(CGPoint)arg1 ;
-(void)willBeginWritingInElement:(id)arg1 ;
-(BOOL)isElementFocused:(id)arg1 ;
-(void)didFinishWritingInElement:(id)arg1 ;
-(void)requestElementsInRect:(CGRect)arg1 completion:(/*^block*/id)arg2 ;
-(void)focusElement:(id)arg1 initialFocusSelectionReferencePoint:(CGPoint)arg2 completion:(/*^block*/id)arg3 ;
-(UIEdgeInsets)hitToleranceInsetsWithDefaultInsets:(UIEdgeInsets)arg1 element:(id)arg2 ;
-(UIView *)interactionView;
-(BOOL)beginSuppressingPlaceholderForElement:(id)arg1 ;
-(BOOL)supportsIsElementFocused;
-(void)endSuppressingPlaceholderForElement:(id)arg1 ;
-(BOOL)shouldDisableInputAssistant;
-(void)didTargetElement:(id)arg1 forTouches:(id)arg2 event:(id)arg3 ;
-(NSString *)description;
-(id<UIInteraction>)interaction;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(CGRect)frameForElement:(id)arg1 ;
-(id)initWithScribbleInteraction:(id)arg1 ;
@end

