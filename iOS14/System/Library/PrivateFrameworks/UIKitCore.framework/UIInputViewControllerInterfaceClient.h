/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <Foundation/NSExtensionContext.h>

@protocol _UIIVCInterface;
@interface UIInputViewControllerInterfaceClient : NSExtensionContext {

	id<_UIIVCInterface> _forwardingInterface;

}

@property (nonatomic,retain) id<_UIIVCInterface> forwardingInterface;              //@synthesize forwardingInterface=_forwardingInterface - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)setForwardingInterface:(id<_UIIVCInterface>)arg1 ;
-(void)_tearDownRemoteService;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(id<_UIIVCInterface>)forwardingInterface;
-(id)responseDelegate;
-(void)dealloc;
@end

