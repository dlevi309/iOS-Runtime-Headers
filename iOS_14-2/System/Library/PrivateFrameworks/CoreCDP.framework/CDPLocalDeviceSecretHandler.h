/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/


@protocol CDPLocalDeviceSecretHandlerProtocol;
@class CDPContext;

@interface CDPLocalDeviceSecretHandler : NSObject {

	id<CDPLocalDeviceSecretHandlerProtocol> _handlerProxy;
	CDPContext* _context;

}

@property (nonatomic,readonly) CDPContext * context;              //@synthesize context=_context - In the implementation block
-(CDPContext *)context;
-(void)userDidEnterValidSecret:(id)arg1 type:(unsigned long long)arg2 ;
-(void)userDidCancelWithError:(id)arg1 ;
-(id)initWithContext:(id)arg1 handler:(id)arg2 ;
@end

