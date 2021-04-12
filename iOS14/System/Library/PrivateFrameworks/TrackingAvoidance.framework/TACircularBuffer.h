/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface TACircularBuffer : NSObject <NSSecureCoding> {

	unsigned long long _capacity;
	NSMutableArray* _buffer;

}

@property (nonatomic,retain) NSMutableArray * buffer;                    //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)removeLastObject;
-(void)setBuffer:(NSMutableArray *)arg1 ;
-(unsigned long long)capacity;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)objectsMatchingPredicate:(id)arg1 ;
-(id)lastObject;
-(id)firstObject;
-(id)description;
-(NSMutableArray *)buffer;
-(id)removeWithPredicate:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)bufferCopy;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(id)removeUntilFirstPredicateFail:(id)arg1 ;
-(id)insert:(id)arg1 at:(unsigned long long)arg2 ;
-(id)dropOldestElement;
-(id)add:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)firstObjectMatchingTest:(/*^block*/id)arg1 withOptions:(unsigned long long)arg2 ;
@end

