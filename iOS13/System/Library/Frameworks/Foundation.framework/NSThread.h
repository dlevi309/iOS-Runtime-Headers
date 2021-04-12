/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


#import <Foundation/Foundation-Structs.h>
@class NSMutableDictionary, NSString;

@interface NSThread : NSObject {

	id _private;
	unsigned char _bytes[44];

}

@property (retain,readonly) NSMutableDictionary * threadDictionary; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
@property (assign) unsigned long long stackSize; 
@property (readonly) BOOL isMainThread; 
@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
+(id)callStackReturnAddresses;
+(id)callStackSymbols;
+(id)currentThread;
+(double)threadPriority;
+(BOOL)setThreadPriority:(double)arg1 ;
+(BOOL)isDying;
+(id)mainThread;
+(BOOL)isMainThread;
+(BOOL)isMultiThreaded;
+(void)sleepUntilDate:(id)arg1 ;
+(void)sleepForTimeInterval:(double)arg1 ;
+(void)exit;
+(void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3 ;
+(void)detachNewThreadWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)cancel;
-(NSMutableDictionary *)threadDictionary;
-(void)start;
-(BOOL)isCancelled;
-(void)main;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(double)threadPriority;
-(void)setThreadPriority:(double)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(BOOL)_setThreadPriority:(double)arg1 ;
-(BOOL)isDying;
-(BOOL)isMainThread;
-(id)runLoop;
-(void)setStackSize:(unsigned long long)arg1 ;
-(unsigned long long)stackSize;
-(pthread_override_sRef)_beginQoSOverride:(unsigned)arg1 relativePriority:(int)arg2 ;
-(void)_endQoSOverride:(pthread_override_sRef)arg1 ;
-(void)_nq:(id)arg1 ;
@end

