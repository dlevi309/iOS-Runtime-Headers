/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class BSSettings, NSObject, BSActionListenerToken, BSTimer, BSActionResponse, BSAuditHistory, BSMachPortReceiveRight, BSMachPortTransferableSendRight, BSPortDeathSentinel, NSString;

@interface BSAction : NSObject <BSXPCCoding, NSSecureCoding, BSSettingDescriptionProvider, BSDescriptionProviding, BSInvalidatable> {

	BSSettings* _info;
	BOOL _hasTimeout;
	BOOL _expectsResponse;
	BOOL _originatingAction;
	unsigned long long _timeout;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _queue_hasBeenNeutered;
	BOOL _queue_invalidated;
	/*^block*/id _queue_handler;
	BSActionListenerToken* _queue_listenerToken;
	BSTimer* _queue_timer;
	/*^block*/id _queue_invalidationHandler;
	BSActionResponse* _queue_response;
	BSAuditHistory* _queue_auditHistory;
	BSMachPortReceiveRight* _queue_receiveRight;
	BSMachPortTransferableSendRight* _queue_sendRight;
	BSPortDeathSentinel* _queue_portDeathSentinel;

}

@property (getter=_expectsResponse,nonatomic,readonly) BOOL expectsResponse;              //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,copy,readonly) BSSettings * info;                                    //@synthesize info=_info - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(BSSettings *)info;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)_queue_addAuditHistoryWithFormat:(id)arg1 ;
-(void)_queue_setInvalidatedAndNotify:(BOOL)arg1 errorCode:(long long)arg2 ;
-(id)_initWithInfo:(id)arg1 invalidated:(BOOL)arg2 expectsResponse:(BOOL)arg3 auditHistory:(id)arg4 xPort:(id)arg5 xEndpoint:(id)arg6 sendRight:(id)arg7 ;
-(id)_queue_encodedSendRight;
-(void)_queue_tryExecuteQueueHandler;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_queue_callHandlerWithResponse:(id)arg1 ;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg1 safely:(BOOL)arg2 ;
-(id)_queue_handlerDescription;
-(BOOL)canSendResponse;
-(void)sendResponse:(id)arg1 ;
-(BOOL)_expectsResponse;
@end

