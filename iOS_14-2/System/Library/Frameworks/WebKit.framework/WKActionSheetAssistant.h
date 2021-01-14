/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKActionSheetDelegate.h>
#import <libobjc.A.dylib/DDDetectionControllerInteractionDelegate.h>
#import <UIKit/UIContextMenuInteractionDelegate.h>

@class NSString;

@interface WKActionSheetAssistant : NSObject <WKActionSheetDelegate, DDDetectionControllerInteractionDelegate, UIContextMenuInteractionDelegate> {

	WeakObjCPtr<id<WKActionSheetAssistantDelegate> > _delegate;
	RetainPtr<WKActionSheet>* _interactionSheet;
	RetainPtr<_WKActivatedElementInfo>* _elementInfo;
	Optional<WebKit::InteractionInformationAtPosition>* _positionInformation;
	RetainPtr<UIContextMenuInteraction>* _dataDetectorContextMenuInteraction;
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
-(id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(CGPoint)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2 ;
-(id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2 ;
-(CGRect)presentationRectForElementUsingClosestIndicatedRect;
-(void)setNeedsLinkIndicator:(BOOL)arg1 ;
-(id<WKActionSheetAssistantDelegate>)delegate;
-(void)handleElementActionWithType:(long long)arg1 element:(id)arg2 needsInteraction:(BOOL)arg3 ;
-(id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2 ;
-(id)hostViewForSheet;
-(void)updatePositionInformation;
-(long long)_presentationStyleForPositionInfo:(const InteractionInformationAtPosition*)arg1 elementInfo:(id)arg2 ;
-(RetainPtr<NSArray<_WKElementAction *> >*)defaultActionsForImageSheet:(id)arg1 ;
-(void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3 ;
-(void)showDataDetectorsUIForPositionInformation:(const InteractionInformationAtPosition*)arg1 ;
-(BOOL)presentSheet;
-(void)setDelegate:(id<WKActionSheetAssistantDelegate>)arg1 ;
-(void)showImageSheet;
-(CGRect)_presentationRectForSheetGivenPoint:(CGPoint)arg1 inHostView:(id)arg2 ;
-(void)cleanupSheet;
-(CGRect)initialPresentationRectInHostViewForSheet;
-(BOOL)synchronouslyRetrievePositionInformation;
-(id)suggestedActionsForContextMenuWithPositionInformation:(const InteractionInformationAtPosition*)arg1 ;
-(BOOL)_appendAppLinkOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3 ;
-(void)_createSheetWithElementActions:(id)arg1 defaultTitle:(id)arg2 showLinkTitle:(BOOL)arg3 ;
-(void)interactionDidStartWithPositionInformation:(const InteractionInformationAtPosition*)arg1 ;
-(RetainPtr<NSArray<_WKElementAction *> >*)defaultActionsForLinkSheet:(id)arg1 ;
-(void)removeContextMenuInteraction;
-(void)_appendOpenActionsForURL:(id)arg1 actions:(id)arg2 elementInfo:(id)arg3 ;
-(void)updateSheetPosition;
-(BOOL)hasContextMenuInteraction;
-(id)currentAvailableActionTitles;
-(id)superviewForSheet;
-(void)showLinkSheet;
-(id)initWithView:(id)arg1 ;
-(Optional<WebKit::InteractionInformationAtPosition>*)currentPositionInformation;
-(BOOL)isShowingSheet;
-(BOOL)needsLinkIndicator;
-(id)_elementActionForDDAction:(id)arg1 ;
-(CGRect)presentationRectForIndicatedElement;
-(void)ensureContextMenuInteraction;
-(void)dealloc;
-(CGRect)presentationRectInHostViewForSheet;
@end

