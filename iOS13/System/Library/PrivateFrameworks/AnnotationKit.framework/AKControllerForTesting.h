/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKController.h>

@protocol AKControllerDelegateProtocol;
@class AKModelController, AKActionController, AKToolController, AKAttributeController, AKUndoController, AKMainEventHandler, UIView, AKLegacyDoodleController, AKSignatureModelController;

@interface AKControllerForTesting : AKController {

	id<AKControllerDelegateProtocol> _testingDelegate;
	AKModelController* _testingModelController;
	AKActionController* _testingActionController;
	AKToolController* _testingToolController;
	AKAttributeController* _testingAttributeController;
	AKUndoController* _testingUndoController;
	AKMainEventHandler* _testingMainEventHandler;
	UIView* _testingToolbarView;
	UIView* _testingOverlayView;
	AKLegacyDoodleController* _testingIntelligentSketchController;
	AKSignatureModelController* _testingSignatureModelController;

}

@property (retain) id<AKControllerDelegateProtocol> testingDelegate;                           //@synthesize testingDelegate=_testingDelegate - In the implementation block
@property (retain) AKModelController * testingModelController;                                 //@synthesize testingModelController=_testingModelController - In the implementation block
@property (retain) AKActionController * testingActionController;                               //@synthesize testingActionController=_testingActionController - In the implementation block
@property (retain) AKToolController * testingToolController;                                   //@synthesize testingToolController=_testingToolController - In the implementation block
@property (retain) AKAttributeController * testingAttributeController;                         //@synthesize testingAttributeController=_testingAttributeController - In the implementation block
@property (retain) AKUndoController * testingUndoController;                                   //@synthesize testingUndoController=_testingUndoController - In the implementation block
@property (retain) AKMainEventHandler * testingMainEventHandler;                               //@synthesize testingMainEventHandler=_testingMainEventHandler - In the implementation block
@property (retain) UIView * testingToolbarView;                                                //@synthesize testingToolbarView=_testingToolbarView - In the implementation block
@property (retain) UIView * testingOverlayView;                                                //@synthesize testingOverlayView=_testingOverlayView - In the implementation block
@property (retain) AKLegacyDoodleController * testingIntelligentSketchController;              //@synthesize testingIntelligentSketchController=_testingIntelligentSketchController - In the implementation block
@property (retain) AKSignatureModelController * testingSignatureModelController;               //@synthesize testingSignatureModelController=_testingSignatureModelController - In the implementation block
+(void)renderAnnotation:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)init;
-(id)delegate;
-(id)overlayView;
-(id)modelController;
-(id)toolbarView;
-(void)performActionForSender:(id)arg1 ;
-(id)actionController;
-(id)mainEventHandler;
-(id)attributeController;
-(id)toolController;
-(id)signatureModelController;
-(id)undoController;
-(BOOL)validateSender:(id)arg1 ;
-(id)legacyDoodleController;
-(void)updateOverlayViewAtIndex:(unsigned long long)arg1 ;
-(void)setOverlayShouldPixelate:(BOOL)arg1 ;
-(void)reloadVisibleToolbarItemIdentifiers;
-(id<AKControllerDelegateProtocol>)testingDelegate;
-(AKModelController *)testingModelController;
-(UIView *)testingToolbarView;
-(UIView *)testingOverlayView;
-(AKActionController *)testingActionController;
-(AKToolController *)testingToolController;
-(AKAttributeController *)testingAttributeController;
-(AKUndoController *)testingUndoController;
-(AKMainEventHandler *)testingMainEventHandler;
-(AKLegacyDoodleController *)testingIntelligentSketchController;
-(AKSignatureModelController *)testingSignatureModelController;
-(void)setTestingDelegate:(id<AKControllerDelegateProtocol>)arg1 ;
-(void)setTestingModelController:(AKModelController *)arg1 ;
-(void)setTestingActionController:(AKActionController *)arg1 ;
-(void)setTestingToolController:(AKToolController *)arg1 ;
-(void)setTestingAttributeController:(AKAttributeController *)arg1 ;
-(void)setTestingUndoController:(AKUndoController *)arg1 ;
-(void)setTestingMainEventHandler:(AKMainEventHandler *)arg1 ;
-(void)setTestingToolbarView:(UIView *)arg1 ;
-(void)setTestingOverlayView:(UIView *)arg1 ;
-(void)setTestingIntelligentSketchController:(AKLegacyDoodleController *)arg1 ;
-(void)setTestingSignatureModelController:(AKSignatureModelController *)arg1 ;
@end

