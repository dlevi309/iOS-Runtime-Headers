/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/PFLTaskStateProvider.h>

@protocol PFLTaskDelegate, MLBatchProvider, PFLDataSource, OS_dispatch_queue, PFLTaskState;
@class NSString, PFLTaskConfiguration, PFLNetworkResourceManager, NSObject;

@interface PFLTaskContainer : NSObject <NSSecureCoding, PFLTaskStateProvider> {

	NSString* _identifier;
	PFLTaskConfiguration* _configuration;
	id<PFLTaskDelegate> _delegate;
	id<MLBatchProvider> _dataProvider;
	PFLNetworkResourceManager* _resourceManager;
	id<PFLDataSource> _metricsProvider;
	NSObject*<OS_dispatch_queue> _queue;
	id<PFLTaskState> _state;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) id<PFLTaskState> state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) PFLTaskConfiguration * configuration;                   //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<PFLTaskDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MLBatchProvider> dataProvider;                         //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) PFLNetworkResourceManager * resourceManager;              //@synthesize resourceManager=_resourceManager - In the implementation block
@property (nonatomic,retain) id<PFLDataSource> metricsProvider;                        //@synthesize metricsProvider=_metricsProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)descriptionFromState:(unsigned long long)arg1 ;
+(id)loadFromSavedStateURL:(id)arg1 ;
-(void)setDataProvider:(id<MLBatchProvider>)arg1 ;
-(void)suspend;
-(int)modelVersion;
-(void)setMetricsProvider:(id<PFLDataSource>)arg1 ;
-(id<PFLTaskDelegate>)delegate;
-(id)layerNames;
-(void)encodeWithCoder:(id)arg1 ;
-(id)modelConfiguration;
-(void)setDelegate:(id<PFLTaskDelegate>)arg1 ;
-(NSString *)description;
-(PFLTaskConfiguration *)configuration;
-(id<MLBatchProvider>)dataProvider;
-(id<PFLDataSource>)metricsProvider;
-(id)taskIdentifier;
-(void)_saveState;
-(void)setState:(id<PFLTaskState>)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<PFLTaskState>)state;
-(id)modelIdentifier;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)identifier;
-(PFLNetworkResourceManager *)resourceManager;
-(id)initWithIdentifier:(id)arg1 configuration:(id)arg2 ;
-(void)resume;
-(id)metricsIdentifier;
-(id)initWithIdentifier:(id)arg1 configuration:(id)arg2 state:(id)arg3 ;
-(void)markStateTransition:(id)arg1 ;
-(double)privatizationNormMax;
-(unsigned long long)privatizationNormBinCount;
-(double)validationSplit;
-(id)compiledModelURL;
-(id)uploadResultsIdentifier;
-(void)setResourceManager:(PFLNetworkResourceManager *)arg1 ;
@end

