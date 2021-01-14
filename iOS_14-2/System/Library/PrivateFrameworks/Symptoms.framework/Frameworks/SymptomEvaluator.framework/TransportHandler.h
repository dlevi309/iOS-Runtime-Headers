/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@class ReporterFilter;

@interface TransportHandler : NSObject {

	transport_connection_sRef _connection;
	unsigned long long _connectionId;
	/*function pointer*/void* _writeFn;
	unsigned _ackId;
	BOOL _readOutstanding;
	BOOL _filterUpdateOutstanding;
	BOOL _disabled;
	BOOL _sendEventOnClose;
	unsigned _reporterId;
	const char* _reporterName;
	SCD_Struct_Ev10 _auditToken;
	unsigned long long _pid;
	const char* _processName;
	const char* _bundleId;
	ReporterFilter* _reporterFilter;
	BOOL _verifiedDelegateSymptom;
	int _reporterVersion;

}
+(void)initialize;
+(id)applicationStateMonitor;
+(void)requestExplicitDisconnectSymptom:(unsigned long long)arg1 ;
+(void)updateFilters:(unsigned long long)arg1 ;
-(void)disconnect;
-(id)init;
-(void)connect:(transport_connection_sRef)arg1 connId:(unsigned long long)arg2 writefn:(/*function pointer*/void*)arg3 auditToken:(SCD_Struct_Ev10)arg4 pid:(unsigned long long)arg5 name:(char*)arg6 verifiedDelegateSymptom:(BOOL)arg7 ;
-(id)description;
-(void)generateLibnetcoreSymptomSignpost:(id)arg1 ;
-(void)_sendFilterUpdate;
-(void)receivePayload:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)startRead;
-(void)_sendAck:(unsigned)arg1 ;
-(void)didReceiveEvent:(id)arg1 ;
-(void)dealloc;
@end

