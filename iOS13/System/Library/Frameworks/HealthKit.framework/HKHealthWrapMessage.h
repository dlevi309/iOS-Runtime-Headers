/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/_HKStreamingDestination.h>

@protocol OS_dispatch_queue;
@class HKHealthWrapCodablePayloadHeader, NSUUID, _HKCompressionEngine, HKHealthWrapEncryptor, NSURL, NSOutputStream, NSObject, NSError, HKHealthWrapMessageConfiguration;

@interface HKHealthWrapMessage : NSObject <_HKStreamingDestination> {

	HKHealthWrapCodablePayloadHeader* _payloadHeader;
	NSUUID* _studyUUID;
	SecCertificateRef _certificate;
	_HKCompressionEngine* _compressionEngine;
	HKHealthWrapEncryptor* _encryptor;
	NSURL* _outputURL;
	NSOutputStream* _outputStream;
	NSObject*<OS_dispatch_queue> _encryptQueue;
	BOOL _compressionEnabled;
	BOOL _lastSuccess;
	NSError* _lastError;
	HKHealthWrapMessageConfiguration* _configuration;

}

@property (nonatomic,readonly) HKHealthWrapMessageConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(id)newOutputFileURL;
+(id)newOutputFileURLInDirectory:(id)arg1 ;
-(void)dealloc;
-(void)reset;
-(id)initWithConfiguration:(id)arg1 ;
-(HKHealthWrapMessageConfiguration *)configuration;
-(void)_cleanup;
-(void)_finalize;
-(BOOL)startWithError:(id*)arg1 ;
-(id)initWithSenderUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 payloadIdentifier:(id)arg7 applicationData:(id)arg8 certificate:(SecCertificateRef)arg9 ;
-(id)_codableKeyValuePairsFromDictionary:(id)arg1 ;
-(BOOL)startWithOutputFileURL:(id)arg1 error:(id*)arg2 ;
-(void)_writeDataToCompressor:(id)arg1 ;
-(BOOL)_run:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)appendData:(id)arg1 error:(id*)arg2 ;
-(id)finalizeWithError:(id*)arg1 ;
-(void)receiveSinkContent:(id)arg1 ;
-(void)sinkContentFinished;
-(BOOL)appendDataFromFileURL:(id)arg1 error:(id*)arg2 ;
@end

