/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBEnumArray : NSObject <NSCopying> {

	GPBMessage* _autocreator;
	/*function pointer*/void* _validationFunc;
	int* _values;
	unsigned long long _count;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) /*function pointer*/void* validationFunc;              //@synthesize validationFunc=_validationFunc - In the implementation block
+(id)array;
+(id)arrayWithValueArray:(id)arg1 ;
+(id)arrayWithValidationFunction:(/*function pointer*/void*)arg1 ;
+(id)arrayWithValidationFunction:(/*function pointer*/void*)arg1 rawValue:(int)arg2 ;
+(id)arrayWithValidationFunction:(/*function pointer*/void*)arg1 capacity:(unsigned long long)arg2 ;
-(void)addValue:(int)arg1 ;
-(int)valueAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAll;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
-(int)rawValueAtIndex:(unsigned long long)arg1 ;
-(void)addRawValuesFromArray:(id)arg1 ;
-(void)enumerateRawValuesWithBlock:(/*^block*/id)arg1 ;
-(void)addRawValue:(int)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 ;
-(id)initWithValueArray:(id)arg1 ;
-(void)internalResizeToCapacity:(unsigned long long)arg1 ;
-(void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addValues:(const int*)arg1 count:(unsigned long long)arg2 ;
-(void)insertValue:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(int)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 ;
-(void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 rawValues:(const int*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 capacity:(unsigned long long)arg2 ;
-(void)enumerateRawValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addRawValues:(const int*)arg1 count:(unsigned long long)arg2 ;
-(void)insertRawValue:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withRawValue:(int)arg2 ;
-(/*function pointer*/void*)validationFunc;
@end

