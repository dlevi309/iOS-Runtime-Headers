/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(SORemoteExtensionContext *)extensionContext;
-(id)exportedInterface;
-(void)_connectChildView;
-(id)remoteViewControllerInterface;
-(void)setExtensionContext:(SORemoteExtensionContext *)arg1 ;
-(void)connectToContextWithSessionID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadView;
@end

