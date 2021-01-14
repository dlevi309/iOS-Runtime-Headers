/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSMutableDictionary;

@interface PXTimeInterval : NSObject {

	long long _state;
	double _beginTime;
	double _endTime;
	NSMutableDictionary* _tokenToTransitionHandler;

}

@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double beginTime;                                            //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) double endTime;                                              //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tokenToTransitionHandler;              //@synthesize tokenToTransitionHandler=_tokenToTransitionHandler - In the implementation block
@property (nonatomic,readonly) double duration; 
-(double)beginTime;
-(void)beginInterval;
-(id)init;
-(id)addStateTransitionHandler:(/*^block*/id)arg1 ;
-(void)setBeginTime:(double)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)endInterval;
-(long long)state;
-(void)setEndTime:(double)arg1 ;
-(void)removeStateTransitionHandler:(id)arg1 ;
-(void)beginIntervalWithTimeOverride:(double)arg1 ;
-(void)endIntervalWithTimeOverride:(double)arg1 ;
-(void)_notifyStateTransitionHandlersOfTransitionFromState:(long long)arg1 ;
-(NSMutableDictionary *)tokenToTransitionHandler;
-(void)setTokenToTransitionHandler:(NSMutableDictionary *)arg1 ;
-(double)endTime;
-(double)duration;
@end

