/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

