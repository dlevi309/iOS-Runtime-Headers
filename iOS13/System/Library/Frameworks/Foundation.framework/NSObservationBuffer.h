/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSObservationTransformer.h>

@interface NSObservationBuffer : NSObservationTransformer

@property (getter=isMemoryPressureSensitive) BOOL memoryPressureSensitive; 
@property (copy) id bufferFullHandler; 
@property (assign) BOOL automaticallyEmitsObjects; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)bufferWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
+(id)bufferWithOutputQueue:(id)arg1 ;
-(id)initWithMaximumObjectCount:(unsigned long long)arg1 fullPolicy:(long long)arg2 outputQueue:(id)arg3 ;
-(id)bufferFullHandler;
-(void)emitObject;
-(void)emitAllObjects;
-(void)setBufferFullHandler:(id)arg1 ;
-(BOOL)automaticallyEmitsObjects;
-(void)setAutomaticallyEmitsObjects:(BOOL)arg1 ;
-(BOOL)isMemoryPressureSensitive;
-(void)setMemoryPressureSensitive:(BOOL)arg1 ;
@end

