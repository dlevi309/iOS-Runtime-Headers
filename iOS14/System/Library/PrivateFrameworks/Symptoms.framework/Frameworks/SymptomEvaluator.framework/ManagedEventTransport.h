/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableDictionary;

@interface ManagedEventTransport : NSObject {

	unsigned long long _event_id;
	NSObject*<OS_xpc_object> _listener;
	NSMutableDictionary* _dynamicEventHandlers;
	NSMutableDictionary* _staticEventHandlers;

}
+(id)sharedInstance;
+(void)retireEventId:(unsigned long long)arg1 ;
+(id)feedbackForEventId:(unsigned long long)arg1 ;
+(BOOL)setInfoProvider:(id)arg1 forId:(unsigned long long)arg2 ;
+(void)setListeningPort:(const char*)arg1 ;
+(unsigned long long)obtainEventId:(id)arg1 ;
-(void)sendReplyInfo:(id)arg1 onConnection:(id)arg2 withErrCode:(unsigned long long)arg3 forId:(unsigned long long)arg4 name:(char*)arg5 date:(id)arg6 reason:(char*)arg7 reasonCode:(unsigned long long)arg8 info:(id)arg9 ;
-(id)init;
-(void)retireEventId:(unsigned long long)arg1 ;
-(id)feedbackForEventId:(unsigned long long)arg1 ;
-(BOOL)setInfoProvider:(id)arg1 forId:(unsigned long long)arg2 ;
-(void)_createReply:(id)arg1 forConnection:(id)arg2 ;
-(void)setListeningPort:(const char*)arg1 ;
-(unsigned long long)obtainEventId:(id)arg1 ;
@end

