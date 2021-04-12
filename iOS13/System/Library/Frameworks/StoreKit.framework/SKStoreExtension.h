/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SKStoreExtensionServiceInterface.h>

@class NSString;

@interface SKStoreExtension : UIViewController <SKStoreExtensionServiceInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(id)clientInterface;
+(id)serviceInterface;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)shouldOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(void)presentRequestedViewControllerWithIdentifier:(id)arg1 ;
-(void)setupWithParameters:(id)arg1 ;
-(void)setTabIdentifier:(id)arg1 ;
-(void)setRequestedIdentifier:(id)arg1 ;
-(void)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
@end

