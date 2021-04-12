/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKScribbleInteractionWrapper.h>

@class PKPencilTextInputElementInteraction, NSMutableDictionary, UIView, NSString;

@interface PKPencilTextInputElementInteractionWrapper : NSObject <PKScribbleInteractionWrapper> {

	PKPencilTextInputElementInteraction* _elementInteraction;
	NSMutableDictionary* _knownElementsByID;

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
-(NSString *)description;
-(id<UIInteraction>)interaction;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)arg1 ;
-(CGRect)frameForElement:(id)arg1 ;
-(id)initWithElementInteraction:(id)arg1 ;
@end

