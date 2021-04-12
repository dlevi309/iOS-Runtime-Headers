/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioDataAnalysis.framework/AudioDataAnalysis
*/

#import <AudioDataAnalysis/AudioDataAnalysis-Structs.h>
#import <libobjc.A.dylib/ADAMClientDelegate.h>

@protocol ADAMAudioDataReceiverDelegate;
@class NSString, NSMutableDictionary, NSXPCConnection;

@interface ADAMAudioDataReceiver : NSObject <ADAMClientDelegate> {

	NSString* _name;
	NSMutableDictionary* _sensorStatus;
	NSMutableDictionary* _callbacks;
	NSMutableDictionary* _configs;
	NSXPCConnection* _connection;
	os_unfair_lock_s _lock;
	BOOL _connectionDidInvalidate;
	id<ADAMAudioDataReceiverDelegate> delegate;

}

@property (assign) BOOL connectionDidInvalidate;                                             //@synthesize connectionDidInvalidate=_connectionDidInvalidate - In the implementation block
@property (assign,nonatomic,__weak) id<ADAMAudioDataReceiverDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reconnect;
-(id)setupConnection;
-(BOOL)isMeasurementOnForAudioSampleType:(unsigned)arg1 ;
-(void)startReceivingAudioSampleType:(unsigned)arg1 ;
-(id<ADAMAudioDataReceiverDelegate>)delegate;
-(void)receiveAudioSample:(id)arg1 type:(unsigned)arg2 metadata:(id)arg3 ;
-(void)startReceivingAudioSampleType:(unsigned)arg1 withCallback:(/*^block*/id)arg2 ;
-(id)getCurrentConfigurationForAudioSampleType:(unsigned)arg1 ;
-(void)handleAndLogError:(id)arg1 ;
-(void)setConnectionDidInvalidate:(BOOL)arg1 ;
-(BOOL)connectionDidInvalidate;
-(void)setDelegate:(id<ADAMAudioDataReceiverDelegate>)arg1 ;
-(void)receiveAudioSample:(id)arg1 ;
-(void)stopMeasuringAudioSampleType:(unsigned)arg1 ;
-(BOOL)verifyInvariants;
-(void)startMeasuringAudioSampleType:(unsigned)arg1 withConfiguration:(id)arg2 ;
-(void)stopReceivingAudioSampleType:(unsigned)arg1 ;
-(void)reset;
-(void)configureAudioSampleType:(unsigned)arg1 configuration:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)dealloc;
@end

