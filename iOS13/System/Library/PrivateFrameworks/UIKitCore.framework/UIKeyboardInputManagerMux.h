/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIIVCResponseDelegateImpl, TIKeyboardInputManager;
@class NSMutableArray;

@interface UIKeyboardInputManagerMux : NSObject {

	NSMutableArray* _clients;
	id<_UIIVCResponseDelegateImpl> _responseDelegate;
	id<TIKeyboardInputManager> _systemInputManager;

}

@property (nonatomic,retain) id<TIKeyboardInputManager> systemInputManager;                //@synthesize systemInputManager=_systemInputManager - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemInputManager; 
@property (nonatomic,retain) id<_UIIVCResponseDelegateImpl> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id<_UIIVCResponseDelegateImpl>)responseDelegate;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegateImpl>)arg1 ;
-(void)addClient:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(id<TIKeyboardInputManager>)systemInputManager;
-(BOOL)hasSystemInputManager;
-(void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(long long)arg2 ;
-(void)releaseConnectedClients;
-(void)setSystemInputManager:(id<TIKeyboardInputManager>)arg1 ;
-(BOOL)_systemHasKbd;
-(void)updateClientResponseDelegatesWithDelegate:(id)arg1 ;
-(void)removeAllClients;
@end

