/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <TextInput/TIKeyboardInputManagerStub.h>
#import <UIKitCore/_UIIVCInterface.h>

@protocol _UIIVCResponseDelegate, _UIIVCInterface;
@class _UIInputViewControllerState, NSString;

@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface> {

	id<_UIIVCResponseDelegate> _responseDelegate;
	id<_UIIVCInterface> _forwardingInterface;
	_UIInputViewControllerState* _cachedState;

}

@property (setter=_setCachedState:,getter=_cachedState,nonatomic,retain) _UIInputViewControllerState * cachedState;              //@synthesize cachedState=_cachedState - In the implementation block
@property (nonatomic,retain) id<_UIIVCInterface> forwardingInterface;                                                            //@synthesize forwardingInterface=_forwardingInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<_UIIVCResponseDelegate> responseDelegate;                                                        //@synthesize responseDelegate=_responseDelegate - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setForwardingInterface:(id<_UIIVCInterface>)arg1 ;
-(void)_tearDownRemoteService;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(id<_UIIVCResponseDelegate>)responseDelegate;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegate>)arg1 ;
-(id<_UIIVCInterface>)forwardingInterface;
-(id)_cachedState;
-(void)_setCachedState:(id)arg1 ;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

