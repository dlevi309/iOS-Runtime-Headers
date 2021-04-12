/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol OS_dispatch_queue;
@class NSString, NUPriority, NSObject, NURenderContext;

@interface NURenderClient : NSObject {

	BOOL _shouldCoalesceUpdates;
	NSString* _name;
	NUPriority* _priority;
	NSObject*<OS_dispatch_queue> _responseQueue;
	NURenderContext* _renderContext;
	/*^block*/id _genericCompletionBlock;

}

@property (copy) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (nonatomic,retain) NURenderContext * renderContext;                 //@synthesize renderContext=_renderContext - In the implementation block
@property (copy) id genericCompletionBlock;                                   //@synthesize genericCompletionBlock=_genericCompletionBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldCoalesceUpdates;                      //@synthesize shouldCoalesceUpdates=_shouldCoalesceUpdates - In the implementation block
@property (retain) NUPriority * priority;                                     //@synthesize priority=_priority - In the implementation block
-(id)init;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)cancel;
-(NUPriority *)priority;
-(void)setPriority:(NUPriority *)arg1 ;
-(NURenderContext *)renderContext;
-(void)setRenderContext:(NURenderContext *)arg1 ;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(id)initWithName:(id)arg1 responseQueue:(id)arg2 ;
-(void)setShouldCoalesceUpdates:(BOOL)arg1 ;
-(BOOL)shouldCoalesceUpdates;
-(void)submitGenericRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)submitGenericRequest:(id)arg1 ;
-(id)genericCompletionBlock;
-(void)setGenericCompletionBlock:(id)arg1 ;
@end

