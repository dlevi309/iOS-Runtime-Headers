/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
*/

#import <Foundation/NSProxy.h>

@protocol CLIntersiloProxyDelegateProtocol;
@class CLSilo;

@interface CLIntersiloProxy : NSProxy {

	id<CLIntersiloProxyDelegateProtocol> _delegate;
	CLSilo* _delegateSilo;

}

@property (nonatomic,__weak,readonly) id<CLIntersiloProxyDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,__weak,readonly) CLSilo * delegateSilo;                                      //@synthesize delegateSilo=_delegateSilo - In the implementation block
+(id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 recipientName:(id)arg3 ;
+(Class)initiatorRepresentingClass;
+(Class)recipientRepresentingClass;
-(id)initWithDelegateObject:(id)arg1 delegateSilo:(id)arg2 ;
-(id)init;
-(id<CLIntersiloProxyDelegateProtocol>)delegate;
-(void)setDelegateEntityName:(const char*)arg1 ;
-(id)description;
-(void)registerDelegate:(id)arg1 inSilo:(id)arg2 ;
-(BOOL)offsiloHandleInvocation:(id)arg1 selectorInfo:(id)arg2 peer:(id)arg3 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(CLSilo *)delegateSilo;
-(void)forwardInvocation:(id)arg1 ;
-(id)peer;
@end

