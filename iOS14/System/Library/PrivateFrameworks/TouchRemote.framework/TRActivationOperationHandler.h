/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <libobjc.A.dylib/TROperationHandler.h>

@class NSString;

@interface TRActivationOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _activationHandler;

}

@property (nonatomic,copy) id activationHandler;                    //@synthesize activationHandler=_activationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActivationHandler:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(id)initWithActivationHandler:(/*^block*/id)arg1 ;
-(id)activationHandler;
-(void)_handleActivationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
@end

