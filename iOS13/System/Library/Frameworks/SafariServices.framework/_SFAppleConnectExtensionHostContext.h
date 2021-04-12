/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_SFAppleConnectExtensionHostProtocol.h>

@protocol _SFAppleConnectExtensionPageDelegate;
@class UIViewController;

@interface _SFAppleConnectExtensionHostContext : NSExtensionContext <_SFAppleConnectExtensionHostProtocol> {

	id<_SFAppleConnectExtensionPageDelegate> _delegate;
	UIViewController* _remoteViewController;

}

@property (assign,nonatomic,__weak) id<_SFAppleConnectExtensionPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * remoteViewController;                               //@synthesize remoteViewController=_remoteViewController - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(id<_SFAppleConnectExtensionPageDelegate>)delegate;
-(void)setDelegate:(id<_SFAppleConnectExtensionPageDelegate>)arg1 ;
-(UIViewController *)remoteViewController;
-(void)setRemoteViewController:(UIViewController *)arg1 ;
-(void)dispatchMessageToContentScriptWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)presentExtensionUI;
-(void)dismissExtensionUI;
@end

