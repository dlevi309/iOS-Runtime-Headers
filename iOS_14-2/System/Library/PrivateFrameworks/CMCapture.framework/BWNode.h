/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol BWNodeRenderDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, NSString, BWGraph, BWNodeInput, BWNodeOutput, NSArray;

@interface BWNode : NSObject {

	NSMutableArray* _inputs;
	NSMutableArray* _outputs;
	NSString* _name;
	NSString* _subgraphName;
	BOOL _supportsConcurrentLiveInputCallbacks;
	BOOL _supportsLiveReconfiguration;
	BOOL _singleInput;
	BOOL _singleOutput;
	BWGraph* _graph;
	int _deferredPreparePriority;
	id<BWNodeRenderDelegate> _renderDelegate;
	long long _configurationID;
	BWNodeInput* _input;
	BWNodeOutput* _output;

}

@property (assign,nonatomic) BOOL supportsConcurrentLiveInputCallbacks;              //@synthesize supportsConcurrentLiveInputCallbacks=_supportsConcurrentLiveInputCallbacks - In the implementation block
@property (assign,nonatomic) BOOL supportsLiveReconfiguration;                       //@synthesize supportsLiveReconfiguration=_supportsLiveReconfiguration - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * subgraphName;                                  //@synthesize subgraphName=_subgraphName - In the implementation block
@property (readonly) NSString * nodeType; 
@property (readonly) NSString * nodeSubType; 
@property (readonly) NSArray * inputs; 
@property (readonly) NSArray * outputs; 
@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (assign,nonatomic) id<BWNodeRenderDelegate> renderDelegate;                //@synthesize renderDelegate=_renderDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasNonLiveConfigurationChanges; 
@property (assign,nonatomic) BWGraph * graph;                                        //@synthesize graph=_graph - In the implementation block
@property (assign,nonatomic) int deferredPreparePriority;                            //@synthesize deferredPreparePriority=_deferredPreparePriority - In the implementation block
+(void)initialize;
-(BWGraph *)graph;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)makeCurrentConfigurationLive;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(NSString *)nodeType;
-(BOOL)hasNonLiveConfigurationChanges;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(NSString *)nodeSubType;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setRenderDelegate:(id<BWNodeRenderDelegate>)arg1 ;
-(id)init;
-(BWNodeInput *)input;
-(BWNodeOutput *)output;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(long long)configurationID;
-(void)setConfigurationID:(long long)arg1 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(void)setSupportsLiveReconfiguration:(BOOL)arg1 ;
-(NSString *)name;
-(void)handleStillImagePrewarmWithSettings:(id)arg1 forInput:(id)arg2 ;
-(void)addOutput:(id)arg1 ;
-(id)description;
-(void)didSelectFormat:(id)arg1 forOutput:(id)arg2 ;
-(BOOL)supportsLiveReconfiguration;
-(void)_handleMessage:(id)arg1 fromInput:(id)arg2 ;
-(BOOL)supportsConcurrentLiveInputCallbacks;
-(NSString *)subgraphName;
-(void)didSelectFormat:(id)arg1 forOutput:(id)arg2 forAttachedMediaKey:(id)arg3 ;
-(BOOL)allInputsHaveReachedState:(int)arg1 ;
-(void)setSubgraphName:(NSString *)arg1 ;
-(int)deferredPreparePriority;
-(void)setDeferredPreparePriority:(int)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)inputs;
-(id<BWNodeRenderDelegate>)renderDelegate;
-(void)setSupportsConcurrentLiveInputCallbacks:(BOOL)arg1 ;
-(NSArray *)outputs;
-(void)setGraph:(BWGraph *)arg1 ;
-(void)dealloc;
@end

