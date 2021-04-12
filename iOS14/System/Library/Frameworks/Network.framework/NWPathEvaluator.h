/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Network.framework/Network
*/


@protocol OS_nw_path_evaluator;
@class NWEndpoint, NSObject, NWPath, NWParameters;

@interface NWPathEvaluator : NSObject {

	NWEndpoint* _endpoint;
	NSObject*<OS_nw_path_evaluator> _internalEvaluator;
	NWPath* _internalPath;
	NWParameters* _parameters;

}

@property (readonly) NSObject*<OS_nw_path_evaluator> internalEvaluator;              //@synthesize internalEvaluator=_internalEvaluator - In the implementation block
@property (retain) NWPath * internalPath;                                            //@synthesize internalPath=_internalPath - In the implementation block
@property (readonly) NWParameters * parameters;                                      //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) NWPath * path; 
@property (nonatomic,readonly) NWEndpoint * endpoint;                                //@synthesize endpoint=_endpoint - In the implementation block
+(id)wf_pathEvaluatorForURL:(id)arg1 ;
+(void)initialize;
+(id)copySavedPathEvaluatorForEndpoint:(id)arg1 parameters:(id)arg2 ;
+(void)savePathEvaluator:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)sharedDefaultEvaluator;
-(BOOL)wf_isReachable;
-(NWParameters *)parameters;
-(id)init;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NWEndpoint *)endpoint;
-(NWPath *)path;
-(void)setInternalPath:(NWPath *)arg1 ;
-(NWPath *)internalPath;
-(id)copyPath;
-(id)initWithEvaluator:(id)arg1 parameters:(id)arg2 ;
-(id)initWithBrowseDescriptor:(id)arg1 parameters:(id)arg2 ;
-(id)initWithListenParameters:(id)arg1 ;
-(void)satisfyPathAgentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)triggerPathAgentsIncludingVoluntary:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)triggerVoluntaryPathAgentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)requestNexus;
-(BOOL)matchesEndpoint:(id)arg1 parameters:(id)arg2 ;
-(NSObject*<OS_nw_path_evaluator>)internalEvaluator;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

