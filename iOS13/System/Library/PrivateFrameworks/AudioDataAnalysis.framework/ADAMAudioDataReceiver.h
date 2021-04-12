/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioDataAnalysis.framework/AudioDataAnalysis
*/

#import <AudioDataAnalysis/AudioDataAnalysis-Structs.h>
#import <libobjc.A.dylib/ADAMClientDelegate.h>

@class NSString, NSMutableDictionary, NSXPCConnection;

@interface ADAMAudioDataReceiver : NSObject <ADAMClientDelegate> {

	NSString* _name;
	NSMutableDictionary* _sensorStatus;
	NSMutableDictionary* _callbacks;
	NSMutableDictionary* _configs;
	NSXPCConnection* _connection;
	os_unfair_lock_s _lock;
	BOOL _connectionDidInvalidate;

}

@property (assign) BOOL connectionDidInvalidate;                    //@synthesize connectionDidInvalidate=_connectionDidInvalidate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 ;
-(void)reset;
-(void)reconnect;
-(id)setupConnection;
-(void)stopMeasuringAudioSampleType:(unsigned)arg1 ;
-(void)startMeasuringAudioSampleType:(unsigned)arg1 withConfiguration:(id)arg2 ;
-(void)configureAudioSampleType:(unsigned)arg1 configuration:(id)arg2 ;
-(void)startReceivingAudioSampleType:(unsigned)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)stopReceivingAudioSampleType:(unsigned)arg1 ;
-(void)setConnectionDidInvalidate:(BOOL)arg1 ;
-(BOOL)connectionDidInvalidate;
-(id)DatatypeTo4CC:(unsigned)arg1 ;
-(void)receiveAudioSample:(id)arg1 type:(unsigned)arg2 metadata:(id)arg3 ;
-(BOOL)verifyInvariants;
-(void)handleAndLogError:(id)arg1 ;
@end

