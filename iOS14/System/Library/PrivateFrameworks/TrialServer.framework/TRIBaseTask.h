/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRITaskQueueStateProviding;
@class NSDate, NSString, NSArray;

@interface TRIBaseTask : NSObject {

	NSDate* startTime;
	id<TRITaskQueueStateProviding> _stateProvider;

}

@property (nonatomic,readonly) NSString * taskName; 
@property (nonatomic,readonly) NSArray * tags; 
@property (nonatomic,retain) NSDate * startTime; 
@property (nonatomic,readonly) NSArray * dependencies; 
@property (assign,nonatomic,__weak) id<TRITaskQueueStateProviding> stateProvider;              //@synthesize stateProvider=_stateProvider - In the implementation block
-(NSArray *)tags;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSArray *)dependencies;
-(unsigned long long)requiredCapabilities;
-(id)description;
-(unsigned long long)hash;
-(NSString *)taskName;
-(NSDate *)startTime;
-(BOOL)isEqual:(id)arg1 ;
-(void)runEnqueueHandlerUsingContext:(id)arg1 ;
-(void)runDequeueHandlerUsingContext:(id)arg1 ;
-(id<TRITaskQueueStateProviding>)stateProvider;
-(void)setStateProvider:(id<TRITaskQueueStateProviding>)arg1 ;
@end

