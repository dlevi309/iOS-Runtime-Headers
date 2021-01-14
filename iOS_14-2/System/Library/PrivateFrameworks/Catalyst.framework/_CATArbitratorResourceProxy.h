/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/CATArbitratorProxy.h>

@class _CATArbitratorRegistrationEntry, NSString;

@interface _CATArbitratorResourceProxy : NSProxy <CATArbitratorProxy> {

	id mResource;
	_CATArbitratorRegistrationEntry* mRegistration;
	BOOL _isExclusive;

}

@property (nonatomic,readonly) BOOL isExclusive;                    //@synthesize isExclusive=_isExclusive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(BOOL)isExclusive;
-(void)invalidate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithResource:(id)arg1 registration:(id)arg2 exclusive:(BOOL)arg3 ;
@end

