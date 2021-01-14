/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBInt32Array : NSObject <NSCopying> {

	GPBMessage* _autocreator;
	int* _values;
	unsigned long long _count;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)arrayWithCapacity:(unsigned long long)arg1 ;
+(id)array;
+(id)arrayWithValue:(int)arg1 ;
+(id)arrayWithValueArray:(id)arg1 ;
-(void)addValue:(int)arg1 ;
-(int)valueAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAll;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValues:(const int*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
-(void)addValuesFromArray:(id)arg1 ;
-(id)initWithValueArray:(id)arg1 ;
-(void)internalResizeToCapacity:(unsigned long long)arg1 ;
-(void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addValues:(const int*)arg1 count:(unsigned long long)arg2 ;
-(void)insertValue:(int)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(int)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 ;
-(void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2 ;
@end

