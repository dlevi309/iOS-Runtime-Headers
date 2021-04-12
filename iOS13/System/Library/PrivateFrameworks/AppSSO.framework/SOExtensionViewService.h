/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSO.framework/AppSSO
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SORemoteExtensionViewProtocol.h>

@class SORemoteExtensionContext, NSString;

@interface SOExtensionViewService : UIViewController <SORemoteExtensionViewProtocol> {

	SORemoteExtensionContext* _extensionContext;

}

@property (__weak) SORemoteExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(id)exportedInterface;
-(void)loadView;
-(SORemoteExtensionContext *)extensionContext;
-(void)setExtensionContext:(SORemoteExtensionContext *)arg1 ;
-(id)remoteViewControllerInterface;
-(void)connectToContextWithSessionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_connectChildView;
@end

