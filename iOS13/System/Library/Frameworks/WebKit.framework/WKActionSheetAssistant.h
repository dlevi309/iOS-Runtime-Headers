/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKActionSheetDelegate.h>
#import <libobjc.A.dylib/DDDetectionControllerInteractionDelegate.h>

@class NSString;

@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate> {

	WeakObjCPtr<id<WKActionSheetAssistantDelegate> > _delegate;
	RetainPtr<WKActionSheet>* _interactionSheet;
	RetainPtr<_WKActivatedElementInfo>* _elementInfo;
	Optional<WebKit::InteractionInformationAtPosition>* _positionInformation;
	WeakObjCPtr<UIView> _view;
	BOOL _needsLinkIndicator;
	BOOL _isPresentingDDUserInterface;
	BOOL _hasPendingActionSheet;

}

@property (assign,nonatomic,__weak) id<WKActionSheetAssistantDelegate> delegate; 
@property (assign,nonatomic) BOOL needsLinkIndicator;                                         //@synthesize needsLinkIndicator=_needsLinkIndicator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<WKActionSheetAssistantDelegate>)delegate;
-(void)setDelegate:(id<WKActionSheetAssistantDelegate>)arg1 ;
-(id)initWithView:(id)arg1 ;
-(BOOL)presentSheet;
-(id)superviewForSheet;
-(CGRect)_presentationRectForSheetGivenPoint:(CGPoint)arg1 inHostView:(id)arg2 ;
-(CGRect)presentationRectForIndicatedElement;
-(CGRect)presentationRectForElementUsingClosestIndicatedRect;
-(CGRect)initialPresentationRectInHostViewForSheet;
-(id)hostViewForSheet;
-(void)updateSheetPosition;
-(void)updatePositionInformation;
-(void)cleanupSheet;
-(BOOL)synchronouslyRetrievePositionInformation;
-(RetainPtr<NSArray<_WKElementAction *> >*)defaultActionsForImageSheet:(id)arg1 ;
-(void)_createSheetWithElementActions:(id)arg1 defaultTitle:(id)arg2 showLinkTitle:(BOOL)arg3 ;
-(long long)_presentationStyleForPositionInfo:(const InteractionInformationAtPosition*)arg1 elementInfo:(id)arg2 ;
-(BOOL)_appendAppLinkOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3 ;
-(void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3 ;
-(RetainPtr<NSArray<_WKElementAction *> >*)defaultActionsForLinkSheet:(id)arg1 ;
-(id)_elementActionForDDAction:(id)arg1 ;
-(CGRect)presentationRectInHostViewForSheet;
-(BOOL)isShowingSheet;
-(void)interactionDidStartWithPositionInformation:(const InteractionInformationAtPosition*)arg1 ;
-(id)currentAvailableActionTitles;
-(Optional<WebKit::InteractionInformationAtPosition>*)currentPositionInformation;
-(void)showImageSheet;
-(BOOL)needsLinkIndicator;
-(void)showLinkSheet;
-(void)showDataDetectorsSheet;
-(void)setNeedsLinkIndicator:(BOOL)arg1 ;
@end

