/*
* Generated on Thursday, January 14, 2021 at 2:25:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessoryDataStreamAdapterDelegate.h>

@protocol OS_dispatch_queue;
@class HMDHAPAccessory, NSObject, NSString, HMDAccessoryDiagnosticsSettings, HMDAccessoryDataStreamAdapter, NSDictionary, NSNumber, NSFileHandle;

@interface HMDAccessoryDiagnosticsSession : HMFObject <HMFLogging, HMDAccessoryDataStreamAdapterDelegate> {

	BOOL _readyForDataTransfer;
	HMDHAPAccessory* _accessory;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSString* _reason;
	HMDAccessoryDiagnosticsSettings* _settings;
	HMDAccessoryDataStreamAdapter* _dataStream;
	/*^block*/id _pendingCompletionHandler;
	NSString* _filePath;
	NSDictionary* _urlParameters;
	NSNumber* _expectedDataSequenceNumber;
	NSFileHandle* _fileHandle;

}

@property (__weak,readonly) HMDHAPAccessory * accessory;                      //@synthesize accessory=_accessory - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSString * reason;                                       //@synthesize reason=_reason - In the implementation block
@property (readonly) HMDAccessoryDiagnosticsSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (retain) HMDAccessoryDataStreamAdapter * dataStream;                //@synthesize dataStream=_dataStream - In the implementation block
@property (copy) id pendingCompletionHandler;                                 //@synthesize pendingCompletionHandler=_pendingCompletionHandler - In the implementation block
@property (copy) NSString * filePath;                                         //@synthesize filePath=_filePath - In the implementation block
@property (copy) NSDictionary * urlParameters;                                //@synthesize urlParameters=_urlParameters - In the implementation block
@property (retain) NSNumber * expectedDataSequenceNumber;                     //@synthesize expectedDataSequenceNumber=_expectedDataSequenceNumber - In the implementation block
@property (retain) NSFileHandle * fileHandle;                                 //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign) BOOL readyForDataTransfer;                                 //@synthesize readyForDataTransfer=_readyForDataTransfer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)filePath;
-(BOOL)readyForDataTransfer;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)fileExtension;
-(HMDHAPAccessory *)accessory;
-(id)logIdentifier;
-(NSFileHandle *)fileHandle;
-(void)shutDown;
-(id)attributeDescriptions;
-(HMDAccessoryDiagnosticsSettings *)settings;
-(NSString *)reason;
-(NSDictionary *)urlParameters;
-(HMDAccessoryDataStreamAdapter *)dataStream;
-(void)setDataStream:(HMDAccessoryDataStreamAdapter *)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(void)dealloc;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(BOOL)dataStreamAdapter:(id)arg1 didReceiveData:(id)arg2 ;
-(void)dataStreamAdapterDidFailDataRead:(id)arg1 ;
-(void)dataStreamAdapterDidCompleteDataRead:(id)arg1 ;
-(id)pendingCompletionHandler;
-(void)_callCompletionHandlerWithError:(id)arg1 ;
-(void)setReadyForDataTransfer:(BOOL)arg1 ;
-(void)setExpectedDataSequenceNumber:(NSNumber *)arg1 ;
-(void)setPendingCompletionHandler:(id)arg1 ;
-(void)setUrlParameters:(NSDictionary *)arg1 ;
-(BOOL)_validDataSequenceNumber:(id)arg1 ;
-(BOOL)_handleReceivedData:(id)arg1 ;
-(id)_createLogFile;
-(NSNumber *)expectedDataSequenceNumber;
-(id)initWithAccessory:(id)arg1 workQueue:(id)arg2 settings:(id)arg3 ;
-(void)setUpWithCompletion:(/*^block*/id)arg1 ;
-(void)readDataWithCompletion:(/*^block*/id)arg1 ;
@end

