/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKScribbleInteractionElementSource.h>
#import <libobjc.A.dylib/PKScribbleInteractionDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIView, _PKFakeTapToFocusInfo, NSUUID, UITapGestureRecognizer, PKFakeUITapGestureForRequirements, NSString;

@interface PKFakeTapToFocusDelegate : NSObject <PKScribbleInteractionElementSource, PKScribbleInteractionDelegate, UIGestureRecognizerDelegate> {

	UIView* _view;
	_PKFakeTapToFocusInfo* _focusInfo;
	NSUUID* _elementID;
	UITapGestureRecognizer* _tapGesture;
	PKFakeUITapGestureForRequirements* _gestureForRequirements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldAttachForView:(id)arg1 ;
+(id)_infoInProcess;
+(BOOL)isPossibleForView:(id)arg1 focusInfo:(id)arg2 ;
+(id)_tapGestureForView:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg1 didTargetElement:(id)arg2 forTouches:(id)arg3 event:(id)arg4 ;
-(BOOL)_scribbleInteraction:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2 ;
-(void)_scribbleInteraction:(id)arg1 focusElement:(id)arg2 initialFocusSelectionReferencePoint:(CGPoint)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_scribbleInteraction:(id)arg1 focusWillTransformElement:(id)arg2 ;
-(id)initWithView:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg1 requestElementsInRect:(CGRect)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_scribbleInteractionIsEnabled:(id)arg1 ;
-(CGRect)_scribbleInteraction:(id)arg1 frameForElement:(id)arg2 ;
-(void)_focusWithFocusInfo:(id)arg1 ;
-(BOOL)_shouldFocusBeforeObservingWithFocusInfo:(id)arg1 ;
-(void)_waitForFirstResponderChangeWithFocusInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

