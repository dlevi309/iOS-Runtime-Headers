/*
* Generated on Thursday, January 14, 2021 at 2:29:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAudioIssueDetector.dylib
*/

#import <libAudioIssueDetector.dylib/libAudioIssueDetector.dylib-Structs.h>
#import <libobjc.A.dylib/ADAMServerProtocol.h>

@class NSXPCConnection, NSString, NSMutableDictionary;

@interface ADAMServerDelegate : NSObject <ADAMServerProtocol> {

	NSXPCConnection* _connection;
	NSString* _clientName;
	NSMutableDictionary* _dataTypeStatus;
	NSMutableDictionary* _configs;
	long long _error_code;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopMeasuringAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 andReply:(/*^block*/id)arg3 ;
-(void)sendAudioSample:(id)arg1 ;
-(void)unregisterDelegate;
-(id)DatatypeTo4CC:(unsigned)arg1 ;
-(void)setupConnection:(id)arg1 ;
-(id)initWithConnection:(id)arg1 andErrorCode:(long long)arg2 ;
-(void)isMeasurementOnForAudioSampleType:(unsigned)arg1 withReply:(/*^block*/id)arg2 ;
-(void)stopListeningToAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 withReply:(/*^block*/id)arg3 ;
-(void)getCurrentConfigurationForAudioSampleType:(unsigned)arg1 withReply:(/*^block*/id)arg2 ;
-(void)startListeningToAudioSampleWithIdentifier:(id)arg1 type:(unsigned)arg2 withReply:(/*^block*/id)arg3 ;
-(BOOL)verifyInvariantsWithReply:(/*^block*/id)arg1 ;
-(BOOL)isActive:(unsigned)arg1 ;
-(void)startMeasuringAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 withConfiguration:(id)arg3 andReply:(/*^block*/id)arg4 ;
-(void)sendAudioSample:(id)arg1 withType:(unsigned)arg2 metadata:(id)arg3 ;
-(id)describeErrorCode:(long long)arg1 ;
-(void)deactivateAll;
-(id)errorWithCode:(long long)arg1 andReason:(id)arg2 ;
-(void)configureAudioSampleTypeWithIdentifier:(id)arg1 type:(unsigned)arg2 configuration:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)registerDelegate:(unsigned)arg1 ;
-(BOOL)datatypeSupportsONOFF:(unsigned)arg1 ;
@end

