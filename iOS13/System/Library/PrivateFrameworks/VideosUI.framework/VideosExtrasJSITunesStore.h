/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <ITMLKit/IKJSITunesStore.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegatePrivate.h>
#import <VideosUI/VideosExtrasJSITunesStore.h>

@protocol VideosExtrasJSITunesStore <JSExport>
@optional
-(void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2 __JS_EXPORT_AS__loadStoreURL:(id)arg3;

@required
-(void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2;

@end

#import <libobjc.A.dylib/IKJSITunesStore.h>

@class UIViewController, NSString;

@interface VideosExtrasJSITunesStore : IKJSITunesStore <SKStoreProductViewControllerDelegatePrivate, VideosExtrasJSITunesStore, IKJSITunesStore> {

	UIViewController* _formPresentationViewController;

}

@property (assign,nonatomic,__weak) UIViewController * formPresentationViewController;              //@synthesize formPresentationViewController=_formPresentationViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFormPresentationViewController:(UIViewController *)arg1 ;
-(UIViewController *)formPresentationViewController;
-(void)loadStoreURL:(id)arg1 playOnLaunch:(id)arg2 ;
@end

