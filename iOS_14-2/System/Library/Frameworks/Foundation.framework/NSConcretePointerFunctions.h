/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPointerFunctions.h>

@interface NSConcretePointerFunctions : NSPointerFunctions {

	NSSlice* slice;

}
+(void)initializeBackingStore:(NSSlice*)arg1 sentinel:(BOOL)arg2 ;
+(BOOL)initializeSlice:(NSSlice*)arg1 withOptions:(unsigned long long)arg2 ;
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
-(unsigned long long)hash;
-(BOOL)usesWeakReadAndWriteBarriers;
-(void)setIsEqualFunction:(/*function pointer*/void*)arg1 ;
-(/*function pointer*/void*)descriptionFunction;
-(void)setRelinquishFunction:(/*function pointer*/void*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUsesWeakReadAndWriteBarriers:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUsesStrongWriteBarrier:(BOOL)arg1 ;
-(void)setHashFunction:(/*function pointer*/void*)arg1 ;
@end

