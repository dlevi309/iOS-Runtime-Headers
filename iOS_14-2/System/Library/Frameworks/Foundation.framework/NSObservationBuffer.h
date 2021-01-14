/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSObservationTransformer.h>

@interface NSObservationBuffer : NSObservationTransformer

@property (getter=isMemoryPressureSensitive) BOOL memoryPressureSensitive; 
@property (copy) id bufferFullHandler; 
@property (assign) BOOL automaticallyEmitsObjects; 
+(id)bufferWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)bufferWithOutputQueue:(id)arg1 ;
-(id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
-(void)emitObject;
-(void)setAutomaticallyEmitsObjects:(BOOL)arg1 ;
-(void)setMemoryPressureSensitive:(BOOL)arg1 ;
-(id)bufferFullHandler;
-(BOOL)automaticallyEmitsObjects;
-(BOOL)isMemoryPressureSensitive;
-(void)emitAllObjects;
-(void)setBufferFullHandler:(id)arg1 ;
@end

