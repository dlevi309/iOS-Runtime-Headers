/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
*/

#import <TrialProto/TrialProto-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIPBMessage;

@interface TRIPBEnumArray : NSObject <NSCopying> {

	TRIPBMessage* _autocreator;
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(int)valueAtIndex:(unsigned long long)arg1 ;
-(void)addValue:(int)arg1 ;
-(void)removeAll;
-(void)removeValueAtIndex:(unsigned long long)arg1 ;
-(/*function pointer*/void*)validationFunc;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 capacity:(unsigned long long)arg2 ;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateRawValuesWithBlock:(/*^block*/id)arg1 ;
-(id)initWithValueArray:(id)arg1 ;
-(void)internalResizeToCapacity:(unsigned long long)arg1 ;
-(void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addValues:(const int*)arg1 count:(unsigned long long)arg2 ;
-(void)insertValue:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(int)arg2 ;
-(void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2 ;
-(id)initWithValidationFunction:(/*function pointer*/void*)arg1 rawValues:(const int*)arg2 count:(unsigned long long)arg3 ;
-(void)enumerateRawValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addRawValues:(const int*)arg1 count:(unsigned long long)arg2 ;
-(int)rawValueAtIndex:(unsigned long long)arg1 ;
-(void)addRawValue:(int)arg1 ;
-(void)insertRawValue:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withRawValue:(int)arg2 ;
-(void)addRawValuesFromArray:(id)arg1 ;
@end

