/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NUDevice, OS_dispatch_queue;
@class NSArray, NSString, NUPriority, NSObject, NURenderContext, NUComposition;

@interface NURenderRequest : NSObject <NSCopying> {

	long long _requestNumber;
	long long _copiedFromRequestNumber;
	long long _parentRequestNumber;
	long long _sampleMode;
	NSArray* _pipelineFilters;
	id<NUDevice> _device;
	NSString* _name;
	NUPriority* _priority;
	NSObject*<OS_dispatch_queue> _responseQueue;
	NURenderContext* _renderContext;
	NUComposition* _internalComposition;
	double _submitTime;
	/*^block*/id _completionBlock;
	id _voucher;
	SCD_Struct_NU6 _time;

}

@property (nonatomic,copy,readonly) NSString * additionalDebugInfo; 
@property (copy) NUComposition * internalComposition;                                 //@synthesize internalComposition=_internalComposition - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU6 time;                                     //@synthesize time=_time - In the implementation block
@property (assign) double submitTime;                                                 //@synthesize submitTime=_submitTime - In the implementation block
@property (copy) id completionBlock;                                                  //@synthesize completionBlock=_completionBlock - In the implementation block
@property (retain) id voucher;                                                        //@synthesize voucher=_voucher - In the implementation block
@property (nonatomic,copy) NUComposition * composition; 
@property (assign,nonatomic) long long sampleMode;                                    //@synthesize sampleMode=_sampleMode - In the implementation block
@property (nonatomic,copy) NSArray * pipelineFilters;                                 //@synthesize pipelineFilters=_pipelineFilters - In the implementation block
@property (nonatomic,retain) id<NUDevice> device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NUPriority * priority;                                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (nonatomic,retain) NURenderContext * renderContext;                         //@synthesize renderContext=_renderContext - In the implementation block
@property (assign) BOOL shouldCoalesceUpdates; 
-(id)voucher;
-(SCD_Struct_NU6)time;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)setTime:(SCD_Struct_NU6)arg1 ;
-(void)setSampleMode:(long long)arg1 ;
-(NSArray *)pipelineFilters;
-(id)init;
-(id)initWithComposition:(id)arg1 ;
-(NUComposition *)composition;
-(id<NUDevice>)device;
-(NSString *)name;
-(id)description;
-(void)setRenderContext:(NURenderContext *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
-(NURenderContext *)renderContext;
-(void)setPipelineFilters:(NSArray *)arg1 ;
-(void)setDevice:(id<NUDevice>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setVoucher:(id)arg1 ;
-(NUPriority *)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setComposition:(NUComposition *)arg1 ;
-(void)setPriority:(NUPriority *)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(long long)sampleMode;
-(void)takePropertiesFromRequest:(id)arg1 ;
-(void)setShouldCoalesceUpdates:(BOOL)arg1 ;
-(BOOL)shouldCoalesceUpdates;
-(void)submitGeneric:(/*^block*/id)arg1 ;
-(void)submitGenericConfiguringRequest:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)submitGenericSynchronous:(out id*)arg1 ;
-(void)introspectPrepare:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(void)setResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NUComposition *)internalComposition;
-(void)setInternalComposition:(NUComposition *)arg1 ;
-(double)submitTime;
-(void)setSubmitTime:(double)arg1 ;
-(NSString *)additionalDebugInfo;
@end

