/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)asVoid;
+(id)firstly:(/*^block*/id)arg1 ;
+(id)asVoid:(id)arg1 ;
+(id)asDelay:(double)arg1 withValue:(id)arg2 ;
+(id)asDelay:(double)arg1 onQueue:(id)arg2 withValue:(id)arg3 ;
+(id)asDelay:(double)arg1 onQueue:(id)arg2 withError:(id)arg3 ;
+(id)asDelay:(double)arg1 withError:(id)arg2 ;
-(id)then:(/*^block*/id)arg1 ;
-(id)then;
-(NFPromiseSeal *)seal;
-(id)always:(/*^block*/id)arg1 ;
-(id)initWithError:(id)arg1 ;
-(id)init;
-(id)errorOn:(id)arg1 error:(/*^block*/id)arg2 ;
-(id)initWithValue:(id)arg1 ;
-(id)error;
-(id)resolveOn;
-(id)delay;
-(id)delayOn;
-(id)pipeOn;
-(id)resolve;
-(id)thenOn:(id)arg1 then:(/*^block*/id)arg2 ;
-(id)errorOn;
-(id)pipe;
-(void)setSeal:(NFPromiseSeal *)arg1 ;
-(id)error:(/*^block*/id)arg1 ;
-(id)alwaysOn:(id)arg1 always:(/*^block*/id)arg2 ;
-(id)initWithResolver:(/*^block*/id)arg1 ;
-(id)thenOn;
-(void)dealloc;
@end

