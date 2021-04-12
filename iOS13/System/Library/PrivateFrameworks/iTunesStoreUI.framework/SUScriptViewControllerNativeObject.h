/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <libobjc.A.dylib/SKUIPassbookLoaderDelegate.h>

@class SKUIPassbookLoader, NSString;

@interface SUScriptViewControllerNativeObject : SUScriptNativeObject <SKUIPassbookLoaderDelegate> {

	SKUIPassbookLoader* _passbookLoader;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)presentationViewControllerForPassbookLoader:(id)arg1 ;
-(void)passbookLoaderDidFinish:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(void)setScriptObject:(id)arg1 ;
-(void)_loadPassbookPassWithURL:(id)arg1 ;
-(void)_reloadVisibility;
-(void)_parentViewControllerChangeNotification:(id)arg1 ;
@end

