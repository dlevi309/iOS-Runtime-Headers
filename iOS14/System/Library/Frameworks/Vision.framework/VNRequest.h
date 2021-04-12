/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNWarningRecorder.h>
#import <libobjc.A.dylib/VNSequencedRequestSupporting.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class VNRequestConfiguration, NSDictionary, VNWarningRecorder, VNCanceller, NSObject, NSArray, VNProcessingDevice, NSString;

@interface VNRequest : NSObject <VNWarningRecorder, VNSequencedRequestSupporting, NSCopying> {

	/*^block*/id _completionHandler;
	VNRequestConfiguration* _configuration;
	NSDictionary* _options;
	VNWarningRecorder* _warningRecorder;
	VNCanceller* _canceller;
	BOOL _cancellationTriggered;
	os_unfair_lock_s _cancellationResourcesLock;
	NSObject*<OS_dispatch_semaphore> _cancellationSemaphore;
	NSObject*<OS_dispatch_queue> _cancellationQueue;
	unsigned long long _revision;
	NSArray* _results;

}

@property (retain) NSObject*<OS_dispatch_semaphore> cancellationSemaphore;              //@synthesize cancellationSemaphore=_cancellationSemaphore - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                             //@synthesize options=_options - In the implementation block
@property (readonly) BOOL cancellationTriggered; 
@property (assign,nonatomic) unsigned long long modelFileBackingStore; 
@property (nonatomic,retain) id<MTLDevice> preferredMetalContext; 
@property (assign,nonatomic) unsigned long long metalContextPriority; 
@property (assign,nonatomic) unsigned long long detectionLevel; 
@property (nonatomic,copy) VNProcessingDevice * processingDevice; 
@property (assign,nonatomic) BOOL preferBackgroundProcessing; 
@property (assign,nonatomic) BOOL usesCPUOnly; 
@property (nonatomic,copy,readonly) NSArray * results;                                  //@synthesize results=_results - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) unsigned long long revision;                               //@synthesize revision=_revision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)getOptionalArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id*)arg5 ;
+(BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id*)arg5 ;
+(BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id*)arg5 ;
+(BOOL)getOptionalObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5 ;
+(Class)configurationClass;
+(unsigned long long)currentRevision;
+(unsigned long long)compatibleRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2 ;
+(unsigned long long)resolvedRevisionForRevision:(unsigned long long)arg1 ;
+(id)supportedRevisions;
+(unsigned long long)defaultRevision;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(id)newConfigurationInstance;
+(BOOL)defaultRequestInstanceWarmUpSession:(id)arg1 error:(id*)arg2 ;
+(BOOL)getRequiredObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5 ;
+(unsigned long long)_defaultRevisionForBuildVersion:(int)arg1 ;
+(id)_introspectionBuiltSupportedRevisions;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(BOOL)getOptionalInputFacesArray:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3 ;
+(const SCD_Struct_VN20*)dependentRequestCompatability;
+(BOOL)setsTimeRangeOnResults;
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(BOOL)setPrivateRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)init;
-(void)recordWarning:(id)arg1 value:(id)arg2 ;
-(VNProcessingDevice *)processingDevice;
-(void)setDetectionLevel:(unsigned long long)arg1 ;
-(long long)dependencyProcessingOrdinality;
-(NSDictionary *)options;
-(void)setMetalContextPriority:(unsigned long long)arg1 ;
-(void)setRevision:(unsigned long long)arg1 ;
-(id)completionHandler;
-(void)setPreferBackgroundProcessing:(BOOL)arg1 ;
-(void)setProcessingDevice:(VNProcessingDevice *)arg1 ;
-(unsigned long long)detectionLevel;
-(BOOL)warmUpSession:(id)arg1 error:(id*)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(NSString *)description;
-(id)configuration;
-(id)valueForWarning:(id)arg1 ;
-(void)setUsesCPUOnly:(BOOL)arg1 ;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)_defaultProcessingDevice;
-(void)_updateProcessingDeviceOption;
-(void)setValue:(id)arg1 forPrivateOption:(id)arg2 ;
-(id)valueForPrivateOption:(id)arg1 ;
-(void)setValue:(id)arg1 forRequestOption:(id)arg2 ;
-(BOOL)hasCancellationHook;
-(id)newDefaultDetectorOptionsForSession:(id)arg1 ;
-(void)copyStateOfRequest:(id)arg1 ;
-(BOOL)performInContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateConfigurationAndReturnError:(id*)arg1 ;
-(BOOL)internalCancelInContext:(id)arg1 error:(id*)arg2 ;
-(void)setSortedResults:(id)arg1 ;
-(id)cancellerAndReturnError:(id*)arg1 ;
-(BOOL)cancellationTriggered;
-(BOOL)cancellationTriggeredAndReturnError:(id*)arg1 ;
-(unsigned long long)modelFileBackingStore;
-(id<MTLDevice>)preferredMetalContext;
-(void)setPreferredMetalContext:(id<MTLDevice>)arg1 ;
-(unsigned long long)metalContextPriority;
-(BOOL)validateImageBuffer:(id)arg1 ofNonZeroWidth:(unsigned long long*)arg2 andHeight:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)_setResolvedRevision:(unsigned long long)arg1 ;
-(unsigned long long)resolvedRevision;
-(unsigned long long)compatibleRevisionForDependentRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)cancellationSemaphore;
-(void)setCancellationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(BOOL)usesCPUOnly;
-(BOOL)preferBackgroundProcessing;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(/*^block*/id)resultsSortingComparator;
-(void)cancel;
-(id)sequencedRequestPreviousObservationsKey;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setModelFileBackingStore:(unsigned long long)arg1 ;
-(id)newDefaultRequestInstance;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)warnings;
-(unsigned long long)revision;
@end

