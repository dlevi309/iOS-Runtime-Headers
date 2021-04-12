/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/FPUIActionExtensionViewControllerProtocol.h>

@class FPUIActionExtensionContext;

@interface FPUIActionExtensionViewController : UIViewController <FPUIActionExtensionViewControllerProtocol> {

	unsigned long long _browserUserInterfaceStyle;

}

@property (getter=_browserUserInterfaceStyle,nonatomic,readonly) unsigned long long browserUserInterfaceStyle;              //@synthesize browserUserInterfaceStyle=_browserUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) FPUIActionExtensionContext * extensionContext; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(unsigned long long)_browserUserInterfaceStyle;
-(void)_setBrowserUserInterfaceStyle:(unsigned long long)arg1 ;
-(void)_configureWithDomainIdentifier:(id)arg1 ;
-(void)_prepareAuthenticationUsingURL:(id)arg1 ;
-(void)_prepareAuthenticationUsingServerURL:(id)arg1 ;
-(void)_prepareForError:(id)arg1 ;
-(void)_prepareForActionWithIdentifier:(id)arg1 items:(id)arg2 ;
-(void)_prepareForServerCreation;
-(void)_browserUserInterfaceStyleDidChange;
-(void)prepareForActionWithIdentifier:(id)arg1 itemIdentifiers:(id)arg2 ;
-(void)prepareForServerCreation;
-(void)prepareAuthenticationUsingURL:(id)arg1 ;
-(void)prepareAuthenticationUsingServerURL:(id)arg1 ;
-(void)prepareForError:(id)arg1 ;
-(BOOL)_extensionImplementsSelector:(SEL)arg1 ;
-(void)prepareForAuthentication;
@end

