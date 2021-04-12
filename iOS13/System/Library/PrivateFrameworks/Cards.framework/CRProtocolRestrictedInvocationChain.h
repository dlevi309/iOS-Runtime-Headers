/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <Cards/CRInvocationChain.h>
#import <libobjc.A.dylib/CRInvocationChainDelegate.h>

@class Protocol, NSString;

@interface CRProtocolRestrictedInvocationChain : CRInvocationChain <CRInvocationChainDelegate> {

	Protocol* _restrictingProtocol;

}

@property (assign,nonatomic,__weak) id<CRInvocationChainDelegate> delegate; 
@property (nonatomic,retain) Protocol * restrictingProtocol;                             //@synthesize restrictingProtocol=_restrictingProtocol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)setRestrictingProtocol:(Protocol *)arg1 ;
-(BOOL)invocationChain:(id)arg1 shouldForwardInvocation:(id)arg2 toTarget:(id)arg3 ;
-(BOOL)isEligibleForSelector:(SEL)arg1 ;
-(BOOL)_selectorIsPartOfRestrictingProtocol:(SEL)arg1 ;
-(BOOL)_selector:(SEL)arg1 isPartOfProtocol:(id)arg2 ;
-(Protocol *)restrictingProtocol;
@end

