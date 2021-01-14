/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_performInputViewControllerOutput:(id)arg1 ;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegate>)arg1 ;
-(void)_tearDownRemoteService;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(id<_UIIVCResponseDelegate>)responseDelegate;
-(void)dealloc;
@end

