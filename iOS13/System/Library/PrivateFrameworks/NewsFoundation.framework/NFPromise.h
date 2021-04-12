/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NFPromiseSeal;

@interface NFPromise : NSObject {

	NFPromiseSeal* _seal;

}

@property (nonatomic,retain) NFPromiseSeal * seal;              //@synthesize seal=_seal - In the implementation block
@property (readonly) id then; 
@property (readonly) id thenOn; 
@property (readonly) id pipe; 
@property (readonly) id pipeOn; 
@property (readonly) id error; 
@property (readonly) id errorOn; 
@property (readonly) id resolve; 
@property (readonly) id resolveOn; 
@property (readonly) id delay; 
@property (readonly) id delayOn; 
+(id)new;
+(id)firstly:(/*^block*/id)arg1 ;
+(id)asVoid;
+(id)asVoid:(id)arg1 ;
+(id)asDelay:(double)arg1 withValue:(id)arg2 ;
+(id)asDelay:(double)arg1 onQueue:(id)arg2 withValue:(id)arg3 ;
+(id)asDelay:(double)arg1 onQueue:(id)arg2 withError:(id)arg3 ;
+(id)asDelay:(double)arg1 withError:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)error;
-(id)pipe;
-(id)delay;
-(id)resolve;
-(id)initWithError:(id)arg1 ;
-(id)then:(/*^block*/id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(void)setSeal:(NFPromiseSeal *)arg1 ;
-(NFPromiseSeal *)seal;
-(id)always:(/*^block*/id)arg1 ;
-(id)thenOn:(id)arg1 then:(/*^block*/id)arg2 ;
-(id)errorOn:(id)arg1 error:(/*^block*/id)arg2 ;
-(id)initWithResolver:(/*^block*/id)arg1 ;
-(id)error:(/*^block*/id)arg1 ;
-(id)resolveOn;
-(id)thenOn;
-(id)alwaysOn:(id)arg1 always:(/*^block*/id)arg2 ;
-(id)then;
-(id)pipeOn;
-(id)errorOn;
-(id)delayOn;
@end

