/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <libobjc.A.dylib/TROperationHandler.h>

@class NSString;

@interface TRHandshakeOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _handshakeHandler;

}

@property (nonatomic,copy) id handshakeHandler;                     //@synthesize handshakeHandler=_handshakeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)initWithHandshakeHandler:(/*^block*/id)arg1 ;
-(id)handshakeHandler;
-(void)setHandshakeHandler:(id)arg1 ;
@end

