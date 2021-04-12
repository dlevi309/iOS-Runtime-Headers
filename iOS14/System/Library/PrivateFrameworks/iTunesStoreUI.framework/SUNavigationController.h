/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/SUScriptNativeObject.h>

@class SUClientInterface, SUSection, NSString;

@interface SUNavigationController : UINavigationController <SUScriptNativeObject> {

	BOOL _canBeWeakScriptReference;
	SUClientInterface* _clientInterface;
	SUSection* _section;
	long long _storeBarStyle;
	BOOL _skLoading;

}

@property (assign,getter=isSkLoading,nonatomic) BOOL skLoading;                //@synthesize skLoading=_skLoading - In the implementation block
@property (nonatomic,retain) SUClientInterface * clientInterface;              //@synthesize clientInterface=_clientInterface - In the implementation block
@property (nonatomic,retain) SUSection * section;                              //@synthesize section=_section - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeChildViewController:(id)arg1 ;
-(void)setSection:(SUSection *)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(void)setViewControllers:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(SUSection *)section;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2 ;
-(id)initWithRootViewController:(id)arg1 ;
-(NSString *)description;
-(void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setToolbarHidden:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(void)setParentViewController:(id)arg1 ;
-(void)loadView;
-(SUClientInterface *)clientInterface;
-(id)moreListImage;
-(id)moreListSelectedImage;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setClientInterface:(SUClientInterface *)arg1 ;
-(void)setSkLoading:(BOOL)arg1 ;
-(BOOL)isSkLoading;
-(long long)ITunesStoreUIBarStyle;
-(void)_setStoreBarStyle:(long long)arg1 clientInterface:(id)arg2 ;
-(id)copyArchivableContext;
-(id)initWithSection:(id)arg1 rootViewController:(id)arg2 ;
-(void)restoreArchivableContext:(id)arg1 ;
-(id)_sectionForViewController:(id)arg1 ;
-(BOOL)clearsWeakScriptReferences;
-(void)_loadingDidChangeNotification:(id)arg1 ;
-(id)copyScriptViewController;
@end

