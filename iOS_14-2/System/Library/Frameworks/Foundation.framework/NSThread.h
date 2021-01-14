/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(void)exit;
+(BOOL)isMainThread;
+(BOOL)isDying;
+(id)currentThread;
+(void)detachNewThreadWithBlock:(/*^block*/id)arg1 ;
+(void)detachNewThreadSelector:(SEL)arg1 toTarget:(id)arg2 withObject:(id)arg3 ;
+(id)callStackReturnAddresses;
+(double)threadPriority;
+(void)sleepUntilDate:(id)arg1 ;
+(id)callStackSymbols;
+(void)sleepForTimeInterval:(double)arg1 ;
+(BOOL)setThreadPriority:(double)arg1 ;
+(BOOL)isMultiThreaded;
+(id)mainThread;
-(unsigned long long)stackSize;
-(void)_nq:(id)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)isMainThread;
-(BOOL)isDying;
-(id)init;
-(void)start;
-(pthread_override_sRef)_beginQoSOverride:(unsigned)arg1 relativePriority:(int)arg2 ;
-(BOOL)isFinished;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(NSString *)name;
-(NSMutableDictionary *)threadDictionary;
-(id)description;
-(double)threadPriority;
-(void)main;
-(void)_endQoSOverride:(pthread_override_sRef)arg1 ;
-(void)setThreadPriority:(double)arg1 ;
-(BOOL)_setThreadPriority:(double)arg1 ;
-(BOOL)isExecuting;
-(void)setName:(NSString *)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)setStackSize:(unsigned long long)arg1 ;
-(long long)qualityOfService;
-(void)cancel;
-(id)runLoop;
-(BOOL)isCancelled;
-(void)dealloc;
@end

