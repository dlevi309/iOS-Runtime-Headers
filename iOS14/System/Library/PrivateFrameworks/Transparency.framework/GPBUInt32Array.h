/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/Transparency-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GPBMessage;

@interface GPBUInt32Array : NSObject <NSCopying> {

	GPBMessage* _autocreator;
	unsigned* _values;
	unsigned long long _count;
	unsigned long long _capacity;

}

@property (nonatomic,readonly) unsigned long long count;              //@synthesize count=_count - In the implementation block
+(id)arrayWithCapacity:(unsigned long long)arg1 ;
+(id)array;
+(id)arrayWithValue:(unsigned)arg1 ;
+(id)arrayWithValueArray:(id)arg1 ;
-(void)addValue:(unsigned)arg1 ;
-(unsigned)valueAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)removeAll;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValues:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)enumerateValuesWithBlock:(/*^block*/id)arg1 ;
-(void)addValuesFromArray:(id)arg1 ;
-(id)initWithValueArray:(id)arg1 ;
-(void)internalResizeToCapacity:(unsigned long long)arg1 ;
-(void)enumerateValuesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)addValues:(const unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)insertValue:(unsigned)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceValueAtIndex:(unsigned long long)arg1 withValue:(unsigned)arg2 ;
-(void)removeValueAtIndex:(unsigned long long)arg1 ;
-(void)exchangeValueAtIndex:(unsigned long long)arg1 withValueAtIndex:(unsigned long long)arg2 ;
@end

