/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WKWebProcessPlugIn.h>

@class NSMapTable, WKWebProcessPlugInController, NSArray, WBSSearchProvider, NSString;

@interface WBSWebProcessPlugIn : NSObject <WKWebProcessPlugIn> {

	NSMapTable* _browserContextControllersToWebProcessPlugInPageControllers;
	WKWebProcessPlugInController* _plugInController;

}

@property (nonatomic,readonly) WKWebProcessPlugInController * plugInController;                          //@synthesize plugInController=_plugInController - In the implementation block
@property (nonatomic,readonly) NSArray * searchEnginesForRedirectToSafeSearch; 
@property (nonatomic,readonly) WBSSearchProvider * defaultSearchProvider; 
@property (getter=isParsecABTestingEnabled,nonatomic,readonly) BOOL parsecABTestingEnabled; 
@property (nonatomic,readonly) unsigned long long parsecABGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webProcessPlugIn:(id)arg1 initializeWithObject:(id)arg2 ;
-(void)webProcessPlugIn:(id)arg1 didCreateBrowserContextController:(id)arg2 ;
-(void)webProcessPlugIn:(id)arg1 willDestroyBrowserContextController:(id)arg2 ;
-(void)didCreatePageController:(id)arg1 forBrowserContextController:(id)arg2 ;
-(void)willDestroyPageController:(id)arg1 forBrowserContextController:(id)arg2 ;
-(id)pageControllerWithBrowserContextController:(id)arg1 ;
-(WKWebProcessPlugInController *)plugInController;
-(WBSSearchProvider *)defaultSearchProvider;
-(NSArray *)searchEnginesForRedirectToSafeSearch;
-(BOOL)isParsecABTestingEnabled;
-(unsigned long long)parsecABGroupIdentifier;
@end

