/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <Foundation/NSExtensionContext.h>
#import <UIKitCore/_UIIVCResponseDelegate.h>

@protocol _UIIVCResponseDelegate;
@class NSString;

@interface UIRemoteInputViewControllerInterface : NSExtensionContext <_UIIVCResponseDelegate> {

	id<_UIIVCResponseDelegate> _responseDelegate;

}

@property (nonatomic,retain) id<_UIIVCResponseDelegate> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)dealloc;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_tearDownRemoteService;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(id<_UIIVCResponseDelegate>)responseDelegate;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegate>)arg1 ;
-(void)_performInputViewControllerOutput:(id)arg1 ;
@end

