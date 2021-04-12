/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSError, NSMutableArray, NFUnfairLock;

@interface NFPromiseSeal : NSObject {

	id _value;
	NSError* _error;
	unsigned long long _state;
	NSMutableArray* _handlers;
	NFUnfairLock* _lock;

}

@property (nonatomic,retain) id value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSError * error;                        //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) unsigned long long state;               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * handlers;              //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) NFUnfairLock * lock;                  //@synthesize lock=_lock - In the implementation block
-(NSMutableArray *)handlers;
-(void)setHandlers:(NSMutableArray *)arg1 ;
-(void)resolveOn:(id)arg1 reject:(/*^block*/id)arg2 resolve:(/*^block*/id)arg3 ;
-(id)initWithError:(id)arg1 ;
-(id)init;
-(void)registerHandler:(/*^block*/id)arg1 ;
-(void)reject:(id)arg1 ;
-(id)initWithValue:(id)arg1 ;
-(NFUnfairLock *)lock;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)resolve:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)state;
-(void)seal:(id)arg1 error:(id)arg2 resolution:(unsigned long long)arg3 ;
-(void)alwaysOn:(id)arg1 always:(/*^block*/id)arg2 ;
-(id)value;
-(void)dealloc;
@end

