/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <Foundation/NSExtensionContext.h>

@protocol _UIIVCInterface;
@interface UIInputViewControllerInterfaceClient : NSExtensionContext {

	id<_UIIVCInterface> _forwardingInterface;

}

@property (nonatomic,retain) id<_UIIVCInterface> forwardingInterface;              //@synthesize forwardingInterface=_forwardingInterface - In the implementation block
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(void)setForwardingInterface:(id<_UIIVCInterface>)arg1 ;
-(void)_tearDownRemoteService;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(id)responseDelegate;
-(id<_UIIVCInterface>)forwardingInterface;
@end

