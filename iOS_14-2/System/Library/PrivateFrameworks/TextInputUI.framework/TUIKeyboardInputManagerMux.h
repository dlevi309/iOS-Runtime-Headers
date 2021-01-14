/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


@protocol _UIIVCResponseDelegateImpl, TIKeyboardInputManager;
@class NSMutableArray;

@interface TUIKeyboardInputManagerMux : NSObject {

	id<_UIIVCResponseDelegateImpl> _responseDelegate;
	id<TIKeyboardInputManager> _systemInputManager;
	NSMutableArray* _clients;

}

@property (nonatomic,retain) id<TIKeyboardInputManager> systemInputManager;                //@synthesize systemInputManager=_systemInputManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * clients;                                     //@synthesize clients=_clients - In the implementation block
@property (nonatomic,readonly) BOOL hasSystemInputManager; 
@property (nonatomic,retain) id<_UIIVCResponseDelegateImpl> responseDelegate;              //@synthesize responseDelegate=_responseDelegate - In the implementation block
+(id)sharedInstance;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
-(void)addClient:(id)arg1 ;
-(NSMutableArray *)clients;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)removeClient:(id)arg1 ;
-(id<TIKeyboardInputManager>)systemInputManager;
-(BOOL)hasSystemInputManager;
-(void)removeAllClients;
-(void)updateClientResponseDelegatesWithDelegate:(id)arg1 ;
-(void)setSystemInputManager:(id<TIKeyboardInputManager>)arg1 ;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegateImpl>)arg1 ;
-(void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(unsigned long long)arg2 implProxy:(id)arg3 ;
-(id<_UIIVCResponseDelegateImpl>)responseDelegate;
-(BOOL)_systemHasKbd;
-(void)releaseConnectedClients;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setClients:(NSMutableArray *)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

