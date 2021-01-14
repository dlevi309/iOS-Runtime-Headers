/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Engram.framework/Engram
*/


@class NSArray, CUTResult;

@interface ENAsyncReducer : NSObject {

	NSArray* _input;
	CUTResult* _result;
	/*^block*/id _reducerBlock;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) NSArray * input;                 //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) CUTResult * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) id completionBlock;                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,copy) id reducerBlock;                   //@synthesize reducerBlock=_reducerBlock - In the implementation block
-(void)setResult:(CUTResult *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSArray *)input;
-(void)setInput:(NSArray *)arg1 ;
-(CUTResult *)result;
-(id)reducerBlock;
-(void)_completeWithResult:(id)arg1 ;
-(void)_reduceWithPending:(id)arg1 visited:(id)arg2 currentResult:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithInput:(id)arg1 initialValue:(id)arg2 ;
-(void)setReducerBlock:(id)arg1 ;
-(void)reduceWithCompletion:(/*^block*/id)arg1 ;
@end

