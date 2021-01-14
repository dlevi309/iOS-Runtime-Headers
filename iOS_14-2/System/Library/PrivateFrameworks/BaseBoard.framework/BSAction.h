/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue;
@class NSObject, BSActionListenerToken, BSTimer, BSActionResponse, BSAuditHistory, BSMachPortReceiveRight, BSMachPortTransferableSendRight, BSPortDeathSentinel, NSArray, BSSettings, NSString;

@interface BSAction : NSObject <BSXPCCoding, NSSecureCoding, BSSettingDescriptionProvider, BSDebugDescriptionProviding, BSInvalidatable> {

	unsigned long long _timeout;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _queue_handler;
	BSActionListenerToken* _queue_listenerToken;
	BSTimer* _queue_timer;
	/*^block*/id _queue_invalidationHandler;
	BSActionResponse* _queue_response;
	BSAuditHistory* _queue_auditHistory;
	BSMachPortReceiveRight* _queue_receiveRight;
	BSMachPortTransferableSendRight* _queue_sendRight;
	BSPortDeathSentinel* _queue_portDeathSentinel;
	NSArray* _queue_neuteredCallStack;
	BOOL _hasTimeout;
	BOOL _originatingAction;
	BOOL _queue_hasBeenNeuteredForEncode;
	BOOL _queue_hasBeenNeuteredForSend;
	BOOL _queue_invalidated;
	BOOL _expectsResponse;
	BSSettings* _info;

}

@property (getter=_expectsResponse,nonatomic,readonly) BOOL expectsResponse;              //@synthesize expectsResponse=_expectsResponse - In the implementation block
@property (nonatomic,copy,readonly) BSSettings * info;                                    //@synthesize info=_info - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)UIActionType;
-(id)succinctDescription;
-(void)sendResponse:(id)arg1 ;
-(BSSettings *)info;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(BOOL)_expectsResponse;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)invalidate;
-(BOOL)canSendResponse;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

