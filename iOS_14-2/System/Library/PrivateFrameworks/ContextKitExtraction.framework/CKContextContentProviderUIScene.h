/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContextKitExtraction.framework/ContextKitExtraction
*/

#import <ContextKitExtraction/CKContextContentProvider.h>
#import <libobjc.A.dylib/_UISceneComponentProviding.h>

@class UIScene, UIButton, NSTimer, NSString;

@interface CKContextContentProviderUIScene : CKContextContentProvider <_UISceneComponentProviding> {

	UIButton* _debugButton;
	BOOL _allowDebugControls;
	NSTimer* _toolInstallationTimer;
	UIScene* __scene;

}

@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize _scene=__scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)_isRelevantForExtractionWithView:(id)arg1 ;
+(void)_donateContentsOfWindow:(id)arg1 usingExecutor:(id)arg2 ;
+(id)_blocksFromText:(id)arg1 ;
+(void)extractFromScene:(id)arg1 usingExecutor:(id)arg2 ;
+(id)_descendantsRelevantForContentExtractionFromView:(id)arg1 ;
+(id)_handleWKWebView:(id)arg1 withExecutor:(id)arg2 ;
+(BOOL)_isSensitiveTextContentType:(id)arg1 ;
+(id)_handlePDFView:(id)arg1 withExecutor:(id)arg2 ;
+(unsigned char)_controlCodeForExecutor:(id)arg1 ;
+(void)_donateText:(id)arg1 withDebugText:(id)arg2 debugUrlString:(id)arg3 usingContextFromExecutor:(id)arg4 ;
+(id)_bestContentStringForWebViewContentString:(id)arg1 andTitle:(id)arg2 ;
+(id)_bestVisibleStringForView:(id)arg1 usingExecutor:(id)arg2 ;
+(BOOL)_textBlockLooksLikeAListWithText:(id)arg1 ;
-(UIScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(id)_descendantsRelevantForDebugControls:(id)arg1 ;
-(void)_didSelectDebugControl:(id)arg1 ;
-(void)_setUpDebuggingControlsIfPossibleAfterDelay:(double)arg1 ;
-(BOOL)_shouldInstallDebugControls;
-(void)_installDebuggingControlsIfApplicable;
-(void)_sceneWillInvalidate:(id)arg1 ;
-(BOOL)_determineIfDebuggingControlsShouldBeAllowed;
-(id)_containerViewForDebugButton;
-(void)_installDebuggingButton;
-(void)extractUsingExecutor:(id)arg1 ;
@end

