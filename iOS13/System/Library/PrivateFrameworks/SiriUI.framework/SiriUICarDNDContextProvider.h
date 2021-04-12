/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <libobjc.A.dylib/AFContextProvider.h>

@protocol SiriUICarDNDContextProviderDelegate;
@class SADeviceCarDNDHintContext;

@interface SiriUICarDNDContextProvider : NSObject <AFContextProvider> {

	id<SiriUICarDNDContextProviderDelegate> _delegate;
	SADeviceCarDNDHintContext* _hintContext;

}

@property (assign,nonatomic,__weak) id<SiriUICarDNDContextProviderDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setHintContext:,nonatomic,copy) SADeviceCarDNDHintContext * hintContext;              //@synthesize hintContext=_hintContext - In the implementation block
-(id<SiriUICarDNDContextProviderDelegate>)delegate;
-(void)setDelegate:(id<SiriUICarDNDContextProviderDelegate>)arg1 ;
-(BOOL)allowContextProvider:(id)arg1 ;
-(id)getCurrentContext;
-(SADeviceCarDNDHintContext *)hintContext;
-(void)_setHintContext:(id)arg1 ;
@end

