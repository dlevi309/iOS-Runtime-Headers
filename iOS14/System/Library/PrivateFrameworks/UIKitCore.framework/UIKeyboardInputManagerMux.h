/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedInstance;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)addClient:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)removeClient:(id)arg1 ;
-(id<TIKeyboardInputManager>)systemInputManager;
-(BOOL)hasSystemInputManager;
-(void)removeAllClients;
-(void)updateClientResponseDelegatesWithDelegate:(id)arg1 ;
-(void)setSystemInputManager:(id<TIKeyboardInputManager>)arg1 ;
-(void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(long long)arg2 ;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegateImpl>)arg1 ;
-(id<_UIIVCResponseDelegateImpl>)responseDelegate;
-(BOOL)_systemHasKbd;
-(void)releaseConnectedClients;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
@end

