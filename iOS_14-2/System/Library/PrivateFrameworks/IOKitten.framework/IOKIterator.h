/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IOKitten.framework/IOKitten
*/

#import <IOKitten/IOKObject.h>

@interface IOKIterator : IOKObject {

	/*^block*/id _enumerationBlock;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
-(id)nextObject;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(void)enumerate;
-(id)initWithIOObject:(unsigned)arg1 ;
-(BOOL)isValid;
-(id)initWithIterator:(unsigned)arg1 enumerationBlock:(/*^block*/id)arg2 ;
-(void)reset;
-(id)initWithIterator:(unsigned)arg1 ;
@end

