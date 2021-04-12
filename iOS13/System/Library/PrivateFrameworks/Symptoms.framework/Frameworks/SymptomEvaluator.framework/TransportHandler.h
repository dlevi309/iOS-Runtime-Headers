/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	unsigned _reporterId;
	const char* _reporterName;
	unsigned long long _pid;
	const char* _processName;
	const char* _bundleId;
	ReporterFilter* _reporterFilter;
	int _reporterVersion;

}
+(void)initialize;
+(void)updateFilters:(unsigned long long)arg1 ;
+(id)applicationStateMonitor;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)disconnect;
-(void)connect:(transport_connection_sRef)arg1 id:(unsigned long long)arg2 writefn:(/*function pointer*/void*)arg3 pid:(unsigned long long)arg4 name:(char*)arg5 ;
-(void)receivePayload:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)startRead;
-(void)_sendFilterUpdate;
-(void)generateLibnetcoreSymptomSignpost:(id)arg1 ;
-(void)didReceiveEvent:(id)arg1 ;
-(void)_sendAck:(unsigned)arg1 ;
@end

