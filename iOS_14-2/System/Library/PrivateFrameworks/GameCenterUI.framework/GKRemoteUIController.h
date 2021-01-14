/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <libobjc.A.dylib/RUILoaderDelegate.h>
#import <libobjc.A.dylib/RUIObjectModelDelegate.h>
#import <libobjc.A.dylib/GKRemoteUIAuxiliaryViewDelegate.h>

@class NSString, NSError, NSMutableArray, UINavigationController, NSArray, RUILoader, NSURL, NSDictionary, NSData, GKLocalPlayer;

@interface GKRemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, GKRemoteUIAuxiliaryViewDelegate> {

	BOOL _loading;
	BOOL _shouldApplyGameCenterTheme;
	BOOL _previousUseCustomBackButtonActionValue;
	BOOL _loadingInitialUI;
	BOOL _complete;
	BOOL _isServerAuthenticated;
	int _layoutStyle;
	NSString* _appleID;
	/*^block*/id _completionHandler;
	NSError* _error;
	NSMutableArray* _objectModels;
	UINavigationController* _navigationController;
	NSArray* _staticViewControllers;
	RUILoader* _loader;
	GKRemoteUIController* _presentedRemoteUIController;
	NSURL* _url;
	/*^block*/id _loadHandler;
	NSDictionary* _authInfo;
	NSString* _authToken;
	NSData* _pushToken;
	NSString* _altDSID;
	NSString* _playerID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _alias;
	GKLocalPlayer* _playerForRemoteUI;

}

@property (nonatomic,retain) NSMutableArray * objectModels;                                            //@synthesize objectModels=_objectModels - In the implementation block
@property (assign,nonatomic,__weak) UINavigationController * navigationController;                     //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) NSArray * staticViewControllers;                                          //@synthesize staticViewControllers=_staticViewControllers - In the implementation block
@property (nonatomic,retain) RUILoader * loader;                                                       //@synthesize loader=_loader - In the implementation block
@property (nonatomic,retain) GKRemoteUIController * presentedRemoteUIController;                       //@synthesize presentedRemoteUIController=_presentedRemoteUIController - In the implementation block
@property (assign,nonatomic) BOOL previousUseCustomBackButtonActionValue;                              //@synthesize previousUseCustomBackButtonActionValue=_previousUseCustomBackButtonActionValue - In the implementation block
@property (nonatomic,retain) NSError * error;                                                          //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL loading;                                                             //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL loadingInitialUI;                                                    //@synthesize loadingInitialUI=_loadingInitialUI - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) id loadHandler;                                                             //@synthesize loadHandler=_loadHandler - In the implementation block
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,nonatomic) int layoutStyle;                                                          //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) BOOL complete;                                                            //@synthesize complete=_complete - In the implementation block
@property (nonatomic,retain) NSDictionary * authInfo;                                                  //@synthesize authInfo=_authInfo - In the implementation block
@property (nonatomic,readonly) NSString * bagKey; 
@property (nonatomic,readonly) NSURL * fallbackURL; 
@property (nonatomic,retain) NSString * authToken;                                                     //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) NSData * pushToken;                                                       //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) NSString * appleID;                                                       //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,retain) NSString * altDSID;                                                       //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSString * playerID;                                                      //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * firstName;                                                     //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                                                      //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSString * alias;                                                         //@synthesize alias=_alias - In the implementation block
@property (assign,nonatomic) BOOL isServerAuthenticated;                                               //@synthesize isServerAuthenticated=_isServerAuthenticated - In the implementation block
@property (nonatomic,retain) GKLocalPlayer * playerForRemoteUI;                                        //@synthesize playerForRemoteUI=_playerForRemoteUI - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyGameCenterTheme;                                          //@synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)remoteUIController;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setPushToken:(NSData *)arg1 ;
-(NSString *)playerID;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)setLayoutStyle:(int)arg1 ;
-(NSURL *)fallbackURL;
-(NSString *)authToken;
-(NSString *)alias;
-(void)setLoading:(BOOL)arg1 ;
-(NSData *)pushToken;
-(void)setLastName:(NSString *)arg1 ;
-(RUILoader *)loader;
-(id)init;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(id)viewControllers;
-(void)setCompletionHandler:(id)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(id)loadHandler;
-(void)setLoadHandler:(id)arg1 ;
-(int)layoutStyle;
-(void)setLoader:(RUILoader *)arg1 ;
-(void)setObjectModels:(NSMutableArray *)arg1 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned long long)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(id)viewControllerForAlertPresentation;
-(void)objectModel:(id)arg1 elementDidChange:(id)arg2 ;
-(BOOL)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2 ;
-(void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(BOOL)arg3 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3 ;
-(id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3 ;
-(void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3 ;
-(void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3 ;
-(void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3 ;
-(Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2 ;
-(Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(id)completionHandler;
-(void)setError:(NSError *)arg1 ;
-(NSURL *)url;
-(NSError *)error;
-(void)setPreviousUseCustomBackButtonActionValue:(BOOL)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(NSString *)altDSID;
-(void)setAuthInfo:(NSDictionary *)arg1 ;
-(BOOL)loading;
-(void)finishLoadingWithError:(id)arg1 ;
-(BOOL)complete;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)configureFromBagKey:(id)arg1 player:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)loadInitialRemoteUIForPlayer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setPlayerForRemoteUI:(GKLocalPlayer *)arg1 ;
-(void)fireCompletionHandler;
-(BOOL)shouldApplyGameCenterTheme;
-(void)setShouldApplyGameCenterTheme:(BOOL)arg1 ;
-(void)presentInParentNavigationController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)loadInitialRemoteUIWithHandler:(/*^block*/id)arg1 ;
-(int)preferredLayoutStyle;
-(void)updateAccountAndMarkComplete:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)postBodyForInitialLoad;
-(void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)setComplete:(BOOL)arg1 ;
-(void)updatePostbackDictionary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(NSDictionary *)authInfo;
-(void)setAlias:(NSString *)arg1 ;
-(void)pushObjectModel:(id)arg1 animated:(BOOL)arg2 ;
-(GKLocalPlayer *)playerForRemoteUI;
-(BOOL)isServerAuthenticated;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(void)setPlayerID:(NSString *)arg1 ;
-(id)initWithObjectModel:(id)arg1 ;
-(BOOL)previousUseCustomBackButtonActionValue;
-(void)setStaticViewControllers:(NSArray *)arg1 ;
-(NSMutableArray *)objectModels;
-(void)setLoadingInitialUI:(BOOL)arg1 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 ;
-(void)loadURL:(id)arg1 forPlayer:(id)arg2 postBody:(id)arg3 ;
-(void)loadURL:(id)arg1 postData:(id)arg2 ;
-(void)auxiliaryView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3 ;
-(void)auxiliaryView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
-(void)objectModelDidChange:(id)arg1 ;
-(id)postbackDataForDictionary:(id)arg1 ;
-(void)loadURL:(id)arg1 forPlayer:(id)arg2 postData:(id)arg3 ;
-(void)didLoadURL:(id)arg1 data:(id)arg2 error:(id)arg3 ;
-(void)setIsServerAuthenticated:(BOOL)arg1 ;
-(NSArray *)staticViewControllers;
-(long long)indexOfVisiblePage;
-(NSString *)bagKey;
-(UINavigationController *)navigationController;
-(GKRemoteUIController *)presentedRemoteUIController;
-(void)setPresentedRemoteUIController:(GKRemoteUIController *)arg1 ;
-(void)replaceObjectModelAtIndex:(unsigned long long)arg1 withObjectObjectModel:(id)arg2 ;
-(void)popObjectModelAnimated:(BOOL)arg1 ;
-(void)presentObjectModel:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)loadingInitialUI;
-(void)performAction:(unsigned long long)arg1 withObjectModel:(id)arg2 ;
-(id)addThemeInfoToAttributes:(id)arg1 ;
@end

