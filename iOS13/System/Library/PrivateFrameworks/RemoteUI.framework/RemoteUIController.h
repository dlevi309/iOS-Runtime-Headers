/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>
#import <libobjc.A.dylib/RUIParserDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol RemoteUIControllerDelegate;
@class RUINavigationController, NSMutableArray, NSMutableDictionary, RUIPage, NSString, UIViewController, RUILoader, NSURLSessionConfiguration, RUIStyle, NSUUID, UINavigationController, NSArray;

@interface RemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, RUIParserDelegate, UINavigationControllerDelegate> {

	RUINavigationController* _modalNavigationController;
	NSMutableArray* _objectModels;
	NSMutableArray* _modalObjectModels;
	NSMutableDictionary* _elementChangeHandlers;
	RUIPage* _pageOriginatingLoad;
	NSString* _listeningForSMSIdentifier;
	NSString* _SMSAutoFillToken;
	BOOL _testMode;
	UIViewController* _hostViewController;
	RUILoader* _loader;
	NSString* _userAgentString;
	id<RemoteUIControllerDelegate> _delegate;
	/*^block*/id _loadCompletion;
	NSURLSessionConfiguration* _sessionConfiguration;
	RUIStyle* _style;
	NSUUID* _UUID;

}

@property (nonatomic,copy) NSUUID * UUID;                                                       //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * hostViewController;                      //@synthesize hostViewController=_hostViewController - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController; 
@property (nonatomic,retain) RUILoader * loader;                                                //@synthesize loader=_loader - In the implementation block
@property (nonatomic,copy) NSString * userAgentString;                                          //@synthesize userAgentString=_userAgentString - In the implementation block
@property (assign,nonatomic,__weak) id<RemoteUIControllerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id loadCompletion;                                                   //@synthesize loadCompletion=_loadCompletion - In the implementation block
@property (nonatomic,copy) NSURLSessionConfiguration * sessionConfiguration;                    //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (nonatomic,retain) RUIStyle * style;                                                  //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSArray * displayedPages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<RemoteUIControllerDelegate>)delegate;
-(void)setDelegate:(id<RemoteUIControllerDelegate>)arg1 ;
-(NSUUID *)UUID;
-(void)setUUID:(NSUUID *)arg1 ;
-(RUIStyle *)style;
-(void)setStyle:(RUIStyle *)arg1 ;
-(UINavigationController *)navigationController;
-(void)loadRequest:(id)arg1 ;
-(NSString *)userAgentString;
-(RUILoader *)loader;
-(void)removeHandlerForKey:(id)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(void)loadRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHostViewController:(UIViewController *)arg1 ;
-(UIViewController *)hostViewController;
-(id)dismissObjectModelsAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHandlerForElementName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)loadData:(id)arg1 baseURL:(id)arg2 ;
-(void)setLoader:(RUILoader *)arg1 ;
-(BOOL)_shouldAnimate;
-(NSURLSessionConfiguration *)sessionConfiguration;
-(id)viewControllerForAlertPresentation;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)loader:(id)arg1 willLoadRequest:(id)arg2 redirectResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)sessionConfigurationForLoader:(id)arg1 ;
-(void)loader:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 topActionSignal:(id)arg3 ;
-(void)loader:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)loader:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)objectModel:(id)arg1 didNavigateBackFromController:(id)arg2 withGesture:(BOOL)arg3 ;
-(NSArray *)displayedPages;
-(BOOL)objectModel:(id)arg1 shouldDisplayNamedElement:(id)arg2 page:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)objectModel:(id)arg1 willLoadLinkURL:(id)arg2 attributes:(id)arg3 ;
-(void)objectModel:(id)arg1 elementDidChange:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientationsForObjectModel:(id)arg1 page:(id)arg2 ;
-(void)_enableTestMode;
-(void)_stopListeningForSMSAutoFill;
-(void)setLoadCompletion:(id)arg1 ;
-(void)_loadURL:(id)arg1 fromObjectModel:(id)arg2 postBody:(id)arg3 ;
-(void)_loadURL:(id)arg1 postBody:(id)arg2 fromObjectModel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_objectModel:(id)arg1 receivedToken:(id)arg2 ;
-(void)_didRemoveObjectModel:(id)arg1 ;
-(void)_willPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(void)_removePreviousObjectModelsBackToIdentifier:(id)arg1 ;
-(void)_didPresentObjectModel:(id)arg1 modally:(BOOL)arg2 ;
-(id)_objectModelStack;
-(id)popObjectModelAnimated:(BOOL)arg1 stopListeningForHSATokens:(BOOL)arg2 ;
-(BOOL)_objectModelPageWantsHSATokens:(id)arg1 ;
-(void)pushObjectModel:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setHandlerWithKey:(id)arg1 forElementsMatching:(/*^block*/id)arg2 handler:(/*^block*/id)arg3 ;
-(id)setHandlerForElementsMatching:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 ;
-(id)loadCompletion;
-(void)refreshTopModelWithModel:(id)arg1 ;
-(void)_modalNavigationWasDismissed;
-(id)popObjectModelAnimated:(BOOL)arg1 ;
-(void)_replaceObjectModelWithObjectModel:(id)arg1 ;
-(void)_modalViewControllerWasPopped:(id)arg1 ;
-(void)_beginListeningForSMSAutoFill;
-(id)parser:(id)arg1 createPageWithName:(id)arg2 attributes:(id)arg3 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 ;
-(id)_objectModels;
-(id)_modalObjectModels;
-(void)setHandlerForButtonsMatching:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setHandlerForButtonName:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)startListeningForHSATokenAutoFill;
-(void)stopListeningForHSATokenAutoFill;
-(BOOL)isListeningForHSATokenAutoFill;
-(void)setUserAgentString:(NSString *)arg1 ;
-(void)setSessionConfiguration:(NSURLSessionConfiguration *)arg1 ;
@end

