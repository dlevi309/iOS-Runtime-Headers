/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
+(id)defaultProcessingDeviceForRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN2*)revisionAvailability;
+(Class)configurationClass;
+(BOOL)supportsPrivateRevision:(unsigned long long)arg1 ;
+(id)descriptionForPrivateRevision:(unsigned long long)arg1 ;
+(const SCD_Struct_VN23*)dependentRequestCompatability;
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(unsigned long long)compatibleRevisionForDependentRequestOfClass:(Class)arg1 beingPerformedByRevision:(unsigned long long)arg2 ;
+(unsigned long long)resolvedRevisionForRevision:(unsigned long long)arg1 ;
+(id)supportedRevisions;
+(unsigned long long)defaultRevision;
+(id)newConfigurationInstance;
+(BOOL)defaultRequestInstanceWarmUpPerformer:(id)arg1 error:(id*)arg2 ;
+(BOOL)getOptionalObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)getRequiredObject:(id*)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id*)arg5 ;
+(BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getDoubleValue:(double*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id*)arg5 ;
+(BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)getFloatValue:(float*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id*)arg5 ;
+(BOOL)getOptionalArray:(id*)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id*)arg5 ;
+(BOOL)getOptionalInputFacesArray:(id*)arg1 inOptions:(id)arg2 error:(id*)arg3 ;
+(unsigned long long)_defaultRevisionForBuildVersion:(int)arg1 ;
+(id)_introspectionBuiltSupportedRevisions;
+(unsigned long long)currentRevision;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(void)cancel;
-(NSArray *)results;
-(void)setRevision:(unsigned long long)arg1 ;
-(void)setDetectionLevel:(unsigned long long)arg1 ;
-(id)configuration;
-(unsigned long long)revision;
-(id)completionHandler;
-(BOOL)usesCPUOnly;
-(void)setUsesCPUOnly:(BOOL)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(BOOL)warmUpRequestPerformer:(id)arg1 error:(id*)arg2 ;
-(long long)dependencyProcessingOrdinality;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)allowsCachingOfResults;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)sequencedRequestPreviousObservationsKey;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 ;
-(/*^block*/id)resultsSortingComparator;
-(BOOL)wantsSequencedRequestObservationsRecording;
-(id)newDefaultRequestInstance;
-(VNProcessingDevice *)processingDevice;
-(BOOL)preferBackgroundProcessing;
-(unsigned long long)detectionLevel;
-(void)recordWarning:(id)arg1 value:(id)arg2 ;
-(id)valueForWarning:(id)arg1 ;
-(id)_defaultProcessingDevice;
-(void)_updateProcessingDeviceOption;
-(void)setValue:(id)arg1 forPrivateOption:(id)arg2 ;
-(id)valueForPrivateOption:(id)arg1 ;
-(void)setValue:(id)arg1 forRequestOption:(id)arg2 ;
-(BOOL)hasCancellationHook;
-(id)newDefaultDetectorOptions;
-(void)copyStateOfRequest:(id)arg1 ;
-(BOOL)performInContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)validateConfigurationAndReturnError:(id*)arg1 ;
-(BOOL)internalCancelInContext:(id)arg1 error:(id*)arg2 ;
-(void)setSortedResults:(id)arg1 ;
-(id)warnings;
-(id)cancellerAndReturnError:(id*)arg1 ;
-(BOOL)cancellationTriggered;
-(BOOL)cancellationTriggeredAndReturnError:(id*)arg1 ;
-(void)setPreferBackgroundProcessing:(BOOL)arg1 ;
-(unsigned long long)modelFileBackingStore;
-(void)setModelFileBackingStore:(unsigned long long)arg1 ;
-(id<MTLDevice>)preferredMetalContext;
-(void)setPreferredMetalContext:(id<MTLDevice>)arg1 ;
-(unsigned long long)metalContextPriority;
-(void)setMetalContextPriority:(unsigned long long)arg1 ;
-(void)setProcessingDevice:(VNProcessingDevice *)arg1 ;
-(BOOL)validateImageBuffer:(id)arg1 ofNonZeroWidth:(unsigned long long*)arg2 andHeight:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)_setResolvedRevision:(unsigned long long)arg1 ;
-(BOOL)setPrivateRevision:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)resolvedRevision;
-(unsigned long long)compatibleRevisionForDependentRequest:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)cancellationSemaphore;
-(void)setCancellationSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

