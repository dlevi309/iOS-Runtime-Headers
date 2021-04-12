/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CarPlay-Structs.h>
#import <libobjc.A.dylib/CPTemplateDelegate.h>
#import <libobjc.A.dylib/CPTemplateServiceClientInterface.h>

@protocol CPInterfaceControllerDelegate, CPTemplateProviding, CPWindowProviding;
@class CPTemplate, NSXPCConnection, NSMutableArray, CPWindow, NSArray, NSString;

@interface CPInterfaceController : NSObject <CPTemplateDelegate, CPTemplateServiceClientInterface> {

	BOOL _prefersDarkUserInterfaceStyle;
	id<CPInterfaceControllerDelegate> _delegate;
	CPTemplate* _rootTemplate;
	NSXPCConnection* _connection;
	id<CPTemplateProviding> _templateProvider;
	NSMutableArray* _templateStack;
	CPTemplate* _presentedTemplate;
	CPTemplate* _lastPresentedTemplate;
	CPWindow* _carWindow;
	id<CPWindowProviding> _windowProvider;

}

@property (nonatomic,retain) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) id<CPTemplateProviding> templateProvider;                       //@synthesize templateProvider=_templateProvider - In the implementation block
@property (nonatomic,retain) CPTemplate * rootTemplate;                                      //@synthesize rootTemplate=_rootTemplate - In the implementation block
@property (nonatomic,retain) NSMutableArray * templateStack;                                 //@synthesize templateStack=_templateStack - In the implementation block
@property (nonatomic,retain) CPTemplate * presentedTemplate;                                 //@synthesize presentedTemplate=_presentedTemplate - In the implementation block
@property (nonatomic,retain) CPTemplate * lastPresentedTemplate;                             //@synthesize lastPresentedTemplate=_lastPresentedTemplate - In the implementation block
@property (nonatomic,retain) CPWindow * carWindow;                                           //@synthesize carWindow=_carWindow - In the implementation block
@property (assign,nonatomic,__weak) id<CPWindowProviding> windowProvider;                    //@synthesize windowProvider=_windowProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CPInterfaceControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL prefersDarkUserInterfaceStyle;                             //@synthesize prefersDarkUserInterfaceStyle=_prefersDarkUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) CPTemplate * topTemplate; 
@property (nonatomic,readonly) NSArray * templates; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_whitelistClassesForBaseTemplateProvider:(id)arg1 ;
+(id)_templateProvidingInterface;
+(id)_templateClientInterface;
-(void)_invalidate;
-(id<CPInterfaceControllerDelegate>)delegate;
-(void)setDelegate:(id<CPInterfaceControllerDelegate>)arg1 ;
-(id)_init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)_connectionInvalidated;
-(void)_connectionInterrupted;
-(NSArray *)templates;
-(void)templateDidDismiss:(id)arg1 ;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(void)templateWillAppear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateDidAppear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateWillDisappear:(id)arg1 animated:(BOOL)arg2 ;
-(void)templateDidDisappear:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isCarPlayCanvasActive;
-(void)_sceneConnect:(id)arg1 ;
-(id<CPTemplateProviding>)templateProvider;
-(void)setRootTemplate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_pushTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(NSMutableArray *)templateStack;
-(void)setRootTemplate:(CPTemplate *)arg1 ;
-(void)_pushMapTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_pushGridTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_pushListTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)_pushSearchTemplate:(id)arg1 presentationStyle:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)popToRootTemplateAnimated:(BOOL)arg1 ;
-(void)popTemplateAnimated:(BOOL)arg1 ;
-(void)popToTemplate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_presentActionSheetTemplate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_presentAlertTemplate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_pushVoiceControlTemplate:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissTemplateAnimated:(BOOL)arg1 ;
-(id)_synchronousTemplateProvider;
-(void)_connectToListenerEndpoint:(id)arg1 ;
-(void)setTemplateProvider:(id<CPTemplateProviding>)arg1 ;
-(void)bannerTappedWithIdentifier:(id)arg1 ;
-(void)bannerDidAppearWithIdentifier:(id)arg1 ;
-(void)bannerDidDisappearWithIdentifier:(id)arg1 ;
-(void)clientExceededHierarchyDepthLimit;
-(void)templateIdentifierDidPop:(id)arg1 ;
-(void)templateIdentifierDidDismiss:(id)arg1 ;
-(void)updateInterestingLayoutGuideWithInsets:(UIEdgeInsets)arg1 ;
-(id)_activeMapTemplate;
-(void)setPrefersDarkUserInterfaceStyle:(BOOL)arg1 ;
-(void)pushTemplate:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentTemplate:(id)arg1 animated:(BOOL)arg2 ;
-(CPTemplate *)presentedTemplate;
-(CPTemplate *)topTemplate;
-(id)_listenerEndpointForSettings:(id)arg1 ;
-(BOOL)prefersDarkUserInterfaceStyle;
-(CPTemplate *)rootTemplate;
-(void)setTemplateStack:(NSMutableArray *)arg1 ;
-(void)setPresentedTemplate:(CPTemplate *)arg1 ;
-(CPTemplate *)lastPresentedTemplate;
-(void)setLastPresentedTemplate:(CPTemplate *)arg1 ;
-(CPWindow *)carWindow;
-(void)setCarWindow:(CPWindow *)arg1 ;
-(id<CPWindowProviding>)windowProvider;
-(void)setWindowProvider:(id<CPWindowProviding>)arg1 ;
@end

