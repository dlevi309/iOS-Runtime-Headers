/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSPointerFunctions : NSObject <NSCopying>

@property (assign) /*function pointer*/void* hashFunction; 
@property (assign) /*function pointer*/void* isEqualFunction; 
@property (assign) /*function pointer*/void* sizeFunction; 
@property (assign) /*function pointer*/void* descriptionFunction; 
@property (assign) /*function pointer*/void* relinquishFunction; 
@property (assign) /*function pointer*/void* acquireFunction; 
@property (assign) BOOL usesStrongWriteBarrier; 
@property (assign) BOOL usesWeakReadAndWriteBarriers; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)pointerFunctionsWithOptions:(unsigned long long)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)setAcquireFunction:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)sizeFunction;
-(void)setSizeFunction:(/*function pointer*/void*)arg1 ;
-(BOOL)usesStrongWriteBarrier;
-(void)setDescriptionFunction:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)relinquishFunction;
-(/*function pointer*/void*)hashFunction;
-(/*function pointer*/void*)acquireFunction;
-(/*function pointer*/void*)isEqualFunction;
-(BOOL)usesWeakReadAndWriteBarriers;
-(void)setIsEqualFunction:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)descriptionFunction;
-(void)setRelinquishFunction:(/*function pointer*/void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUsesWeakReadAndWriteBarriers:(BOOL)arg1 ;
-(void)setUsesStrongWriteBarrier:(BOOL)arg1 ;
-(void)setHashFunction:(/*function pointer*/void*)arg1 ;
@end

