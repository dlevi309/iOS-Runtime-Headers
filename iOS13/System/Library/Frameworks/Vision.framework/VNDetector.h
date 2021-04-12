/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNDetectorKeyProviding.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject, VNMetalContext, NSString;

@interface VNDetector : NSObject <VNDetectorKeyProviding, VNRequestRevisionProviding> {

	NSDictionary* _configurationOptions;
	NSObject*<OS_dispatch_queue> _processingQueue;
	unsigned long long _requestRevision;
	VNMetalContext* _metalContext;
	unsigned long long _backingStore;
	NSObject*<OS_dispatch_queue> _synchronizationQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> synchronizationQueue;              //@synthesize synchronizationQueue=_synchronizationQueue - In the implementation block
@property (copy,readonly) NSDictionary * configurationOptions;                               //@synthesize configurationOptions=_configurationOptions - In the implementation block
@property (nonatomic,readonly) VNMetalContext * metalContext;                                //@synthesize metalContext=_metalContext - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> processingQueue;                 //@synthesize processingQueue=_processingQueue - In the implementation block
@property (nonatomic,readonly) unsigned long long backingStore;                              //@synthesize backingStore=_backingStore - In the implementation block
@property (nonatomic,readonly) unsigned long long requestRevision;                           //@synthesize requestRevision=_requestRevision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)keyForDetectorWithConfigurationOptions:(id)arg1 ;
+(id)detectorName;
+(void)fullyPopulateConfigurationOptions:(id)arg1 ;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(id)detectorWithConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(id)detectorKeyComponentForDetectorConfigurationOptionKey:(id)arg1 value:(id)arg2 ;
-(unsigned long long)requestRevision;
-(VNMetalContext *)metalContext;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(BOOL)useGPU;
-(id)initWithConfigurationOptions:(id)arg1 ;
-(BOOL)warmUpWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)processInSynchronizationQueueUsingQualityOfServiceClass:(unsigned)arg1 options:(id)arg2 regionOfInterest:(CGRect)arg3 warningRecorder:(id)arg4 error:(id*)arg5 ;
-(BOOL)currentQueueIsSynchronizationQueue;
-(BOOL)validateImageBuffer:(id)arg1 error:(id*)arg2 ;
-(id)validatedImageBufferFromOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)needsMetalContext;
-(id)newMetalContextForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)getOptionalCanceller:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3 ;
-(id)requiredCancellerInOptions:(id)arg1 error:(id*)arg2 ;
-(id)validatedProcessingDeviceInOptions:(id)arg1 error:(id*)arg2 ;
-(void)updateConfigurationOptionsWithObject:(id)arg1 forKey:(id)arg2 ;
-(NSDictionary *)configurationOptions;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(unsigned long long)backingStore;
-(NSObject*<OS_dispatch_queue>)synchronizationQueue;
-(void)setSynchronizationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

